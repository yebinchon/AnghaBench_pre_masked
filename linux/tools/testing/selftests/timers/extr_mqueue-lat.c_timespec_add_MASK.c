
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;


 scalar_t__ VAR_0 ;

struct timespec FUNC_0(struct timespec VAR_1, unsigned long long VAR_2)
{
 VAR_1.tv_nsec += VAR_2;
 while (VAR_1.tv_nsec >= VAR_0) {
  VAR_1.tv_nsec -= VAR_0;
  VAR_1.tv_sec++;
 }
 return VAR_1;
}
