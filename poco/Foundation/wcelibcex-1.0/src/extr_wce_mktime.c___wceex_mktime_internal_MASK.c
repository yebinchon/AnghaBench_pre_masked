
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mon; int tm_year; int tm_yday; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static time_t FUNC_1(struct tm *VAR_3, time_t VAR_4)
{
    time_t VAR_5;
    int VAR_6;
    int VAR_7;





    if (VAR_3->tm_mon < 0 || VAR_3->tm_mon > 11 || VAR_3->tm_year < (VAR_0 - VAR_2))
    {
        return (time_t) -1;
    }


    VAR_5 = 0;


    for (VAR_7 = VAR_0; VAR_7 < VAR_3->tm_year + VAR_2; VAR_7++)
    {
        VAR_5 += 365 + FUNC_0(VAR_7);
    }


    VAR_6 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3->tm_mon; VAR_7++)
    {
        VAR_6 += VAR_1[VAR_7];
    }
    VAR_5 += VAR_6;


    VAR_3->tm_yday = VAR_6 + VAR_3->tm_mday;

    if (VAR_3->tm_mon > 1 && FUNC_0(VAR_3->tm_year + VAR_2))
    {
        VAR_5++;
    }


    VAR_5 = 24 * (VAR_5 + VAR_3->tm_mday - 1) + VAR_3->tm_hour;


    VAR_5 = 60 * VAR_5 + VAR_3->tm_min;


    VAR_5 = 60 * VAR_5 + VAR_3->tm_sec;



    VAR_5 += VAR_4;

    return VAR_5;
}
