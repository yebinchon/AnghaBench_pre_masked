
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;


 unsigned long FUNC_0 (int ,int ) ;

unsigned long
FUNC_1(const struct timespec64 *VAR_0)
{
 return FUNC_0(VAR_0->tv_sec, VAR_0->tv_nsec);
}
