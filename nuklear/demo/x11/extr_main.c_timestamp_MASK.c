
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static long
FUNC_1(void)
{
    struct timeval VAR_0;
    if (FUNC_0(&VAR_0, ((void*)0)) < 0) return 0;
    return (long)((long)VAR_0.tv_sec * 1000 + (long)VAR_0.tv_usec/1000);
}
