
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clockid_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1(clockid_t VAR_2, struct timespec *VAR_3)
{
    switch (VAR_2) {
    case 129:
    case 128:

        VAR_3->tv_sec = FUNC_0(((void*)0));
        VAR_3->tv_nsec = 0;
        return 0;
    }

    VAR_1 = VAR_0;
    return -1;
}
