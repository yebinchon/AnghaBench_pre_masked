
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct nn_stopwatch {int start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timeval*,int *) ;

void FUNC_2 (struct nn_stopwatch *VAR_0)
{
    int VAR_1;
    struct timeval VAR_2;

    VAR_1 = FUNC_1 (&VAR_2, ((void*)0));
    FUNC_0 (VAR_1 == 0);
    VAR_0->start = (uint64_t) (((uint64_t) VAR_2.tv_sec) * 1000000 + VAR_2.tv_usec);
}
