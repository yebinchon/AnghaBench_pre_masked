
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ backendId; int localTransactionId; } ;
typedef TYPE_1__ VirtualTransactionId ;
typedef TYPE_2__* TransactionState ;
struct TYPE_9__ {scalar_t__ backendId; int lxid; } ;
struct TYPE_8__ {scalar_t__ state; int nestingLevel; int gucNestLevel; scalar_t__ prevSecContext; int startedInRecovery; int didLogXid; void* subTransactionId; int prevUser; scalar_t__ maxChildXids; scalar_t__ nChildXids; int * childXids; int fullTransactionId; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_10 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_15 (TYPE_1__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 () ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void
FUNC_18(void)
{
 TransactionState VAR_29;
 VirtualTransactionId VAR_30;




 VAR_29 = &VAR_14;
 VAR_0 = VAR_29;

 FUNC_1(!FUNC_6(VAR_18));


 FUNC_1(VAR_29->state == VAR_10);







 VAR_29->state = VAR_12;
 VAR_29->fullTransactionId = VAR_5;


 VAR_28 = VAR_23 != 0 &&
  (VAR_23 == 1 ||
   FUNC_17() <= VAR_23 * VAR_6);






 VAR_29->nestingLevel = 1;
 VAR_29->gucNestLevel = 1;
 VAR_29->childXids = ((void*)0);
 VAR_29->nChildXids = 0;
 VAR_29->maxChildXids = 0;





 FUNC_9(&VAR_29->prevUser, &VAR_29->prevSecContext);


 FUNC_1(VAR_29->prevSecContext == 0);
 if (FUNC_11())
 {
  VAR_29->startedInRecovery = 1;
  VAR_17 = 1;
 }
 else
 {
  VAR_29->startedInRecovery = 0;
  VAR_17 = VAR_3;
 }
 VAR_15 = VAR_1;
 VAR_16 = VAR_2;
 VAR_22 = 0;
 VAR_9 = 0;




 VAR_29->subTransactionId = VAR_13;
 VAR_21 = VAR_13;
 VAR_19 = VAR_4;
 VAR_20 = 0;




 VAR_24 = 0;
 VAR_29->didLogXid = 0;




 FUNC_4();
 FUNC_5();





 VAR_30.backendId = VAR_7;
 VAR_30.localTransactionId = FUNC_8();




 FUNC_15(VAR_30);





 FUNC_1(VAR_8->backendId == VAR_30.backendId);
 VAR_8->lxid = VAR_30.localTransactionId;

 FUNC_14(VAR_30.localTransactionId);
 if (!FUNC_10())
 {
  if (!FUNC_12())
   VAR_26 = VAR_25;
  else
   VAR_26 = FUNC_7();
 }
 else
  FUNC_1(VAR_26 != 0);
 FUNC_16(VAR_26);

 VAR_27 = 0;




 FUNC_3();
 FUNC_2();
 FUNC_0();





 VAR_29->state = VAR_11;

 FUNC_13("StartTransaction");
}
