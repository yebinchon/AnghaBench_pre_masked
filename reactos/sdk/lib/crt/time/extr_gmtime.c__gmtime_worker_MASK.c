
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {unsigned int tm_year; int tm_isdst; unsigned int tm_yday; unsigned int tm_mon; int tm_mday; unsigned int tm_wday; unsigned int tm_hour; unsigned int tm_min; unsigned int tm_sec; } ;
typedef unsigned int __time64_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

struct tm *
FUNC_2(struct tm *VAR_8, __time64_t VAR_9, int VAR_10)
{
    unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    unsigned int VAR_18, VAR_19;
    unsigned int *VAR_20;

    if (VAR_9 < 0)
    {
        return 0;
    }


    VAR_11 = (unsigned int)(VAR_9 / VAR_1);
    VAR_18 = VAR_9 % VAR_1;


    VAR_11 += VAR_0;


    VAR_14 = FUNC_0(VAR_11);


    VAR_15 = FUNC_1(VAR_11);


    if (VAR_14 > VAR_15)
    {

        VAR_20 = VAR_6;
    }
    else
    {

        VAR_20 = VAR_7;
    }


    VAR_16 = (VAR_11 - VAR_14) / 365;
    VAR_8->tm_year = VAR_16 - 299;


    VAR_12 = VAR_16 * 365 + VAR_15;


    VAR_13 = VAR_11 - VAR_12;


    VAR_8->tm_isdst = 0;
    if (VAR_10)
    {
        int VAR_21 = VAR_13 * VAR_1 + VAR_18 ;
        if (VAR_21 >= VAR_4 && VAR_21 <= VAR_5)
        {
            VAR_9 -= VAR_3;
            VAR_11 = (unsigned int)(VAR_9 / VAR_1 + VAR_0);
            VAR_13 = VAR_11 - VAR_12;
            VAR_8->tm_isdst = 1;
        }
    }

    VAR_8->tm_yday = VAR_13;


    for (VAR_17 = 0; VAR_13 >= VAR_20[VAR_17+1]; VAR_17++)
        ;


    VAR_8->tm_mon = VAR_17;
    VAR_8->tm_mday = 1 + VAR_13 - VAR_20[VAR_17];


    VAR_8->tm_wday = (VAR_11 + 1) % 7;


    VAR_8->tm_hour = VAR_18 / VAR_2;
    VAR_19 = VAR_18 % VAR_2;


    VAR_8->tm_min = VAR_19 / 60;
    VAR_8->tm_sec = VAR_19 % 60;

    return VAR_8;
}
