
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;

double FUNC_1(void)
{
 struct timeval VAR_0;
 if(FUNC_0(&VAR_0, ((void*)0))<0) return 0.0;
 else return (double)VAR_0.tv_sec+((double)VAR_0.tv_usec/1000000.);
}
