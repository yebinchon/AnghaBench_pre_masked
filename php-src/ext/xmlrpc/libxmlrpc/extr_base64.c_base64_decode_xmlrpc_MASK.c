
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_st {int dummy; } ;


 int FUNC_0 (struct buffer_st*,unsigned char) ;
 int FUNC_1 (struct buffer_st*) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct buffer_st *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5 = 0;
    int VAR_6;
    int VAR_7;

    FUNC_1(VAR_1);

    for (VAR_4 = 0; VAR_4 < 255; VAR_4++) {
 VAR_0[VAR_4] = 0x80;
    }
    for (VAR_4 = 'A'; VAR_4 <= 'Z'; VAR_4++) {
        VAR_0[VAR_4] = 0 + (VAR_4 - 'A');
    }
    for (VAR_4 = 'a'; VAR_4 <= 'z'; VAR_4++) {
        VAR_0[VAR_4] = 26 + (VAR_4 - 'a');
    }
    for (VAR_4 = '0'; VAR_4 <= '9'; VAR_4++) {
        VAR_0[VAR_4] = 52 + (VAR_4 - '0');
    }
    VAR_0['+'] = 62;
    VAR_0['/'] = 63;
    VAR_0['='] = 0;

    VAR_6 = 0;


    while (1) {
 unsigned char VAR_8[4], VAR_9[4], VAR_10[3];

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
     int VAR_11;
     while (1) {
       VAR_11 = *(VAR_2++);
       VAR_5++;
       if (VAR_5 > VAR_3) VAR_6 = 1;
       if (FUNC_2(VAR_11) || VAR_11 == '\n' || VAR_11 == '\r') continue;
       break;
     }

     if (VAR_6) {






  return;
     }

     if (VAR_0[(unsigned char)VAR_11] & 0x80) {





       VAR_4--;
       continue;
     }
     VAR_8[VAR_4] = (unsigned char) VAR_11;
     VAR_9[VAR_4] = (unsigned char) VAR_0[VAR_11];
 }
 VAR_10[0] = (VAR_9[0] << 2) | (VAR_9[1] >> 4);
 VAR_10[1] = (VAR_9[1] << 4) | (VAR_9[2] >> 2);
 VAR_10[2] = (VAR_9[2] << 6) | VAR_9[3];
        VAR_4 = VAR_8[2] == '=' ? 1 : (VAR_8[3] == '=' ? 2 : 3);
 VAR_7 = 0;
 while (VAR_7 < VAR_4) {
   FUNC_0(VAR_1, VAR_10[VAR_7++]);
 }
 if (VAR_4 < 3) {
     return;
 }
    }
}
