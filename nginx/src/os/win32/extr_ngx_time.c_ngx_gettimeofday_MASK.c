
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_3__ {int dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct timeval *VAR_0)
{
    uint64_t VAR_1;
    FILETIME VAR_2;

    FUNC_0(&VAR_2);
    VAR_1 = ((uint64_t) VAR_2.dwHighDateTime << 32) | VAR_2.dwLowDateTime;
    VAR_1 -= 116444736000000000;

    VAR_0->tv_sec = (long) (VAR_1 / 10000000);
    VAR_0->tv_usec = (long) ((VAR_1 % 10000000) / 10);
}
