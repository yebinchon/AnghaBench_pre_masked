
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;

void FUNC_0(void)
{
   int VAR_1;
   for (VAR_1=0; VAR_1 < 16; ++VAR_1) {
      VAR_0[VAR_1+ 0][0] = 64 + 12*VAR_1;
      VAR_0[VAR_1+ 0][1] = 32;
      VAR_0[VAR_1+ 0][2] = 64;

      VAR_0[VAR_1+16][0] = 255;
      VAR_0[VAR_1+16][1] = 32 + 8*VAR_1;
      VAR_0[VAR_1+16][2] = 64;

      VAR_0[VAR_1+32][0] = 255;
      VAR_0[VAR_1+32][1] = 160;
      VAR_0[VAR_1+32][2] = 64 + 12*VAR_1;

      VAR_0[VAR_1+48][0] = 255;
      VAR_0[VAR_1+48][1] = 160 + 6*VAR_1;
      VAR_0[VAR_1+48][2] = 255;
   }
}
