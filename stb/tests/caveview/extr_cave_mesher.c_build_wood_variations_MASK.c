
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 unsigned char** VAR_1 ;
 size_t VAR_2 ;

void FUNC_0(int VAR_3, unsigned char *VAR_4)
{
   int VAR_5,VAR_6;
   unsigned char VAR_7[4] = { 5, 198, 214, 199 };
   for (VAR_5=0; VAR_5 < 4; ++VAR_5) {
      if (VAR_5 == 0)
         VAR_4[VAR_5] = VAR_3;
      else {
         VAR_4[VAR_5] = VAR_2;
         for (VAR_6=0; VAR_6 < 6; ++VAR_6) {
            VAR_1[VAR_2][VAR_6] = VAR_7[VAR_5];
         }
         VAR_0[VAR_2] = VAR_0[VAR_3];
         --VAR_2;
      }
   }
   VAR_4[VAR_5] = VAR_4[VAR_5-1];
   ++VAR_5;
   for (; VAR_5 < 16; ++VAR_5)
      VAR_4[VAR_5] = VAR_3;
}
