
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef double Cost ;


 double FUNC_0 (double) ;

void
FUNC_1(double *VAR_0,
      Cost *VAR_1,
      Cost *VAR_2,
      int64 VAR_3,
      int64 VAR_4)
{
 double VAR_5 = *VAR_0;
 Cost VAR_6 = *VAR_1;
 Cost VAR_7 = *VAR_2;

 if (VAR_3 != 0)
 {
  double VAR_8;

  if (VAR_3 > 0)
   VAR_8 = (double) VAR_3;
  else
   VAR_8 = FUNC_0(VAR_5 * 0.10);
  if (VAR_8 > *VAR_0)
   VAR_8 = *VAR_0;
  if (VAR_5 > 0)
   *VAR_1 +=
    (VAR_7 - VAR_6)
    * VAR_8 / VAR_5;
  *VAR_0 -= VAR_8;
  if (*VAR_0 < 1)
   *VAR_0 = 1;
 }

 if (VAR_4 != 0)
 {
  double VAR_9;

  if (VAR_4 > 0)
   VAR_9 = (double) VAR_4;
  else
   VAR_9 = FUNC_0(VAR_5 * 0.10);
  if (VAR_9 > *VAR_0)
   VAR_9 = *VAR_0;
  if (VAR_5 > 0)
   *VAR_2 = *VAR_1 +
    (VAR_7 - VAR_6)
    * VAR_9 / VAR_5;
  *VAR_0 = VAR_9;
  if (*VAR_0 < 1)
   *VAR_0 = 1;
 }
}
