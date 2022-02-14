
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint64_t
FUNC_0(const struct timespec *VAR_1)
{
        return ((uint64_t) VAR_1->tv_sec * VAR_0) + VAR_1->tv_nsec;
}
