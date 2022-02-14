
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned int tv_sec; unsigned int tv_usec; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

void
FUNC_2(unsigned int VAR_0)
{



    struct timeval VAR_1;
    VAR_1.tv_sec = VAR_0 / 1000;
    VAR_1.tv_usec = (VAR_0 % 1000) * 1000;
    FUNC_1(0, ((void*)0), ((void*)0), ((void*)0), &VAR_1);

}
