
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
struct timespec {long long tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;

uint64_t FUNC_2(void)
{
    struct timespec VAR_1;
    if (FUNC_1(VAR_0, &VAR_1))
        FUNC_0();
    return VAR_1.tv_sec * 1000000LL + VAR_1.tv_nsec / 1000;
}
