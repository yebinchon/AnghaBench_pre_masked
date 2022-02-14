
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; size_t tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;



__attribute__((used)) static time_t FUNC_0(struct tm *VAR_0)
{
    static const int VAR_1[12] = {0,31,59,90,120,151,181,212,243,273,304,334};

    return ((((((VAR_0->tm_year - 70) * 365) + VAR_1[VAR_0->tm_mon] + VAR_0->tm_mday-1 +
                  (VAR_0->tm_year-68-1+(VAR_0->tm_mon>=2))/4) * 24) + VAR_0->tm_hour) * 60 +
        VAR_0->tm_min) * 60 + VAR_0->tm_sec;
}
