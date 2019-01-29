const uint8_t Bitmaps4x5Fixed[] PROGMEM = {
  0xE8, 0xA0, 0x5F, 0x5F, 0x50, 0xFA, 0xF5, 0xF0, 0xA5, 0x4A, 0x00, 0xEA, 
  0xFA, 0xF0, 0x80, 0x6A, 0x40, 0x95, 0x80, 0xAA, 0x80, 0x5D, 0x00, 0xC0, 
  0xE0, 0x80, 0x12, 0x48, 0x76, 0xDC, 0x00, 0xF8, 0xE7, 0xCE, 0x00, 0xE5, 
  0x9E, 0x00, 0xB7, 0x92, 0x00, 0xF3, 0x1C, 0x00, 0xF3, 0xDE, 0x00, 0xE5, 
  0x48, 0x00, 0xF7, 0xDE, 0x00, 0xF7, 0x9E, 0x00, 0xA0, 0xB0, 0x2A, 0x22, 
  0xE3, 0x80, 0x88, 0xA8, 0xC5, 0x04, 0x00, 0xFB, 0xB8, 0xF0, 0x57, 0xDA, 
  0x00, 0xD7, 0x5C, 0x00, 0x72, 0x46, 0x00, 0xD6, 0xDC, 0x00, 0xF3, 0x4E, 
  0x00, 0xF3, 0x48, 0x00, 0x78, 0xB9, 0x60, 0xB7, 0xDA, 0x00, 0xE9, 0x2E, 
  0x00, 0x24, 0xD4, 0x00, 0xB7, 0x5A, 0x00, 0x92, 0x4E, 0x00, 0xFF, 0x99, 
  0x90, 0xF6, 0xDA, 0x00, 0x56, 0xD4, 0x00, 0xD7, 0x48, 0x00, 0xF9, 0x9B, 
  0xF0, 0xF7, 0xEA, 0x00, 0xF3, 0x9E, 0x00, 0xE9, 0x24, 0x00, 0xB6, 0xDE, 
  0x00, 0xB6, 0xD4, 0x00, 0x99, 0x9F, 0xF0, 0xB5, 0x5A, 0x00, 0xB5, 0x24, 
  0x00, 0xE5, 0x4E, 0x00, 0xEA, 0xC0, 0x84, 0x21, 0xD5, 0xC0, 0x54, 0xE0, 
  0x80, 0xE7, 0xF0, 0x93, 0x5E, 0x00, 0xF2, 0x70, 0x25, 0xDE, 0x00, 0xFE, 
  0x70, 0x6B, 0xA4, 0xFC, 0xF0, 0x00, 0x93, 0xDA, 0x00, 0xF0, 0x55, 0xC0, 
  0x97, 0x5A, 0x00, 0xAA, 0xC0, 0xFF, 0x99, 0xF6, 0xD0, 0x56, 0xA0, 0xFE, 
  0x40, 0xFC, 0x90, 0xF2, 0x40, 0xF1, 0xF0, 0x5D, 0x24, 0x00, 0xB6, 0xF0, 
  0xB6, 0xA0, 0x99, 0xFF, 0x96, 0x69, 0xBD, 0x20, 0x00, 0xE5, 0x70, 0x2B, 
  0x22, 0x00, 0xF8, 0x89, 0xA8, 0xCC, 0x00
};

