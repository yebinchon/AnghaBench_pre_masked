
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; unsigned long long tv_nsec; } ;


 int VAR_0 ;

unsigned long long FUNC_0(struct timespec VAR_1)
{
 return VAR_1.tv_sec * VAR_0 + VAR_1.tv_nsec;
}
