
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;



struct timeval
FUNC_0 (uint64_t VAR_0)
{
    struct timeval VAR_1;
    const uint64_t VAR_2 = VAR_0 * 1000;
    VAR_1.tv_sec = VAR_2 / 1000000;
    VAR_1.tv_usec = VAR_2 % 1000000;
    return VAR_1;
}
