
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



int FUNC_0(const char *VAR_0, u8 *VAR_1){
  VAR_1[0] = 1;
  switch( VAR_0[0] ){
    case 'C':
          switch( VAR_0[1] ){
            case 'c': VAR_1[1] = 1; break;
            case 'f': VAR_1[2] = 1; break;
            case 'n': VAR_1[3] = 1; break;
            case 's': VAR_1[4] = 1; break;
            case 'o': VAR_1[31] = 1; break;
            case '*':
              VAR_1[1] = 1;
              VAR_1[2] = 1;
              VAR_1[3] = 1;
              VAR_1[4] = 1;
              VAR_1[31] = 1;
              break;
            default: return 1; }
          break;

    case 'L':
          switch( VAR_0[1] ){
            case 'l': VAR_1[5] = 1; break;
            case 'm': VAR_1[6] = 1; break;
            case 'o': VAR_1[7] = 1; break;
            case 't': VAR_1[8] = 1; break;
            case 'u': VAR_1[9] = 1; break;
            case 'C': VAR_1[30] = 1; break;
            case '*':
              VAR_1[5] = 1;
              VAR_1[6] = 1;
              VAR_1[7] = 1;
              VAR_1[8] = 1;
              VAR_1[9] = 1;
              VAR_1[30] = 1;
              break;
            default: return 1; }
          break;

    case 'M':
          switch( VAR_0[1] ){
            case 'c': VAR_1[10] = 1; break;
            case 'e': VAR_1[11] = 1; break;
            case 'n': VAR_1[12] = 1; break;
            case '*':
              VAR_1[10] = 1;
              VAR_1[11] = 1;
              VAR_1[12] = 1;
              break;
            default: return 1; }
          break;

    case 'N':
          switch( VAR_0[1] ){
            case 'd': VAR_1[13] = 1; break;
            case 'l': VAR_1[14] = 1; break;
            case 'o': VAR_1[15] = 1; break;
            case '*':
              VAR_1[13] = 1;
              VAR_1[14] = 1;
              VAR_1[15] = 1;
              break;
            default: return 1; }
          break;

    case 'P':
          switch( VAR_0[1] ){
            case 'c': VAR_1[16] = 1; break;
            case 'd': VAR_1[17] = 1; break;
            case 'e': VAR_1[18] = 1; break;
            case 'f': VAR_1[19] = 1; break;
            case 'i': VAR_1[20] = 1; break;
            case 'o': VAR_1[21] = 1; break;
            case 's': VAR_1[22] = 1; break;
            case '*':
              VAR_1[16] = 1;
              VAR_1[17] = 1;
              VAR_1[18] = 1;
              VAR_1[19] = 1;
              VAR_1[20] = 1;
              VAR_1[21] = 1;
              VAR_1[22] = 1;
              break;
            default: return 1; }
          break;

    case 'S':
          switch( VAR_0[1] ){
            case 'c': VAR_1[23] = 1; break;
            case 'k': VAR_1[24] = 1; break;
            case 'm': VAR_1[25] = 1; break;
            case 'o': VAR_1[26] = 1; break;
            case '*':
              VAR_1[23] = 1;
              VAR_1[24] = 1;
              VAR_1[25] = 1;
              VAR_1[26] = 1;
              break;
            default: return 1; }
          break;

    case 'Z':
          switch( VAR_0[1] ){
            case 'l': VAR_1[27] = 1; break;
            case 'p': VAR_1[28] = 1; break;
            case 's': VAR_1[29] = 1; break;
            case '*':
              VAR_1[27] = 1;
              VAR_1[28] = 1;
              VAR_1[29] = 1;
              break;
            default: return 1; }
          break;

  }
  return 0;
}
