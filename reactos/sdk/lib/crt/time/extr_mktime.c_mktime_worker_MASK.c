
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_mon; int tm_year; int tm_mday; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; } ;
typedef int __time64_t ;
struct TYPE_3__ {int Bias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 struct tm* FUNC_1 (int*) ;
 scalar_t__* VAR_1 ;

__time64_t
FUNC_2(struct tm * VAR_2, int VAR_3)
{
    struct tm *VAR_4;
    __time64_t VAR_5;
    int VAR_6, VAR_7, VAR_8;
    TIME_ZONE_INFORMATION VAR_9;
    DWORD VAR_10;


    if (VAR_2->tm_mon < 0)
    {
        VAR_6 = -VAR_2->tm_mon - 1;
        VAR_2->tm_year -= 1 + VAR_6 / 12;
        VAR_2->tm_mon = 11 - (VAR_6 % 12);
    }
    else if (VAR_2->tm_mon > 11)
    {
        VAR_6 = VAR_2->tm_mon;
        VAR_2->tm_year += (VAR_6 / 12);
        VAR_2->tm_mon = VAR_6 % 12;
    }


    if (VAR_2->tm_year < 70 || VAR_2->tm_year > 139)
    {
        return -1;
    }

    VAR_7 = VAR_2->tm_year - 70;


    VAR_8 = (VAR_7 + 1) / 4;


    VAR_5 = VAR_7 * 365 + VAR_8;


    VAR_5 += VAR_1[VAR_2->tm_mon];


    if (((VAR_7 + 2) % 4) == 0)
    {
        if (VAR_2->tm_mon > 2)
        {
            VAR_5++;
        }
    }

    VAR_5 += VAR_2->tm_mday - 1;

    VAR_5 *= 24;
    VAR_5 += VAR_2->tm_hour;

    VAR_5 *= 60;
    VAR_5 += VAR_2->tm_min;

    VAR_5 *= 60;
    VAR_5 += VAR_2->tm_sec;

    if (VAR_5 < 0)
    {
        return -1;
    }


    VAR_4 = FUNC_1(&VAR_5);
    if (!VAR_4)
    {
        return -1;
    }
    *VAR_2 = *VAR_4;


    VAR_10 = FUNC_0(&VAR_9);
    if (VAR_10 != VAR_0)
    {
        VAR_5 += VAR_9.Bias * 60;
    }

    return VAR_5;
}
