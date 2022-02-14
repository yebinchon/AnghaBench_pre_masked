
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static void FUNC_1(long *VAR_0, long *VAR_1)
{
    struct timeval VAR_2;

    FUNC_0(&VAR_2, ((void*)0));
    *VAR_0 = VAR_2.tv_sec;
    *VAR_1 = VAR_2.tv_usec/1000;
}
