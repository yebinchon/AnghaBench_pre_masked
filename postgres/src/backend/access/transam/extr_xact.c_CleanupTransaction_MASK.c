
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ parallelModeLevel; scalar_t__ maxChildXids; scalar_t__ nChildXids; int * childXids; scalar_t__ gucNestLevel; scalar_t__ nestingLevel; int subTransactionId; void* fullTransactionId; int * curTransactionOwner; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 void* VAR_9 ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_6(void)
{
 TransactionState VAR_11 = VAR_2;




 if (VAR_11->state != VAR_6)
  FUNC_5(VAR_3, "CleanupTransaction: unexpected state %s",
    FUNC_4(VAR_11->state));




 FUNC_1();
 FUNC_2(0, 1);

 VAR_1 = ((void*)0);
 if (VAR_8)
  FUNC_3(VAR_8);
 VAR_11->curTransactionOwner = ((void*)0);
 VAR_0 = ((void*)0);
 VAR_8 = ((void*)0);

 FUNC_0();

 VAR_11->fullTransactionId = VAR_4;
 VAR_11->subTransactionId = VAR_5;
 VAR_11->nestingLevel = 0;
 VAR_11->gucNestLevel = 0;
 VAR_11->childXids = ((void*)0);
 VAR_11->nChildXids = 0;
 VAR_11->maxChildXids = 0;
 VAR_11->parallelModeLevel = 0;

 VAR_9 = VAR_4;
 VAR_10 = 0;





 VAR_11->state = VAR_7;
}
