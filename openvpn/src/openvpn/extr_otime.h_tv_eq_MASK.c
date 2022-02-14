
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct timeval *VAR_0, const struct timeval *VAR_1)
{
    return VAR_0->tv_sec == VAR_1->tv_sec && VAR_0->tv_usec == VAR_1->tv_usec;
}
