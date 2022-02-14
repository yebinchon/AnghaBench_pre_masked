
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_6__ {int lxid; } ;
struct TYPE_5__ {scalar_t__ blockState; scalar_t__ state; scalar_t__ maxChildXids; scalar_t__ nChildXids; int * childXids; scalar_t__ gucNestLevel; scalar_t__ nestingLevel; int subTransactionId; void* fullTransactionId; int * curTransactionOwner; scalar_t__ parallelModeLevel; int * parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_27 () ;
 TYPE_2__* VAR_6 ;
 int FUNC_28 (int ) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (int) ;
 int FUNC_32 () ;
 int FUNC_33 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *,int ,int,int) ;
 int FUNC_38 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_39 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int FUNC_40 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int FUNC_41 (int ,char*,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int) ;

__attribute__((used)) static void
FUNC_44(void)
{
 TransactionState VAR_23 = VAR_2;
 TransactionId VAR_24;
 bool VAR_25;

 VAR_25 = (VAR_23->blockState == VAR_10);


 if (VAR_25)
  FUNC_25();

 FUNC_38("CommitTransaction");




 if (VAR_23->state != VAR_13)
  FUNC_41(VAR_15, "CommitTransaction while in %s state",
    FUNC_40(VAR_23->state));
 FUNC_2(VAR_23->parent == ((void*)0));







 for (;;)
 {



  FUNC_1();






  if (!FUNC_31(0))
   break;
 }

 FUNC_24(VAR_25 ? VAR_18
       : VAR_19);
 if (FUNC_27())
  FUNC_16(1);


 FUNC_0(1);





 FUNC_32();


 FUNC_13(1);
 if (!VAR_25)
  FUNC_29();






 FUNC_30();


 FUNC_26();


 FUNC_19(1, VAR_25);





 VAR_23->state = VAR_11;
 VAR_23->parallelModeLevel = 0;

 if (!VAR_25)
 {




  VAR_24 = FUNC_35();
 }
 else
 {




  VAR_24 = VAR_5;





  FUNC_28(VAR_20);
 }

 FUNC_39(VAR_6->lxid);






 FUNC_33(VAR_6, VAR_24);
 FUNC_24(VAR_25 ? VAR_17
       : VAR_16);

 FUNC_37(VAR_14,
       VAR_8,
       1, 1);


 FUNC_6(1);


 FUNC_18(1);
 FUNC_12(1);

 FUNC_14();

 FUNC_37(VAR_14,
       VAR_9,
       1, 1);
 FUNC_37(VAR_14,
       VAR_7,
       1, 1);
 FUNC_43(1);

 FUNC_4();
 FUNC_10(1, 1);
 FUNC_21(1);
 FUNC_8();
 FUNC_23(1);
 FUNC_15(1, VAR_25);
 FUNC_20();
 FUNC_9(1);
 FUNC_7();
 FUNC_11(1);
 FUNC_17(1, VAR_25);
 FUNC_22(1, 0);
 FUNC_5(1);
 FUNC_42(0);

 VAR_1 = ((void*)0);
 FUNC_36(VAR_14);
 VAR_23->curTransactionOwner = ((void*)0);
 VAR_0 = ((void*)0);
 VAR_14 = ((void*)0);

 FUNC_3();

 VAR_23->fullTransactionId = VAR_3;
 VAR_23->subTransactionId = VAR_4;
 VAR_23->nestingLevel = 0;
 VAR_23->gucNestLevel = 0;
 VAR_23->childXids = ((void*)0);
 VAR_23->nChildXids = 0;
 VAR_23->maxChildXids = 0;

 VAR_21 = VAR_3;
 VAR_22 = 0;





 VAR_23->state = VAR_12;

 FUNC_34();
}
