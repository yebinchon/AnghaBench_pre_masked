
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionStateData ;
typedef TYPE_1__* TransactionState ;
struct TYPE_4__ {scalar_t__ parallelModeLevel; int prevXactReadOnly; int prevSecContext; int prevUser; int blockState; int state; int savepointLevel; int gucNestLevel; scalar_t__ nestingLevel; struct TYPE_4__* parent; scalar_t__ subTransactionId; int fullTransactionId; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 TransactionState VAR_10 = VAR_0;
 TransactionState VAR_11;




 VAR_11 = (TransactionState)
  FUNC_1(VAR_7,
          sizeof(TransactionStateData));




 VAR_9 += 1;
 if (VAR_9 == VAR_4)
 {
  VAR_9 -= 1;
  FUNC_6(VAR_11);
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("cannot have more than 2^32-1 subtransactions in a transaction")));
 }





 VAR_11->fullTransactionId = VAR_3;
 VAR_11->subTransactionId = VAR_9;
 VAR_11->parent = VAR_10;
 VAR_11->nestingLevel = VAR_10->nestingLevel + 1;
 VAR_11->gucNestLevel = FUNC_2();
 VAR_11->savepointLevel = VAR_10->savepointLevel;
 VAR_11->state = VAR_6;
 VAR_11->blockState = VAR_5;
 FUNC_0(&VAR_11->prevUser, &VAR_11->prevSecContext);
 VAR_11->prevXactReadOnly = VAR_8;
 VAR_11->parallelModeLevel = 0;

 VAR_0 = VAR_11;







}
