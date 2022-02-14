
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long long tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;

long long int FUNC_1()
{
 struct timeval VAR_0;

 FUNC_0(&VAR_0, ((void*)0));

 return (long long int)(VAR_0.tv_sec * 1000000LL + VAR_0.tv_usec);
}
