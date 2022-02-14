
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_year; int tm_mon; int tm_isdst; int tm_yday; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; } ;
struct TYPE_3__ {int wYear; int wMonth; unsigned int wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wDayOfWeek; } ;
typedef int TIME_ZONE_INFORMATION ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

unsigned int FUNC_2(struct tm* VAR_2)
{
    SYSTEMTIME VAR_3;
    int VAR_4;
    DWORD VAR_5;
    TIME_ZONE_INFORMATION VAR_6;

    FUNC_0(&VAR_3);

    VAR_2->tm_year = VAR_3.wYear - 1900;
    VAR_2->tm_mon = VAR_3.wMonth - 1;
    VAR_2->tm_wday = VAR_3.wDayOfWeek;
    VAR_2->tm_mday = VAR_3.wDay;
    VAR_2->tm_hour = VAR_3.wHour;
    VAR_2->tm_min = VAR_3.wMinute;
    VAR_2->tm_sec = VAR_3.wSecond;

    VAR_2->tm_isdst = -1;

    VAR_5 = FUNC_1(&VAR_6);
    if (VAR_5 == VAR_0){
      VAR_2->tm_isdst = 1;
    }
    else
      VAR_2->tm_isdst = 0;

    if (VAR_2->tm_year % 4 == 0) {
        if (VAR_2->tm_year % 100 != 0)
            VAR_2->tm_yday = 1;
        else if ((VAR_2->tm_year-100) % 1000 == 0)
            VAR_2->tm_yday = 1;
    }

    for (VAR_4 = 0; VAR_4 <= VAR_2->tm_mon; VAR_4++)
        VAR_2->tm_yday += VAR_1[VAR_4];

    return VAR_3.wMilliseconds;
}
