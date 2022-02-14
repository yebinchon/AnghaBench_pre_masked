
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_3__ {unsigned int wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wDayOfWeek; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;

unsigned int FUNC_1(struct tm* VAR_0, unsigned int VAR_1)
{
    SYSTEMTIME VAR_2;

    VAR_2.wYear = VAR_0->tm_year + 1900;
    VAR_2.wMonth = VAR_0->tm_mon + 1;
    VAR_2.wDayOfWeek = VAR_0->tm_wday;
    VAR_2.wDay = VAR_0->tm_mday;
    VAR_2.wHour = VAR_0->tm_hour;
    VAR_2.wMinute = VAR_0->tm_min;
    VAR_2.wSecond = VAR_0->tm_sec;
    VAR_2.wMilliseconds = VAR_1;

    if (!FUNC_0(&VAR_2))
        return -1;

    return 0;
}
