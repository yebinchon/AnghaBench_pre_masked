
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {scalar_t__ year; scalar_t__ month; int day; int hour; int minute; int second; } ;
typedef TYPE_1__* PDATE_AND_TIME ;


 struct tm* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(PDATE_AND_TIME VAR_0, time_t *VAR_1)
{
    struct tm *VAR_2;
    VAR_2 = FUNC_0(VAR_1);

    VAR_0->second = VAR_2->tm_sec;
    VAR_0->minute = VAR_2->tm_min;
    VAR_0->hour = VAR_2->tm_hour;
    VAR_0->day = VAR_2->tm_mday;
    VAR_0->month = VAR_2->tm_mon + 1;
    VAR_0->year = VAR_2->tm_year + 1900;
}
