
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t ActionIndex; } ;
struct TYPE_9__ {TYPE_2__ AsyncExt; } ;
struct TYPE_11__ {TYPE_3__ FunctionParams; int (* pInitCallback ) (int ) ;TYPE_1__* ObjPool; } ;
struct TYPE_10__ {int Status; } ;
struct TYPE_7__ {int SyncObj; int pRespArgs; } ;
typedef TYPE_4__ InitComplete_t ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_6 (int ,TYPE_4__*,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(void *VAR_1)
{
    InitComplete_t *VAR_2 = (InitComplete_t *)FUNC_0(VAR_1);

    FUNC_1();

    if(VAR_0->pInitCallback)
    {
        VAR_0->pInitCallback(FUNC_5(VAR_2->Status));
    }
    else
    {
        FUNC_6(VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs, VAR_2, sizeof(InitComplete_t));
        FUNC_4(&VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].SyncObj);
    }

   FUNC_2();

    if(VAR_0->pInitCallback)
    {
        FUNC_3(VAR_0->FunctionParams.AsyncExt.ActionIndex);
    }

}
