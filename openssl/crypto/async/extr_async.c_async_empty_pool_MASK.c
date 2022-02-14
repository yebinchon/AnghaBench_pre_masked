
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * jobs; } ;
typedef TYPE_1__ async_pool ;
typedef int ASYNC_JOB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(async_pool *VAR_0)
{
    ASYNC_JOB *VAR_1;

    if (VAR_0 == ((void*)0) || VAR_0->jobs == ((void*)0))
        return;

    do {
        VAR_1 = FUNC_1(VAR_0->jobs);
        FUNC_0(VAR_1);
    } while (VAR_1);
}
