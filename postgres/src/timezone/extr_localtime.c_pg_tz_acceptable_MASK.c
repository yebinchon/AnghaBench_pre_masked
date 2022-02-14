
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {scalar_t__ tm_sec; } ;
typedef int pg_tz ;
typedef int pg_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pg_tm* FUNC_0 (int*,int *) ;

bool
FUNC_1(pg_tz *VAR_3)
{
 struct pg_tm *VAR_4;
 pg_time_t VAR_5;






 VAR_5 = (VAR_0 - VAR_2) * VAR_1;
 VAR_4 = FUNC_0(&VAR_5, VAR_3);
 if (!VAR_4 || VAR_4->tm_sec != 0)
  return 0;

 return 1;
}
