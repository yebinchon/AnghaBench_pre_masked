
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_7__ {char* date; char* short_date; } ;
struct TYPE_8__ {TYPE_1__ names; } ;
struct TYPE_10__ {int lcid; TYPE_2__ str; } ;
struct TYPE_9__ {scalar_t__ wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wDayOfWeek; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_3__ SYSTEMTIME ;
typedef TYPE_4__ MSVCRT___lc_time_data ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ,int ,TYPE_3__*,char*,char*,size_t) ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 () ;

__attribute__((used)) static inline BOOL FUNC_2(char *VAR_4, size_t *VAR_5, size_t VAR_6,
        BOOL VAR_7, const struct tm *VAR_8, MSVCRT___lc_time_data *VAR_9)
{
    char *VAR_10;
    SYSTEMTIME VAR_11;
    size_t VAR_12;

    VAR_11.wYear = VAR_8->tm_year + 1900;
    VAR_11.wMonth = VAR_8->tm_mon + 1;
    VAR_11.wDayOfWeek = VAR_8->tm_wday;
    VAR_11.wDay = VAR_8->tm_mday;
    VAR_11.wHour = VAR_8->tm_hour;
    VAR_11.wMinute = VAR_8->tm_min;
    VAR_11.wSecond = VAR_8->tm_sec;
    VAR_11.wMilliseconds = 0;

    VAR_10 = VAR_7 ? VAR_9->str.names.date : VAR_9->str.names.short_date;
    VAR_12 = FUNC_0(VAR_9->lcid, 0, &VAR_11, VAR_10, ((void*)0), 0);
    if(VAR_12 && VAR_12<VAR_6-*VAR_5)
        VAR_12 = FUNC_0(VAR_9->lcid, 0, &VAR_11, VAR_10, VAR_4+*VAR_5, VAR_6-*VAR_5);
    if(!VAR_12) {
        *VAR_4 = 0;
        *FUNC_1() = VAR_0;
        return VAR_2;
    }else if(VAR_12 > VAR_6-*VAR_5) {
        *VAR_4 = 0;
        *FUNC_1() = VAR_1;
        return VAR_2;
    }
    *VAR_5 += VAR_12-1;
    return VAR_3;
}
