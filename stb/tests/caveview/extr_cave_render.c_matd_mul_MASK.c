
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(double VAR_0[4][4], double VAR_1[4][4], double VAR_2[4][4])
{
   int VAR_3,VAR_4,VAR_5;
   for (VAR_4=0; VAR_4 < 4; ++VAR_4) {
      for (VAR_3=0; VAR_3 < 4; ++VAR_3) {
         double VAR_6=0;
         for (VAR_5=0; VAR_5 < 4; ++VAR_5)
            VAR_6 += VAR_1[VAR_5][VAR_3] * VAR_2[VAR_4][VAR_5];
         VAR_0[VAR_3][VAR_4] = VAR_6;
      }
   }
}
