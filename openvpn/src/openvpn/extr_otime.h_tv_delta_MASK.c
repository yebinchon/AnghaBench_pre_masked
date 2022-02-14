
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;



__attribute__((used)) static inline void
FUNC_0(struct timeval *VAR_0, const struct timeval *VAR_1, const struct timeval *VAR_2)
{
    int VAR_3 = VAR_2->tv_sec - VAR_1->tv_sec;
    int VAR_4 = VAR_2->tv_usec - VAR_1->tv_usec;

    while (VAR_4 < 0)
    {
        VAR_4 += 1000000;
        VAR_3 -= 1;
    }

    if (VAR_3 < 0)
    {
        VAR_4 = VAR_3 = 0;
    }

    VAR_0->tv_sec = VAR_3;
    VAR_0->tv_usec = VAR_4;
}
