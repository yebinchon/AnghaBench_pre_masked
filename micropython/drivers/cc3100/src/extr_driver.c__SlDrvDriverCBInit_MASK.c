
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int _u8 ;
typedef int _SlPoolObj_t ;
typedef int _SlDriverCb_t ;
struct TYPE_7__ {int TxSyncObj; int TxLockObj; int TxPoolCnt; } ;
struct TYPE_8__ {int NextIndex; int ActivePoolIdx; int PendingPoolIdx; TYPE_1__ FlowContCB; int SyncObj; struct TYPE_8__* ObjPool; int AdditionalData; scalar_t__ FreePoolIdx; int ProtectionLockObj; int GlobalLockObj; int CmdSyncObj; } ;
struct TYPE_9__ {TYPE_2__ DriverCB; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(void)
{
    _u8 VAR_7 =0;


    VAR_6 = FUNC_4(sizeof(_SlDriverCb_t));



    FUNC_0(VAR_6);


    FUNC_2(VAR_6, sizeof(_SlDriverCb_t));
    VAR_2 = 0;
    FUNC_1( FUNC_6(&VAR_6->CmdSyncObj, "CmdSyncObj") );
    FUNC_5(&VAR_6->CmdSyncObj);

    FUNC_1( FUNC_3(&VAR_6->GlobalLockObj, "GlobalLockObj") );
    FUNC_1( FUNC_3(&VAR_6->ProtectionLockObj, "ProtectionLockObj") );


    FUNC_2(&VAR_6->ObjPool[0], VAR_1*sizeof(_SlPoolObj_t));


    VAR_6->FreePoolIdx = 0;

    for (VAR_7 = 0 ; VAR_7 < VAR_1 ; VAR_7++)
    {
        VAR_6->ObjPool[VAR_7].NextIndex = VAR_7 + 1;
        VAR_6->ObjPool[VAR_7].AdditionalData = VAR_3;

        FUNC_1( FUNC_6(&VAR_6->ObjPool[VAR_7].SyncObj, "SyncObj"));
        FUNC_5(&VAR_6->ObjPool[VAR_7].SyncObj);
    }

     VAR_6->ActivePoolIdx = VAR_1;
     VAR_6->PendingPoolIdx = VAR_1;


    VAR_6->FlowContCB.TxPoolCnt = VAR_0;
    FUNC_1(FUNC_3(&VAR_6->FlowContCB.TxLockObj, "TxLockObj"));
    FUNC_1(FUNC_6(&VAR_6->FlowContCB.TxSyncObj, "TxSyncObj"));

    VAR_4 = 0;

}
