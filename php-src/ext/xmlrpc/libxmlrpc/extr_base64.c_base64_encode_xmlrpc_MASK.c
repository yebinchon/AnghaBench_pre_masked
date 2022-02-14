
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_st {int offset; } ;


 int FUNC_0 (struct buffer_st*,char) ;
 int FUNC_1 (struct buffer_st*) ;
 unsigned char* VAR_0 ;

void FUNC_2(struct buffer_st *VAR_1, const char *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 0;
  int VAR_6 = 0;

  FUNC_1(VAR_1);



  for (VAR_4 = 0; VAR_4 < 26; VAR_4++) {
    VAR_0[VAR_4] = 'A' + VAR_4;
    VAR_0[26 + VAR_4] = 'a' + VAR_4;
  }
  for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
    VAR_0[52 + VAR_4] = '0' + VAR_4;
  }
  VAR_0[62] = '+';
  VAR_0[63] = '/';

  while (!VAR_5) {
    unsigned char VAR_7[3], VAR_8[4];
 int VAR_9, VAR_10;

    VAR_7[0] = VAR_7[1] = VAR_7[2] = 0;
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
      VAR_9 = *(VAR_2++);
      VAR_6++;
      if (VAR_6 > VAR_3 || VAR_6 <= 0) {
 VAR_5 = 1;
 break;
      }
      VAR_7[VAR_10] = (unsigned char) VAR_9;
    }
    if (VAR_10 > 0) {
      VAR_8[0] = VAR_0[VAR_7[0] >> 2];
      VAR_8[1] = VAR_0[((VAR_7[0] & 3) << 4) | (VAR_7[1] >> 4)];
      VAR_8[2] = VAR_0[((VAR_7[1] & 0xF) << 2) | (VAR_7[2] >> 6)];
      VAR_8[3] = VAR_0[VAR_7[2] & 0x3F];





      if (VAR_10 < 3) {
 VAR_8[3] = '=';
 if (VAR_10 < 2) {
   VAR_8[2] = '=';
 }
      }
      for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
 FUNC_0(VAR_1, VAR_8[VAR_4]);
 if (!(VAR_1->offset % 72)) {

   FUNC_0(VAR_1, '\n');
 }
      }
    }
  }

  FUNC_0(VAR_1, '\n');
}
