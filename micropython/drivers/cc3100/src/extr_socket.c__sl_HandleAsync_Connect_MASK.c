
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sd; int statusOrLen; } ;
typedef TYPE_4__ _SocketResponse_t ;
struct TYPE_7__ {size_t ActionIndex; } ;
struct TYPE_8__ {TYPE_2__ AsyncExt; } ;
struct TYPE_10__ {TYPE_3__ FunctionParams; TYPE_1__* ObjPool; } ;
struct TYPE_6__ {int SyncObj; int * pRespArgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_5__* VAR_2 ;

void FUNC_6(void *VAR_3)
{
    _SocketResponse_t *VAR_4 = (_SocketResponse_t *)FUNC_2(VAR_3);

    FUNC_3();

    FUNC_0((VAR_4->sd & VAR_0) <= VAR_1);
    FUNC_1(((void*)0) != VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].pRespArgs);


    ((_SocketResponse_t *)(VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].pRespArgs))->sd = VAR_4->sd;
    ((_SocketResponse_t *)(VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].pRespArgs))->statusOrLen = VAR_4->statusOrLen;


    FUNC_5(&VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].SyncObj);
    FUNC_4();
    return;
}
