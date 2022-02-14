
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int VAR_0 ;

void
FUNC_0(TimestampTz VAR_1, TimestampTz VAR_2,
       long *VAR_3, int *VAR_4)
{
 TimestampTz VAR_5 = VAR_2 - VAR_1;

 if (VAR_5 <= 0)
 {
  *VAR_3 = 0;
  *VAR_4 = 0;
 }
 else
 {
  *VAR_3 = (long) (VAR_5 / VAR_0);
  *VAR_4 = (int) (VAR_5 % VAR_0);
 }
}
