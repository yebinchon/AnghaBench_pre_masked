
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ blockState; int fullTransactionId; } ;
struct TYPE_3__ {int * parallelCurrentXids; int nParallelCurrentXids; int currentCommandId; int currentFullTransactionId; int topFullTransactionId; int xactDeferrable; int xactIsoLevel; } ;
typedef TYPE_1__ SerializedTransactionState ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_2(char *VAR_9)
{
 SerializedTransactionState *VAR_10;

 FUNC_0(VAR_0->blockState == VAR_2);
 FUNC_1();

 VAR_10 = (SerializedTransactionState *) VAR_9;
 VAR_5 = VAR_10->xactIsoLevel;
 VAR_4 = VAR_10->xactDeferrable;
 VAR_6 = VAR_10->topFullTransactionId;
 VAR_0->fullTransactionId =
  VAR_10->currentFullTransactionId;
 VAR_7 = VAR_10->currentCommandId;
 VAR_8 = VAR_10->nParallelCurrentXids;
 VAR_1 = &VAR_10->parallelCurrentXids[0];

 VAR_0->blockState = VAR_3;
}
