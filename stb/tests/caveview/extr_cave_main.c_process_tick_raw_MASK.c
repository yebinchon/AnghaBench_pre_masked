
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float* VAR_3 ;
 float* VAR_4 ;
 int FUNC_0 (float*,float,float,int ) ;
 float* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (float,int) ;
 float VAR_7 ;
 float VAR_8 ;
 scalar_t__ FUNC_2 (double,float) ;
 scalar_t__ FUNC_3 (float) ;
 float FUNC_4 (float,int,int) ;
 float VAR_9 ;
 float VAR_10 ;

void FUNC_5(float VAR_11)
{
   int VAR_12;
   float VAR_13[3] = { 0,0,0 };
   float VAR_14[3];



   VAR_13[0] = (VAR_6 & 3)== 1 ? VAR_1 : (VAR_6 & 3)== 2 ? -VAR_1 : 0;
   VAR_13[1] = (VAR_6 & 12)== 4 ? VAR_1 : (VAR_6 & 12)== 8 ? -VAR_1 : 0;
   VAR_13[2] = (VAR_6 & 48)==16 ? VAR_1 : (VAR_6 & 48)==32 ? -VAR_1 : 0;



   FUNC_0(VAR_14, VAR_13[0], VAR_13[1], 0);
   VAR_14[2] += VAR_13[2];

   for (VAR_12=0; VAR_12 < 3; ++VAR_12) {
      float VAR_15 = VAR_14[VAR_12];
      VAR_3[VAR_12] += VAR_15*VAR_11;
   }

   if (VAR_3[0] || VAR_3[1] || VAR_3[2])
   {
      float VAR_16 = (float) FUNC_3(VAR_3[0]*VAR_3[0] + VAR_3[1]*VAR_3[1] + VAR_3[2]*VAR_3[2]);
      float VAR_17 = VAR_16;
      float VAR_18 = VAR_2 + VAR_0*VAR_16;
      VAR_17 = VAR_16 - VAR_18*VAR_11;
      if (VAR_17 < 0)
         VAR_17 = 0;
      VAR_3[0] *= VAR_17/VAR_16;
      VAR_3[1] *= VAR_17/VAR_16;
      VAR_3[2] *= VAR_17/VAR_16;
   }

   VAR_5[0] += VAR_3[0] * VAR_11;
   VAR_5[1] += VAR_3[1] * VAR_11;
   VAR_5[2] += VAR_3[2] * VAR_11;

   VAR_9 *= (float) FUNC_2(0.75, VAR_11);
   VAR_10 *= (float) FUNC_2(0.75, VAR_11);

   VAR_9 += (VAR_7 - VAR_9)*VAR_11*60;
   VAR_10 += (VAR_8 - VAR_10)*VAR_11*60;

   VAR_7 -= VAR_9 * VAR_11;
   VAR_8 -= VAR_10 * VAR_11;
   VAR_4[0] += VAR_9 * VAR_11;
   VAR_4[2] += VAR_10 * VAR_11;
   VAR_4[0] = FUNC_4(VAR_4[0], -90, 90);
   VAR_4[2] = (float) FUNC_1(VAR_4[2], 360);
}
