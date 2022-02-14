
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timezone {int tz_minuteswest; int tz_dsttime; } ;
struct timeval {long tv_sec; long tv_usec; } ;
typedef int __int64 ;
struct TYPE_12__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_11__ {int QuadPart; int HighPart; int LowPart; } ;
struct TYPE_9__ {scalar_t__ wMonth; } ;
struct TYPE_8__ {scalar_t__ wMonth; } ;
struct TYPE_10__ {int Bias; int StandardBias; TYPE_2__ DaylightDate; TYPE_1__ StandardDate; } ;
typedef TYPE_3__ TIME_ZONE_INFORMATION ;
typedef int SYSTEMTIME ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef TYPE_5__ FILETIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_5__*) ;

int FUNC_3(struct timeval *VAR_1, struct timezone *VAR_2)
{
    SYSTEMTIME VAR_3;
    FILETIME VAR_4;
    LARGE_INTEGER VAR_5;
    TIME_ZONE_INFORMATION VAR_6;
    __int64 VAR_7;
    static int VAR_8;

    if (((void*)0) != VAR_1)
    {
        FUNC_0(&VAR_3);
        FUNC_2(&VAR_3, &VAR_4);
        VAR_5.LowPart = VAR_4.dwLowDateTime;
        VAR_5.HighPart = VAR_4.dwHighDateTime;
        VAR_7 = VAR_5.QuadPart;
        VAR_7 -= VAR_0;
        VAR_7 /= 10;
        VAR_1->tv_sec = (long)(VAR_7 / 1000000);
        VAR_1->tv_usec = (long)(VAR_7 % 1000000);
    }

    if (((void*)0) != VAR_2)
    {
        FUNC_1(&VAR_6);

        VAR_2->tz_minuteswest = VAR_6.Bias;
        if (VAR_6.StandardDate.wMonth != 0)
        {
            VAR_2->tz_minuteswest += VAR_6.StandardBias * 60;
        }

        if (VAR_6.DaylightDate.wMonth != 0)
        {
            VAR_2->tz_dsttime = 1;
        }
        else
        {
            VAR_2->tz_dsttime = 0;
        }
    }

    return 0;
}
