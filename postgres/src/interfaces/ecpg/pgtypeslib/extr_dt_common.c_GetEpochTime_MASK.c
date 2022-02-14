
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;


 struct tm* FUNC_0 (int *) ;

int
FUNC_1(struct tm *VAR_0)
{
 struct tm *VAR_1;
 time_t VAR_2 = 0;

 VAR_1 = FUNC_0(&VAR_2);

 if (VAR_1)
 {
  VAR_0->tm_year = VAR_1->tm_year + 1900;
  VAR_0->tm_mon = VAR_1->tm_mon + 1;
  VAR_0->tm_mday = VAR_1->tm_mday;
  VAR_0->tm_hour = VAR_1->tm_hour;
  VAR_0->tm_min = VAR_1->tm_min;
  VAR_0->tm_sec = VAR_1->tm_sec;

  return 0;
 }

 return -1;
}
