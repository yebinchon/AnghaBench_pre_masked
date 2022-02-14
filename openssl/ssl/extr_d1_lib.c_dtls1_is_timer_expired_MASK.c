
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef int SSL ;


 int * FUNC_0 (int *,struct timeval*) ;

int FUNC_1(SSL *VAR_0)
{
    struct timeval VAR_1;


    if (FUNC_0(VAR_0, &VAR_1) == ((void*)0)) {
        return 0;
    }


    if (VAR_1.tv_sec > 0 || VAR_1.tv_usec > 0) {
        return 0;
    }


    return 1;
}
