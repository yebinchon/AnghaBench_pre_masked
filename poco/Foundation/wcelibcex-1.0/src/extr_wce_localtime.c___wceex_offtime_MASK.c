
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_wday; int tm_yday; size_t tm_mon; int tm_mday; scalar_t__ tm_isdst; scalar_t__ tm_year; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long const VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int** VAR_7 ;
 scalar_t__* VAR_8 ;

struct tm * FUNC_1(const time_t *VAR_9, long VAR_10)
{
    register struct tm *VAR_11;
    register long VAR_12;
    register long VAR_13;
    register int VAR_14;
    register int VAR_15;
    register int *VAR_16;
    static struct tm VAR_17;

    VAR_11 = &VAR_17;
    VAR_12 = *VAR_9 / VAR_3;
    VAR_13 = *VAR_9 % VAR_3;
    VAR_13 += VAR_10;
    while (VAR_13 < 0)
    {
        VAR_13 += VAR_3;
        --VAR_12;
    }

    while (VAR_13 >= VAR_3)
    {
        VAR_13 -= VAR_3;
        ++VAR_12;
    }
    VAR_11->tm_hour = (int) (VAR_13 / VAR_4);

    VAR_13 = VAR_13 % VAR_4;
    VAR_11->tm_min = (int) (VAR_13 / VAR_5);
    VAR_11->tm_sec = (int) (VAR_13 % VAR_5);
    VAR_11->tm_wday = (int) ((VAR_1 + VAR_12) % VAR_0);

    if (VAR_11->tm_wday < 0)
        VAR_11->tm_wday += VAR_0;

    VAR_14 = VAR_2;

    if (VAR_12 >= 0)
    {
        for ( ; ; )
        {
            VAR_15 = FUNC_0(VAR_14);
            if (VAR_12 < (long) VAR_8[VAR_15])
                break;

            ++VAR_14;
            VAR_12 = VAR_12 - (long) VAR_8[VAR_15];
        }
    }
    else
    {
        do
        {
            --VAR_14;
            VAR_15 = FUNC_0(VAR_14);
            VAR_12 = VAR_12 + (long) VAR_8[VAR_15];
        } while (VAR_12 < 0);
    }

    VAR_11->tm_year = VAR_14 - VAR_6;
    VAR_11->tm_yday = (int) VAR_12;
    VAR_16 = VAR_7[VAR_15];

    for (VAR_11->tm_mon = 0; VAR_12 >= (long) VAR_16[VAR_11->tm_mon]; ++(VAR_11->tm_mon))
    {
        VAR_12 = VAR_12 - (long) VAR_16[VAR_11->tm_mon];
    }

    VAR_11->tm_mday = (int) (VAR_12 + 1);
    VAR_11->tm_isdst = 0;

    return VAR_11;
}
