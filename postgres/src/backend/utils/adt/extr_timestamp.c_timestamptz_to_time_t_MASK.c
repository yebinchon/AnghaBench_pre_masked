
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_time_t ;
typedef int TimestampTz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

pg_time_t
FUNC_0(TimestampTz VAR_4)
{
 pg_time_t VAR_5;

 VAR_5 = (pg_time_t) (VAR_4 / VAR_3 +
        ((VAR_0 - VAR_2) * VAR_1));

 return VAR_5;
}
