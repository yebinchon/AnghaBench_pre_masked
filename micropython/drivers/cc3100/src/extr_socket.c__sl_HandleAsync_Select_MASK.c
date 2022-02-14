
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int _SelectAsyncResponse_t ;
struct TYPE_7__ {size_t ActionIndex; } ;
struct TYPE_6__ {TYPE_3__ AsyncExt; } ;
struct TYPE_8__ {TYPE_2__ FunctionParams; TYPE_1__* ObjPool; } ;
struct TYPE_5__ {int SyncObj; int * pRespArgs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_4__* VAR_0 ;
 int FUNC_5 (int *,int *,int) ;

void FUNC_6(void *VAR_1)
{
    _SelectAsyncResponse_t *VAR_2 = (_SelectAsyncResponse_t *)FUNC_1(VAR_1);

    FUNC_2();

    FUNC_0(((void*)0) != VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs);

    FUNC_5(VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs, VAR_2, sizeof(_SelectAsyncResponse_t));

    FUNC_4(&VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].SyncObj);
    FUNC_3();

    return;
}
