
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {scalar_t__ state; int * curTransactionOwner; TYPE_1__* parent; int prevXactReadOnly; int nestingLevel; int subTransactionId; int gucNestLevel; int fullTransactionId; scalar_t__ parallelModeLevel; } ;
struct TYPE_4__ {int * curTransactionOwner; int subTransactionId; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_26 (char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_27 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_28 (int ) ;
 int VAR_12 ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_31(void)
{
 TransactionState VAR_13 = VAR_2;

 FUNC_26("CommitSubTransaction");

 if (VAR_13->state != VAR_10)
  FUNC_30(VAR_11, "CommitSubTransaction while in %s state",
    FUNC_27(VAR_13->state));



 FUNC_19(VAR_7, VAR_13->subTransactionId,
       VAR_13->parent->subTransactionId);


 if (FUNC_22())
 {
  FUNC_7(1, VAR_13->subTransactionId);
  VAR_13->parallelModeLevel = 0;
 }


 VAR_13->state = VAR_8;


 FUNC_20();
 if (FUNC_21(VAR_13->fullTransactionId))
  FUNC_17();
 FUNC_0(1);
 FUNC_15(VAR_13->subTransactionId,
      VAR_13->parent->subTransactionId,
      VAR_13->parent->curTransactionOwner);
 FUNC_5(1, VAR_13->subTransactionId,
       VAR_13->parent->subTransactionId);
 FUNC_14();

 FUNC_19(VAR_6, VAR_13->subTransactionId,
       VAR_13->parent->subTransactionId);

 FUNC_25(VAR_13->curTransactionOwner,
       VAR_4,
       1, 0);
 FUNC_9(1, VAR_13->subTransactionId,
         VAR_13->parent->subTransactionId);
 FUNC_4(1);
 FUNC_18();




 VAR_1 = VAR_13->curTransactionOwner;
 if (FUNC_21(VAR_13->fullTransactionId))
  FUNC_28(FUNC_29(VAR_13->fullTransactionId));




 FUNC_25(VAR_13->curTransactionOwner,
       VAR_5,
       1, 0);
 FUNC_25(VAR_13->curTransactionOwner,
       VAR_3,
       1, 0);

 FUNC_12(1, VAR_13->gucNestLevel);
 FUNC_10(1, VAR_13->subTransactionId);
 FUNC_11(1, VAR_13->subTransactionId,
          VAR_13->parent->subTransactionId);
 FUNC_6(1, VAR_13->subTransactionId,
        VAR_13->parent->subTransactionId);
 FUNC_2(1, VAR_13->subTransactionId,
       VAR_13->parent->subTransactionId);
 FUNC_3(1, VAR_13->nestingLevel);
 FUNC_8(1, VAR_13->nestingLevel);
 FUNC_16(VAR_13->nestingLevel);
 FUNC_1(1, VAR_13->nestingLevel);






 VAR_12 = VAR_13->prevXactReadOnly;

 VAR_1 = VAR_13->parent->curTransactionOwner;
 VAR_0 = VAR_13->parent->curTransactionOwner;
 FUNC_24(VAR_13->curTransactionOwner);
 VAR_13->curTransactionOwner = ((void*)0);

 FUNC_13();

 VAR_13->state = VAR_9;

 FUNC_23();
}
