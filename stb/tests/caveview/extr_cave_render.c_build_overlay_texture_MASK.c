
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int** VAR_1 ;

void FUNC_1(int VAR_2)
{
   int VAR_3,VAR_4;
   uint32 VAR_5 = FUNC_0();
   if (VAR_5 & 16)
      VAR_5 = 0xff000000;
   else
      VAR_5 = 0xffffffff;
   for (VAR_4=0; VAR_4<VAR_0; ++VAR_4)
      for (VAR_3=0; VAR_3<VAR_0; ++VAR_3) {
         VAR_1[VAR_4][VAR_3] = 0;
      }

   for (VAR_4=0; VAR_4 < VAR_0/8; ++VAR_4) {
      for (VAR_3=0; VAR_3 < VAR_0; ++VAR_3) {
         VAR_1[VAR_4][VAR_3] = VAR_5;
         VAR_1[VAR_0-1-VAR_4][VAR_3] = VAR_5;
         VAR_1[VAR_3][VAR_4] = VAR_5;
         VAR_1[VAR_3][VAR_0-1-VAR_4] = VAR_5;
      }
   }
}
