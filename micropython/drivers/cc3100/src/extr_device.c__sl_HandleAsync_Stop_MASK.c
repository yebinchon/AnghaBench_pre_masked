
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int _BasicResponse_t ;
struct TYPE_8__ {size_t ActionIndex; } ;
struct TYPE_9__ {TYPE_3__ AsyncExt; } ;
struct TYPE_6__ {int * pAsyncRsp; } ;
struct TYPE_10__ {TYPE_4__ FunctionParams; TYPE_2__* ObjPool; TYPE_1__ StopCB; } ;
struct TYPE_7__ {int SyncObj; int pRespArgs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_5__* VAR_0 ;
 int FUNC_5 (int ,int *,int) ;

void FUNC_6(void *VAR_1)
{
    _BasicResponse_t *VAR_2 = (_BasicResponse_t *)FUNC_1(VAR_1);

    FUNC_0(((void*)0) != VAR_0->StopCB.pAsyncRsp);

    FUNC_2();

    FUNC_5(VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs, VAR_2, sizeof(_BasicResponse_t));

    FUNC_4(&VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].SyncObj);
    FUNC_3();

    return;
}
