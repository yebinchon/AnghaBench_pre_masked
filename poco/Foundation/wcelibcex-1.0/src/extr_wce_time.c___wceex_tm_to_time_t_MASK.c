
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_yday; } ;



time_t FUNC_0(const struct tm *VAR_0)
{
    time_t VAR_1;


    if (VAR_0->tm_year < 70)
    {
        return (time_t) -1;
    }




    VAR_1 = VAR_0->tm_sec
        + VAR_0->tm_min * 60
        + VAR_0->tm_hour * 3600
        + VAR_0->tm_yday * 86400
        + (VAR_0->tm_year - 70) * 31536000
        + ((VAR_0->tm_year - 69) / 4) * 86400
        - ((VAR_0->tm_year - 1) / 100) * 86400
        + ((VAR_0->tm_year + 299) / 400) * 86400;

    return VAR_1;
}
