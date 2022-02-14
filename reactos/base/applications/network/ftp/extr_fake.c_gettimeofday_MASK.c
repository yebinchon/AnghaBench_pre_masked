
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timezone {int tz_minuteswest; int tz_dsttime; } ;
struct timeval {long tv_sec; long tv_usec; } ;
typedef int __int64 ;
struct TYPE_5__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_4__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ FILETIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

int FUNC_2(struct timeval *VAR_3, struct timezone *VAR_4)
{
    FILETIME VAR_5;
    LARGE_INTEGER VAR_6;
    __int64 VAR_7;
    static int VAR_8;

    if (VAR_3)
    {
        FUNC_0(&VAR_5);
        VAR_6.LowPart = VAR_5.dwLowDateTime;
        VAR_6.HighPart = VAR_5.dwHighDateTime;
        VAR_7 = VAR_6.QuadPart;
        VAR_7 -= VAR_0;
        VAR_7 /= 10;
        VAR_3->tv_sec = (long)(VAR_7 / 1000000);
        VAR_3->tv_usec = (long)(VAR_7 % 1000000);
    }

    if (VAR_4)
    {
        if (!VAR_8)
        {
            FUNC_1();
            VAR_8++;
        }
        VAR_4->tz_minuteswest = VAR_2 / 60;
        VAR_4->tz_dsttime = VAR_1;
    }

    return 0;
}
