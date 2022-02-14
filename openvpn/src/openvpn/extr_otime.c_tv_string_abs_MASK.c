
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct gc_arena {int dummy; } ;


 char const* FUNC_0 (int ,long,int,struct gc_arena*) ;

const char *
FUNC_1(const struct timeval *VAR_0, struct gc_arena *VAR_1)
{
    return FUNC_0((time_t) VAR_0->tv_sec,
                       (long) VAR_0->tv_usec,
                       1,
                       VAR_1);
}
