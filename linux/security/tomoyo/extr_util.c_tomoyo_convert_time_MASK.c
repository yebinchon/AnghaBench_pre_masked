
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct tomoyo_time {scalar_t__ year; scalar_t__ month; int day; int hour; int min; int sec; } ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (int ,int ,struct tm*) ;

void FUNC_1(time64_t VAR_0, struct tomoyo_time *VAR_1)
{
 struct tm VAR_2;

 FUNC_0(VAR_0, 0, &VAR_2);
 VAR_1->sec = VAR_2.tm_sec;
 VAR_1->min = VAR_2.tm_min;
 VAR_1->hour = VAR_2.tm_hour;
 VAR_1->day = VAR_2.tm_mday;
 VAR_1->month = VAR_2.tm_mon + 1;
 VAR_1->year = VAR_2.tm_year + 1900;
}
