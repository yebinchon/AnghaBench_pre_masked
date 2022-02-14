
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int _PingReportResponse_t ;
struct TYPE_10__ {size_t ActionIndex; } ;
struct TYPE_11__ {TYPE_4__ AsyncExt; } ;
struct TYPE_7__ {int * pAsyncRsp; } ;
struct TYPE_8__ {TYPE_1__ PingAsync; } ;
struct TYPE_12__ {TYPE_5__ FunctionParams; TYPE_3__* ObjPool; TYPE_2__ PingCB; } ;
struct TYPE_9__ {int SyncObj; int * pRespArgs; } ;
typedef int SlPingReport_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_6__* VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;

void FUNC_8(void *VAR_1)
{
    _PingReportResponse_t *VAR_2 = (_PingReportResponse_t *)FUNC_2(VAR_1);
    SlPingReport_t VAR_3;

    if(&FUNC_6)
    {
        FUNC_0(VAR_2,&VAR_3);
        FUNC_6(&VAR_3);
    }
    else
    {

        FUNC_3();

        FUNC_1(((void*)0) != VAR_0->PingCB.PingAsync.pAsyncRsp);

  if (((void*)0) != VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs)
  {
     FUNC_7(VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].pRespArgs, VAR_2, sizeof(_PingReportResponse_t));
     FUNC_5(&VAR_0->ObjPool[VAR_0->FunctionParams.AsyncExt.ActionIndex].SyncObj);
  }
       FUNC_4();
    }
    return;
}
