
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dispatcher; TYPE_2__* currjob; } ;
typedef TYPE_1__ async_ctx ;
struct TYPE_5__ {int fibrectx; int status; int funcargs; int (* func ) (int ) ;int ret; } ;
typedef TYPE_2__ ASYNC_JOB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
    ASYNC_JOB *VAR_3;
    async_ctx *VAR_4 = FUNC_2();

    while (1) {

        VAR_3 = VAR_4->currjob;
        VAR_3->ret = VAR_3->func(VAR_3->funcargs);


        VAR_3->status = VAR_1;
        if (!FUNC_1(&VAR_3->fibrectx,
                                     &VAR_4->dispatcher, 1)) {




            FUNC_0(VAR_0, VAR_2);
        }
    }
}
