
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (float,float,float) ;

__attribute__((used)) static float FUNC_1(float VAR_3, float VAR_4)
{
   float VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
   int VAR_11,VAR_12;
   if (VAR_3 < 0) VAR_3 = 0;
   if (VAR_3 > VAR_2-1) VAR_3 = (float) VAR_2-1;
   if (VAR_4 < 0) VAR_4 = 0;
   if (VAR_4 > VAR_1-1) VAR_4 = (float) VAR_1-1;
   VAR_11 = (int) VAR_3; VAR_3 -= VAR_11;
   VAR_12 = (int) VAR_4; VAR_4 -= VAR_12;
   VAR_5 = VAR_0[(VAR_12+0)*VAR_1+(VAR_11+0)];
   VAR_7 = VAR_0[(VAR_12+0)*VAR_1+(VAR_11+1)];
   VAR_6 = VAR_0[(VAR_12+1)*VAR_1+(VAR_11+0)];
   VAR_8 = VAR_0[(VAR_12+1)*VAR_1+(VAR_11+1)];
   VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
   VAR_10 = FUNC_0(VAR_4, VAR_7, VAR_8);
   return FUNC_0(VAR_3, VAR_9, VAR_10);
}
