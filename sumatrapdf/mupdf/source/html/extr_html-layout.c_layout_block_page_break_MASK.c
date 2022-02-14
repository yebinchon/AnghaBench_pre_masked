
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (float,float) ;

__attribute__((used)) static int FUNC_1(fz_context *VAR_3, float *VAR_4, float VAR_5, float VAR_6, int VAR_7)
{
 if (VAR_5 <= 0)
  return 0;
 if (VAR_7 == VAR_0 || VAR_7 == VAR_1 || VAR_7 == VAR_2)
 {
  float VAR_8 = VAR_5 - FUNC_0(*VAR_4 - VAR_6, VAR_5);
  int VAR_9 = (*VAR_4 + (VAR_5 * 0.1f)) / VAR_5;
  if (VAR_8 > 0 && VAR_8 < VAR_5)
  {
   *VAR_4 += VAR_8 - VAR_6;
   if (VAR_7 == VAR_1 && (VAR_9 & 1) == 0)
    *VAR_4 += VAR_5;
   if (VAR_7 == VAR_2 && (VAR_9 & 1) == 1)
    *VAR_4 += VAR_5;
   return 1;
  }
 }
 return 0;
}
