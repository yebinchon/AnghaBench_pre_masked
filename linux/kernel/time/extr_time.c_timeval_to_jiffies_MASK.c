
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;

unsigned long
FUNC_1(const struct timeval *VAR_1)
{
 return FUNC_0(VAR_1->tv_sec,
         VAR_1->tv_usec * VAR_0);
}
