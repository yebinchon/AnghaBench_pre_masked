
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (float) ;

void FUNC_1(float *VAR_0, int VAR_1, float **VAR_2, int VAR_3)
{
   int VAR_4,VAR_5;
   float VAR_6;
   VAR_0[0] = VAR_0[1] = VAR_0[2] = 0;
   for (VAR_4=VAR_1-1,VAR_5=0; VAR_5 < VAR_1; VAR_4=VAR_5++) {
      float *VAR_7 = VAR_2[VAR_4];
      float *VAR_8 = VAR_2[VAR_5];
      VAR_0[0] += (VAR_7[1] - VAR_8[1]) * (VAR_7[2] + VAR_8[2]);
      VAR_0[1] += (VAR_7[2] - VAR_8[2]) * (VAR_7[0] + VAR_8[0]);
      VAR_0[2] += (VAR_7[0] - VAR_8[0]) * (VAR_7[1] + VAR_8[1]);
   }
   if (VAR_3) {
      VAR_6 = VAR_0[0]*VAR_0[0] + VAR_0[1]*VAR_0[1] + VAR_0[2]*VAR_0[2];
      VAR_6 = (float) (1.0 / FUNC_0(VAR_6));
      VAR_0[0] *= VAR_6;
      VAR_0[1] *= VAR_6;
      VAR_0[2] *= VAR_6;
   }
}
