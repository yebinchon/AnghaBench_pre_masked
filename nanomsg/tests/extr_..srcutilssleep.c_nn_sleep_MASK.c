
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec*,int *) ;

void FUNC_2 (int VAR_0)
{
    int VAR_1;
    struct timespec VAR_2;

    VAR_2.tv_sec = VAR_0 / 1000;
    VAR_2.tv_nsec = VAR_0 % 1000 * 1000000;
    VAR_1 = FUNC_1 (&VAR_2, ((void*)0));
    FUNC_0 (VAR_1 == 0);
}
