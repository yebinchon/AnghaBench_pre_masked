
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t FUNC_0(struct timespec *VAR_0)
{
 return VAR_0->tv_sec * 1000 * 1000 + VAR_0->tv_nsec / 1000;
}
