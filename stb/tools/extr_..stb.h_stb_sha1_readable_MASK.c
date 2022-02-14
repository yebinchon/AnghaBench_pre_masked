
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void FUNC_1(char VAR_0[27], unsigned char VAR_1[20])
{
   char VAR_2[65] = "0123456789abcdefghijklmnopqrstuv"
                       "wxyzABCDEFGHIJKLMNOPQRSTUVWXYZ%$";
   int VAR_3 = 0, VAR_4=0;
   int VAR_5=0,VAR_6=0;
   while (VAR_6 < 26) {
      int VAR_7;

      if (VAR_3 < 6) {
         FUNC_0(VAR_5 != 20);
         VAR_4 += VAR_1[VAR_5++] << VAR_3;
         VAR_3 += 8;
      }
      VAR_7 = VAR_4 & ((1 << 6) - 1);
      VAR_0[VAR_6++] = VAR_2[VAR_7];
      VAR_4 >>= 6;
      VAR_3 -= 6;
   }
   FUNC_0(VAR_3 == 20*8 - 26*6);
   VAR_0[VAR_6++] = VAR_2[VAR_4];
}
