
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int jobs; } ;
typedef TYPE_1__ async_pool ;
struct TYPE_6__ {int * funcargs; } ;
typedef TYPE_2__ ASYNC_JOB ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(ASYNC_JOB *VAR_1) {
    async_pool *VAR_2;

    VAR_2 = (async_pool *)FUNC_0(&VAR_0);
    FUNC_1(VAR_1->funcargs);
    VAR_1->funcargs = ((void*)0);
    FUNC_2(VAR_2->jobs, VAR_1);
}
