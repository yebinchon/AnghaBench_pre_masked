
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_7__ {int time; } ;
struct TYPE_8__ {TYPE_1__ names; } ;
struct TYPE_10__ {TYPE_2__ str; int lcid; } ;
struct TYPE_9__ {scalar_t__ wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wDayOfWeek; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_3__ SYSTEMTIME ;
typedef TYPE_4__ MSVCRT___lc_time_data ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ,TYPE_3__*,int ,char*,size_t) ;
 int VAR_3 ;
 int * FUNC_1 () ;

__attribute__((used)) static inline BOOL FUNC_2(char *VAR_4, size_t *VAR_5, size_t VAR_6,
        const struct tm *VAR_7, MSVCRT___lc_time_data *VAR_8)
{
    SYSTEMTIME VAR_9;
    size_t VAR_10;

    VAR_9.wYear = VAR_7->tm_year + 1900;
    VAR_9.wMonth = VAR_7->tm_mon + 1;
    VAR_9.wDayOfWeek = VAR_7->tm_wday;
    VAR_9.wDay = VAR_7->tm_mday;
    VAR_9.wHour = VAR_7->tm_hour;
    VAR_9.wMinute = VAR_7->tm_min;
    VAR_9.wSecond = VAR_7->tm_sec;
    VAR_9.wMilliseconds = 0;

    VAR_10 = FUNC_0(VAR_8->lcid, 0, &VAR_9, VAR_8->str.names.time, ((void*)0), 0);
    if(VAR_10 && VAR_10<VAR_6-*VAR_5)
        VAR_10 = FUNC_0(VAR_8->lcid, 0, &VAR_9, VAR_8->str.names.time,
                VAR_4+*VAR_5, VAR_6-*VAR_5);
    if(!VAR_10) {
        *VAR_4 = 0;
        *FUNC_1() = VAR_0;
        return VAR_2;
    }else if(VAR_10 > VAR_6-*VAR_5) {
        *VAR_4 = 0;
        *FUNC_1() = VAR_1;
        return VAR_2;
    }
    *VAR_5 += VAR_10-1;
    return VAR_3;
}