const GFXglyph Glyphs4x5Fixed[] PROGMEM = {
  {     0,   0,   0,   2,    0,    1 }   // ' '
 ,{     0,   1,   5,   2,    0,   -4 }   // '!'
 ,{     1,   3,   1,   4,    0,   -4 }   // '"'
 ,{     2,   4,   5,   5,    0,   -4 }   // '#'
 ,{     5,   4,   5,   5,    0,   -4 }   // '$'
 ,{     8,   3,   5,   4,    0,   -4 }   // '%'
 ,{    11,   4,   5,   5,    0,   -4 }   // '&'
 ,{    14,   1,   1,   2,    0,   -4 }   // '''
 ,{    15,   2,   5,   3,    0,   -4 }   // '('
 ,{    17,   2,   5,   3,    0,   -4 }   // ')'
 ,{    19,   3,   3,   4,    0,   -3 }   // '*'
 ,{    21,   3,   3,   4,    0,   -3 }   // '+'
 ,{    23,   1,   2,   2,    0,   -1 }   // ','
 ,{    24,   3,   1,   4,    0,   -2 }   // '-'
 ,{    25,   1,   1,   2,    0,    0 }   // '.'
 ,{    26,   4,   4,   5,    0,   -3 }   // '/'
 ,{    28,   3,   5,   4,    0,   -4 }   // '0'
 ,{    31,   1,   5,   2,    0,   -4 }   // '1'
 ,{    32,   3,   5,   4,    0,   -4 }   // '2'
 ,{    35,   3,   5,   4,    0,   -4 }   // '3'
 ,{    38,   3,   5,   4,    0,   -4 }   // '4'
 ,{    41,   3,   5,   4,    0,   -4 }   // '5'
 ,{    44,   3,   5,   4,    0,   -4 }   // '6'
 ,{    47,   3,   5,   4,    0,   -4 }   // '7'
 ,{    50,   3,   5,   4,    0,   -4 }   // '8'
 ,{    53,   3,   5,   4,    0,   -4 }   // '9'
 ,{    56,   1,   3,   2,    0,   -3 }   // ':'
 ,{    57,   1,   4,   2,    0,   -3 }   // ';'
 ,{    58,   3,   5,   4,    0,   -4 }   // '<'
 ,{    60,   3,   3,   4,    0,   -3 }   // '='
 ,{    62,   3,   5,   4,    0,   -4 }   // '>'
 ,{    64,   3,   5,   4,    0,   -4 }   // '?'
 ,{    67,   4,   5,   5,    0,   -4 }   // '@'
 ,{    70,   3,   5,   4,    0,   -4 }   // 'A'
 ,{    73,   3,   5,   4,    0,   -4 }   // 'B'
 ,{    76,   3,   5,   4,    0,   -4 }   // 'C'
 ,{    79,   3,   5,   4,    0,   -4 }   // 'D'
 ,{    82,   3,   5,   4,    0,   -4 }   // 'E'
 ,{    85,   3,   5,   4,    0,   -4 }   // 'F'
 ,{    88,   4,   5,   5,    0,   -4 }   // 'G'
 ,{    91,   3,   5,   4,    0,   -4 }   // 'H'
 ,{    94,   3,   5,   4,    0,   -4 }   // 'I'
 ,{    97,   3,   5,   4,    0,   -4 }   // 'J'
 ,{   100,   3,   5,   4,    0,   -4 }   // 'K'
 ,{   103,   3,   5,   4,    0,   -4 }   // 'L'
 ,{   106,   4,   5,   5,    0,   -4 }   // 'M'
 ,{   109,   3,   5,   4,    0,   -4 }   // 'N'
 ,{   112,   3,   5,   4,    0,   -4 }   // 'O'
 ,{   115,   3,   5,   4,    0,   -4 }   // 'P'
 ,{   118,   4,   5,   5,    0,   -4 }   // 'Q'
 ,{   121,   3,   5,   4,    0,   -4 }   // 'R'
 ,{   124,   3,   5,   4,    0,   -4 }   // 'S'
 ,{   127,   3,   5,   4,    0,   -4 }   // 'T'
 ,{   130,   3,   5,   4,    0,   -4 }   // 'U'
 ,{   133,   3,   5,   4,    0,   -4 }   // 'V'
 ,{   136,   4,   5,   5,    0,   -4 }   // 'W'
 ,{   139,   3,   5,   4,    0,   -4 }   // 'X'
 ,{   142,   3,   5,   4,    0,   -4 }   // 'Y'
 ,{   145,   3,   5,   4,    0,   -4 }   // 'Z'
 ,{   148,   2,   5,   3,    0,   -4 }   // '['
 ,{   150,   4,   4,   5,    0,   -3 }   // '\'
 ,{   152,   2,   5,   3,    0,   -4 }   // ']'
 ,{   154,   3,   2,   4,    0,   -4 }   // '^'
 ,{   155,   3,   1,   4,    0,    0 }   // '_'
 ,{   156,   1,   1,   2,    0,   -4 }   // '`'
 ,{   157,   3,   4,   4,    0,   -3 }   // 'a'
 ,{   159,   3,   5,   4,    0,   -4 }   // 'b'
 ,{   162,   3,   4,   4,    0,   -3 }   // 'c'
 ,{   164,   3,   5,   4,    0,   -4 }   // 'd'
 ,{   167,   3,   4,   4,    0,   -3 }   // 'e'
 ,{   169,   3,   5,   4,    0,   -4 }   // 'f'
 ,{   171,   3,   5,   4,    0,   -3 }   // 'g'
 ,{   174,   3,   5,   4,    0,   -4 }   // 'h'
 ,{   177,   1,   4,   2,    0,   -3 }   // 'i'
 ,{   178,   2,   5,   3,    0,   -4 }   // 'j'
 ,{   180,   3,   5,   4,    0,   -4 }   // 'k'
 ,{   183,   2,   5,   3,    0,   -4 }   // 'l'
 ,{   185,   4,   4,   5,    0,   -3 }   // 'm'
 ,{   187,   3,   4,   4,    0,   -3 }   // 'n'
 ,{   189,   3,   4,   4,    0,   -3 }   // 'o'
 ,{   191,   3,   4,   4,    0,   -3 }   // 'p'
 ,{   193,   3,   4,   4,    0,   -3 }   // 'q'
 ,{   195,   3,   4,   4,    0,   -3 }   // 'r'
 ,{   197,   3,   4,   4,    0,   -3 }   // 's'
 ,{   199,   3,   5,   4,    0,   -4 }   // 't'
 ,{   202,   3,   4,   4,    0,   -3 }   // 'u'
 ,{   204,   3,   4,   4,    0,   -3 }   // 'v'
 ,{   206,   4,   4,   5,    0,   -3 }   // 'w'
 ,{   208,   4,   4,   5,    0,   -3 }   // 'x'
 ,{   210,   3,   5,   4,    0,   -3 }   // 'y'
 ,{   213,   3,   4,   5,    0,   -3 }   // 'z'
 ,{   215,   3,   5,   4,    0,   -4 }   // '{'
 ,{   218,   1,   5,   2,    0,   -4 }   // '|'
 ,{   219,   3,   5,   4,    0,   -4 }   // '}'
 ,{   221,   3,   2,   4,    0,   -2 }   // '~'
};

const GFXfont Font4x5Fixed PROGMEM = {
  (uint8_t  *)BitmapsFont4x5,
  (GFXglyph *)GlyphsFont4x5,
  0x20, 0x7E, 5 };

// Approx. 943 bytes