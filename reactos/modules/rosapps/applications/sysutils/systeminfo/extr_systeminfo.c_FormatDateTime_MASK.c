
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef void* WORD ;
typedef int VOID ;
struct TYPE_4__ {scalar_t__ wMilliseconds; void* wSecond; void* wMinute; void* wHour; void* wDay; void* wDayOfWeek; void* wMonth; void* wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__ LPWSTR ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int ,TYPE_1__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 struct tm* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static
VOID
FUNC_4(time_t VAR_2, LPWSTR VAR_3)
{
    unsigned VAR_4;
    SYSTEMTIME VAR_5;
    const struct tm *VAR_6;

    VAR_6 = FUNC_2(&VAR_2);
    VAR_5.wYear = (WORD)(1900 + VAR_6->tm_year);
    VAR_5.wMonth = (WORD)(1 + VAR_6->tm_mon);
    VAR_5.wDayOfWeek = (WORD)VAR_6->tm_wday;
    VAR_5.wDay = (WORD)VAR_6->tm_mday;
    VAR_5.wHour = (WORD)VAR_6->tm_hour;
    VAR_5.wMinute = (WORD)VAR_6->tm_min;
    VAR_5.wSecond = (WORD)VAR_6->tm_sec;
    VAR_5.wMilliseconds = 0;


    VAR_4 = FUNC_0(VAR_1, 0, &VAR_5, ((void*)0), VAR_3, VAR_0 - 2);
    if (VAR_4)
        --VAR_4;


    VAR_4 += FUNC_3(VAR_3 + VAR_4, L", ");

    FUNC_1(VAR_1, 0, &VAR_5, ((void*)0), VAR_3 + VAR_4, VAR_0 - VAR_4);
}
