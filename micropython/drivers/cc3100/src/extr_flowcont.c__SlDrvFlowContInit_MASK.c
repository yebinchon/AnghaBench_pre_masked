
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TxSyncObj; int TxLockObj; int TxPoolCnt; } ;
struct TYPE_4__ {TYPE_1__ FlowContCB; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(void)
{
    VAR_1->FlowContCB.TxPoolCnt = VAR_0;

    FUNC_0(FUNC_1(&VAR_1->FlowContCB.TxLockObj, "TxLockObj"));

    FUNC_0(FUNC_2(&VAR_1->FlowContCB.TxSyncObj, "TxSyncObj"));
}
