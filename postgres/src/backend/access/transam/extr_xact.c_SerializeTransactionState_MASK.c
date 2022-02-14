
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_5__ {int nParallelCurrentXids; int * parallelCurrentXids; int currentCommandId; int currentFullTransactionId; int topFullTransactionId; int xactDeferrable; int xactIsoLevel; } ;
struct TYPE_4__ {int nChildXids; int * childXids; int fullTransactionId; struct TYPE_4__* parent; } ;
typedef int Size ;
typedef TYPE_2__ SerializedTransactionState ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_7 ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int,int,int ) ;
 int VAR_8 ;

void
FUNC_7(Size VAR_9, char *VAR_10)
{
 TransactionState VAR_11;
 Size VAR_12 = 0;
 Size VAR_13 = 0;
 TransactionId *VAR_14;
 SerializedTransactionState *VAR_15;

 VAR_15 = (SerializedTransactionState *) VAR_10;

 VAR_15->xactIsoLevel = VAR_4;
 VAR_15->xactDeferrable = VAR_3;
 VAR_15->topFullTransactionId = VAR_5;
 VAR_15->currentFullTransactionId =
  VAR_0->fullTransactionId;
 VAR_15->currentCommandId = VAR_6;






 if (VAR_7 > 0)
 {
  VAR_15->nParallelCurrentXids = VAR_7;
  FUNC_4(&VAR_15->parallelCurrentXids[0], VAR_1,
      VAR_7 * sizeof(TransactionId));
  return;
 }





 for (VAR_11 = VAR_0; VAR_11 != ((void*)0); VAR_11 = VAR_11->parent)
 {
  if (FUNC_1(VAR_11->fullTransactionId))
   VAR_12 = FUNC_3(VAR_12, 1);
  VAR_12 = FUNC_3(VAR_12, VAR_11->nChildXids);
 }
 FUNC_0(VAR_2 + VAR_12 * sizeof(TransactionId)
     <= VAR_9);


 VAR_14 = FUNC_5(VAR_12 * sizeof(TransactionId));
 for (VAR_11 = VAR_0; VAR_11 != ((void*)0); VAR_11 = VAR_11->parent)
 {
  if (FUNC_1(VAR_11->fullTransactionId))
   VAR_14[VAR_13++] = FUNC_2(VAR_11->fullTransactionId);
  FUNC_4(&VAR_14[VAR_13], VAR_11->childXids,
      VAR_11->nChildXids * sizeof(TransactionId));
  VAR_13 += VAR_11->nChildXids;
 }
 FUNC_0(VAR_13 == VAR_12);


 FUNC_6(VAR_14, VAR_12, sizeof(TransactionId), VAR_8);


 VAR_15->nParallelCurrentXids = VAR_12;
 FUNC_4(&VAR_15->parallelCurrentXids[0], VAR_14,
     VAR_12 * sizeof(TransactionId));
}
