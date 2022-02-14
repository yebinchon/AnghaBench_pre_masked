
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int clockid_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(clockid_t VAR_1, struct timespec64 *VAR_2)
{
 VAR_2->tv_sec = 0;
 VAR_2->tv_nsec = VAR_0;
 return 0;
}
