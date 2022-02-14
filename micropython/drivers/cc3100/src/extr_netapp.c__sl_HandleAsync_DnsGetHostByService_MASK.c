
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


typedef scalar_t__ _u16 ;
typedef int _i8 ;
struct TYPE_10__ {scalar_t__ TextLen; int Status; int Port; int Address; } ;
typedef TYPE_4__ _GetHostByServiceIPv4AsyncResponse_t ;
struct TYPE_11__ {scalar_t__* inout_TextLen; int out_pText; int Status; int * out_pPort; int * out_pAddr; } ;
typedef TYPE_5__ _GetHostByServiceAsyncResponse_t ;
struct TYPE_8__ {size_t ActionIndex; } ;
struct TYPE_9__ {TYPE_2__ AsyncExt; } ;
struct TYPE_12__ {TYPE_3__ FunctionParams; TYPE_1__* ObjPool; } ;
struct TYPE_7__ {int AdditionalData; int SyncObj; int * pRespArgs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 TYPE_6__* VAR_1 ;
 int FUNC_3 (int ,int *,scalar_t__) ;

void FUNC_4(void *VAR_2)
{

 _GetHostByServiceAsyncResponse_t* VAR_3;
 _u16 VAR_4;
 _u16 VAR_5;





 _GetHostByServiceIPv4AsyncResponse_t *VAR_6 = (_GetHostByServiceIPv4AsyncResponse_t *)FUNC_1(VAR_2);

    FUNC_0(((void*)0) != VAR_1->ObjPool[VAR_1->FunctionParams.AsyncExt.ActionIndex].pRespArgs);


 if(VAR_1->ObjPool[VAR_1->FunctionParams.AsyncExt.ActionIndex].AdditionalData & VAR_0)
 {
  return;
 }

 else
 {






 VAR_4 = VAR_6->TextLen;


  VAR_3 = (_GetHostByServiceAsyncResponse_t*)VAR_1->ObjPool[VAR_1->FunctionParams.AsyncExt.ActionIndex].pRespArgs;




 VAR_3->out_pAddr[0] = VAR_6->Address;
 VAR_3->out_pPort[0] = VAR_6->Port;
 VAR_3->Status = VAR_6->Status;


 VAR_5 = VAR_3->inout_TextLen[0];


 VAR_5 = (VAR_4 <= VAR_5) ? VAR_4 : VAR_5;
 VAR_3->inout_TextLen[0] = VAR_5 ;







 FUNC_3(VAR_3->out_pText ,
       (_i8 *)(& VAR_6[1]) ,
    VAR_5 );




  FUNC_2(&VAR_1->ObjPool[VAR_1->FunctionParams.AsyncExt.ActionIndex].SyncObj);
  return;
 }
}
