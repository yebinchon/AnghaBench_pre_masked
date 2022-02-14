
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int
FUNC_1(const struct timeval *VAR_0)
{
    if (VAR_0->tv_sec == 0 && VAR_0->tv_usec == 0)
    {
        return 0;
    }
    else
    {
        return FUNC_0(VAR_0->tv_sec * 1000 + (VAR_0->tv_usec + 500) / 1000, 1);
    }
}
