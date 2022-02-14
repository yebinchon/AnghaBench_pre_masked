
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_6__ {int denom; int numer; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;

uint64_t FUNC_9 (void)
{
    int VAR_1;
    struct timeval VAR_2;



    VAR_1 = FUNC_5 (&VAR_2, ((void*)0));
    FUNC_3 (VAR_1 == 0);
    return VAR_2.tv_sec * (uint64_t) 1000 + VAR_2.tv_usec / 1000;


}
