
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suseconds_t ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
struct __kernel_old_timeval {int tv_usec; int tv_sec; } ;
typedef int s64 ;


 struct timespec64 FUNC_0 (int const) ;

struct __kernel_old_timeval FUNC_1(const s64 VAR_0)
{
 struct timespec64 VAR_1 = FUNC_0(VAR_0);
 struct __kernel_old_timeval VAR_2;

 VAR_2.tv_sec = VAR_1.tv_sec;
 VAR_2.tv_usec = (suseconds_t)VAR_1.tv_nsec / 1000;

 return VAR_2;
}
