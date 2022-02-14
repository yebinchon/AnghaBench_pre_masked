
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;

void FUNC_2(float VAR_1[3], float VAR_2, float VAR_3, float VAR_4)
{
   float VAR_5[3] = { VAR_2, VAR_3, VAR_4 };
   float VAR_6[3];
   float VAR_7,VAR_8;
   VAR_7 = (float) FUNC_1(VAR_0[0]*3.141592/180);
   VAR_8 = (float) FUNC_0(VAR_0[0]*3.141592/180);

   VAR_6[0] = VAR_5[0];
   VAR_6[1] = VAR_8*VAR_5[1] - VAR_7*VAR_5[2];
   VAR_6[2] = VAR_7*VAR_5[1] + VAR_8*VAR_5[2];

   VAR_7 = (float) FUNC_1(VAR_0[2]*3.141592/180);
   VAR_8 = (float) FUNC_0(VAR_0[2]*3.141592/180);
   VAR_1[0] = VAR_8*VAR_6[0] - VAR_7*VAR_6[1];
   VAR_1[1] = VAR_7*VAR_6[0] + VAR_8*VAR_6[1];
   VAR_1[2] = VAR_6[2];
}
