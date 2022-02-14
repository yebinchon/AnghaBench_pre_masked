
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_year; int tm_mon; int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;
typedef int pg_time_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct pg_tm* FUNC_1 (int *) ;

void
FUNC_2(struct pg_tm *VAR_1)
{
 struct pg_tm *VAR_2;
 pg_time_t VAR_3 = 0;

 VAR_2 = FUNC_1(&VAR_3);

 if (VAR_2 == ((void*)0))
  FUNC_0(VAR_0, "could not convert epoch to timestamp: %m");

 VAR_1->tm_year = VAR_2->tm_year;
 VAR_1->tm_mon = VAR_2->tm_mon;
 VAR_1->tm_mday = VAR_2->tm_mday;
 VAR_1->tm_hour = VAR_2->tm_hour;
 VAR_1->tm_min = VAR_2->tm_min;
 VAR_1->tm_sec = VAR_2->tm_sec;

 VAR_1->tm_year += 1900;
 VAR_1->tm_mon++;
}
