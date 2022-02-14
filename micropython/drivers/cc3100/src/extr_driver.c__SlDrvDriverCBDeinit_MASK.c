
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t _u8 ;
struct TYPE_5__ {int TxSyncObj; int TxLockObj; scalar_t__ TxPoolCnt; } ;
struct TYPE_7__ {size_t PendingPoolIdx; size_t ActivePoolIdx; scalar_t__ FreePoolIdx; TYPE_2__* ObjPool; int ProtectionLockObj; int GlobalLockObj; int CmdSyncObj; TYPE_1__ FlowContCB; } ;
struct TYPE_6__ {int SyncObj; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4()
{
    _u8 VAR_2 =0;


    VAR_1->FlowContCB.TxPoolCnt = 0;
    FUNC_0(FUNC_2(&VAR_1->FlowContCB.TxLockObj));
    FUNC_0(FUNC_3(&VAR_1->FlowContCB.TxSyncObj));

    FUNC_0( FUNC_3(&VAR_1->CmdSyncObj) );
    FUNC_0( FUNC_2(&VAR_1->GlobalLockObj) );
    FUNC_0( FUNC_2(&VAR_1->ProtectionLockObj) );


    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)

    {
 FUNC_0( FUNC_3(&VAR_1->ObjPool[VAR_2].SyncObj) );
    }

    VAR_1->FreePoolIdx = 0;
    VAR_1->PendingPoolIdx = VAR_0;
    VAR_1->ActivePoolIdx = VAR_0;


    FUNC_1(VAR_1);





    VAR_1 = ((void*)0);
}
