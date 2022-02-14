
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static double FUNC_0(struct timeval *VAR_1)
{
 return (double)VAR_1->tv_sec + (double)VAR_1->tv_usec / (double)VAR_0;
}
