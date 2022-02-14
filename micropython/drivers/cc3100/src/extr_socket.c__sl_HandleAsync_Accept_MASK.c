
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int sd; } ;
struct TYPE_12__ {TYPE_4__ IpV4; } ;
typedef TYPE_5__ _SocketAddrResponse_u ;
struct TYPE_9__ {size_t ActionIndex; } ;
struct TYPE_10__ {TYPE_2__ AsyncExt; } ;
struct TYPE_13__ {TYPE_3__ FunctionParams; TYPE_1__* ObjPool; } ;
struct TYPE_8__ {int SyncObj; int * pRespArgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_7__* VAR_2 ;
 int FUNC_6 (int *,TYPE_5__*,int) ;

void FUNC_7(void *VAR_3)
{
    _SocketAddrResponse_u *VAR_4 = (_SocketAddrResponse_u *)FUNC_2(VAR_3);

    FUNC_3();

    FUNC_0(( VAR_4->IpV4.sd & VAR_0) <= VAR_1);
    FUNC_1(((void*)0) != VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].pRespArgs);

 FUNC_6(VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].pRespArgs, VAR_4,sizeof(_SocketAddrResponse_u));
 FUNC_5(&VAR_2->ObjPool[VAR_2->FunctionParams.AsyncExt.ActionIndex].SyncObj);

    FUNC_4();
    return;
}
