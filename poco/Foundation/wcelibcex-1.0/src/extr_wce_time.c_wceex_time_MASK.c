
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_yday; int tm_wday; scalar_t__ tm_isdst; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_3__ {int wDayOfWeek; int wSecond; int wMinute; int wHour; int wDay; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tm*) ;

time_t FUNC_2(time_t *VAR_1)
{
    time_t VAR_2;
    struct tm VAR_3;
    SYSTEMTIME VAR_4;


    FUNC_0(&VAR_4);




    VAR_3.tm_year = VAR_4.wYear - VAR_0;
    VAR_3.tm_mon = VAR_4.wMonth - 1;
    VAR_3.tm_mday = VAR_4.wDay;


    VAR_3.tm_hour = VAR_4.wHour;
    VAR_3.tm_min = VAR_4.wMinute;
    VAR_3.tm_sec = VAR_4.wSecond;
    VAR_3.tm_isdst = 0;
    VAR_3.tm_wday = VAR_4.wDayOfWeek;
    VAR_3.tm_yday = 0;


    VAR_2 = FUNC_1(&VAR_3);


    if (VAR_1 != ((void*)0))
    {
        *VAR_1 = VAR_2;
    }

 return VAR_2;
}
