
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int epoch; int last_xid; } ;
typedef TYPE_1__ TxidEpoch ;
typedef int FullTransactionId ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(TxidEpoch *VAR_0)
{
 FullTransactionId VAR_1 = FUNC_1();

 VAR_0->last_xid = FUNC_2(VAR_1);
 VAR_0->epoch = FUNC_0(VAR_1);
}
