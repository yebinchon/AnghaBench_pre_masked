
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int int64_t ;


 int FUNC_0 (struct timespec*,int *) ;

void FUNC_1(int64_t VAR_0)
{
    if (VAR_0 < 0)
        return;
    struct timespec VAR_1;
    VAR_1.tv_sec = VAR_0 / 1000000;
    VAR_1.tv_nsec = (VAR_0 % 1000000) * 1000;
    FUNC_0(&VAR_1, ((void*)0));
}
