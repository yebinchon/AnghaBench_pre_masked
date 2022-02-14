
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_sec; long long tv_nsec; } ;


 long long VAR_0 ;

struct timespec FUNC_0(long long VAR_1)
{
 struct timespec VAR_2;

 VAR_2.tv_sec = VAR_1/VAR_0;
 VAR_2.tv_nsec = VAR_1%VAR_0;
 return VAR_2;
}
