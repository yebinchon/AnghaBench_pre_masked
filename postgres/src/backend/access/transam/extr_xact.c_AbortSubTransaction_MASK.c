
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {scalar_t__ state; int prevXactReadOnly; int nestingLevel; TYPE_1__* parent; int subTransactionId; int gucNestLevel; scalar_t__ curTransactionOwner; int fullTransactionId; scalar_t__ parallelModeLevel; int prevSecContext; int prevUser; } ;
struct TYPE_4__ {int subTransactionId; int curTransactionOwner; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ,scalar_t__,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 () ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_29 () ;
 int FUNC_30 (int) ;
 int FUNC_31 (scalar_t__,int ,int,int) ;
 int VAR_4 ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_34 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_35 () ;
 int VAR_8 ;
 int FUNC_36 () ;
 int VAR_9 ;
 int FUNC_37 (int ,char*,int ) ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;

__attribute__((used)) static void
FUNC_41(void)
{
 TransactionState VAR_10 = VAR_0;


 FUNC_24();


 FUNC_14();
 FUNC_17();
 FUNC_26();

 FUNC_39();
 FUNC_38();
 FUNC_0();
 FUNC_35();


 FUNC_36();


 FUNC_22();





 FUNC_27();
 FUNC_40();






 FUNC_28(&VAR_7);




 FUNC_33("AbortSubTransaction");

 if (VAR_10->state != VAR_6)
  FUNC_37(VAR_8, "AbortSubTransaction while in %s state",
    FUNC_34(VAR_10->state));

 VAR_10->state = VAR_5;





 FUNC_32(VAR_10->prevUser, VAR_10->prevSecContext);


 if (FUNC_25())
 {
  FUNC_8(0, VAR_10->subTransactionId);
  VAR_10->parallelModeLevel = 0;
 }





 if (VAR_10->curTransactionOwner)
 {
  FUNC_1(0);
  FUNC_16(VAR_10->subTransactionId,
         VAR_10->parent->subTransactionId,
         VAR_10->curTransactionOwner,
         VAR_10->parent->curTransactionOwner);
  FUNC_6(0, VAR_10->subTransactionId,
        VAR_10->parent->subTransactionId);
  FUNC_15();


  (void) FUNC_30(1);


  if (FUNC_23(VAR_10->fullTransactionId))
   FUNC_19();

  FUNC_21(VAR_4, VAR_10->subTransactionId,
        VAR_10->parent->subTransactionId);

  FUNC_31(VAR_10->curTransactionOwner,
        VAR_2,
        0, 0);
  FUNC_10(0, VAR_10->subTransactionId,
          VAR_10->parent->subTransactionId);
  FUNC_5(0);
  FUNC_31(VAR_10->curTransactionOwner,
        VAR_3,
        0, 0);
  FUNC_31(VAR_10->curTransactionOwner,
        VAR_1,
        0, 0);
  FUNC_20();

  FUNC_13(0, VAR_10->gucNestLevel);
  FUNC_11(0, VAR_10->subTransactionId);
  FUNC_12(0, VAR_10->subTransactionId,
           VAR_10->parent->subTransactionId);
  FUNC_7(0, VAR_10->subTransactionId,
         VAR_10->parent->subTransactionId);
  FUNC_3(0, VAR_10->subTransactionId,
        VAR_10->parent->subTransactionId);
  FUNC_4(0, VAR_10->nestingLevel);
  FUNC_9(0, VAR_10->nestingLevel);
  FUNC_18(VAR_10->nestingLevel);
  FUNC_2(0, VAR_10->nestingLevel);
 }






 VAR_9 = VAR_10->prevXactReadOnly;

 FUNC_29();
}
