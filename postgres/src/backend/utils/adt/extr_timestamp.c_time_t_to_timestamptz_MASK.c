
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_time_t ;
typedef scalar_t__ TimestampTz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

TimestampTz
FUNC_0(pg_time_t VAR_4)
{
 TimestampTz VAR_5;

 VAR_5 = (TimestampTz) VAR_4 -
  ((VAR_0 - VAR_2) * VAR_1);
 VAR_5 *= VAR_3;

 return VAR_5;
}
