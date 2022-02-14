
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TxSyncObj; int TxLockObj; scalar_t__ TxPoolCnt; } ;
struct TYPE_4__ {TYPE_1__ FlowContCB; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
    VAR_0->FlowContCB.TxPoolCnt = 0;

    FUNC_0(FUNC_1(&VAR_0->FlowContCB.TxLockObj));

    FUNC_0(FUNC_2(&VAR_0->FlowContCB.TxSyncObj));
}
