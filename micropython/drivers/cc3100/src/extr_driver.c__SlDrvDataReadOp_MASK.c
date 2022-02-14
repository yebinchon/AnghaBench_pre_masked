
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t _u8 ;
typedef int _SlSd_t ;
typedef scalar_t__ _SlReturnVal_t ;
struct TYPE_10__ {scalar_t__ RxPayloadLen; int * pRxPayload; } ;
typedef TYPE_3__ _SlCmdExt_t ;
typedef int _SlCmdCtrl_t ;
struct TYPE_11__ {size_t* pArgs; int * pData; } ;
typedef TYPE_4__ _SlArgsData_t ;
struct TYPE_8__ {scalar_t__ TxPoolCnt; int TxLockObj; int TxSyncObj; } ;
struct TYPE_12__ {TYPE_2__* ObjPool; int GlobalLockObj; TYPE_1__ FlowContCB; } ;
struct TYPE_9__ {size_t* pRespArgs; int SyncObj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int) ;
 TYPE_5__* VAR_8 ;
 int FUNC_9 (int *) ;

_SlReturnVal_t FUNC_10(
    _SlSd_t VAR_9,
    _SlCmdCtrl_t *VAR_10 ,
    void *VAR_11 ,
    _SlCmdExt_t *VAR_12)
{
    _SlReturnVal_t VAR_13;
    _u8 VAR_14 = VAR_2;
    _SlArgsData_t VAR_15;


    FUNC_0(((void*)0) != VAR_12->pRxPayload);



    FUNC_0(0 != VAR_12->RxPayloadLen);


    if((VAR_9 & VAR_0) >= VAR_5)
    {
        return VAR_4;
    }


    VAR_14 = (_u8)FUNC_8(VAR_3, VAR_9 & VAR_0);

    if (VAR_2 == VAR_14)
    {
        return VAR_7;
    }

    FUNC_4();

    VAR_15.pData = VAR_12->pRxPayload;
    VAR_15.pArgs = (_u8 *)VAR_11;
    VAR_8->ObjPool[VAR_14].pRespArgs = (_u8 *)&VAR_15;

    FUNC_5();



    FUNC_2(&VAR_8->FlowContCB.TxLockObj);





    FUNC_9(&VAR_8->FlowContCB.TxSyncObj);

    if(VAR_8->FlowContCB.TxPoolCnt <= VAR_1)
    {



        FUNC_7(&VAR_8->FlowContCB.TxSyncObj);

    }

    FUNC_2(&VAR_8->GlobalLockObj);


    FUNC_0(VAR_8->FlowContCB.TxPoolCnt > VAR_1);
    VAR_8->FlowContCB.TxPoolCnt--;

    FUNC_3(&VAR_8->FlowContCB.TxLockObj);


    VAR_13 = FUNC_1(VAR_10, VAR_12, (_u8 *)VAR_11);

    FUNC_3(&VAR_8->GlobalLockObj);


    if(VAR_6 == VAR_13)
    {

        FUNC_7(&VAR_8->ObjPool[VAR_14].SyncObj);
    }

    FUNC_6(VAR_14);
    return VAR_13;
}
