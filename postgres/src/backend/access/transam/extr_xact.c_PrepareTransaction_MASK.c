
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ maxChildXids; scalar_t__ nChildXids; int * childXids; scalar_t__ gucNestLevel; scalar_t__ nestingLevel; int subTransactionId; void* fullTransactionId; int * curTransactionOwner; int * parent; } ;
typedef int GlobalTransaction ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_25 (int ) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int *,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_32 () ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 () ;
 int FUNC_36 (int ) ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 (int) ;
 int FUNC_41 () ;
 int FUNC_42 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_43 () ;
 int FUNC_44 (int *) ;
 int FUNC_45 (int *,int ,int,int) ;
 int FUNC_46 (char*) ;
 int FUNC_47 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int FUNC_48 (scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_49 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_50 () ;
 void* VAR_22 ;
 int FUNC_51 (int ,char*,int ) ;
 int FUNC_52 (int ,int ) ;
 int FUNC_53 (int ) ;
 int FUNC_54 (char*) ;
 scalar_t__ VAR_23 ;
 int FUNC_55 (int ) ;
 int * VAR_24 ;

__attribute__((used)) static void
FUNC_56(void)
{
 TransactionState VAR_25 = VAR_2;
 TransactionId VAR_26 = FUNC_27();
 GlobalTransaction VAR_27;
 TimestampTz VAR_28;

 FUNC_2(!FUNC_30());

 FUNC_46("PrepareTransaction");




 if (VAR_25->state != VAR_14)
  FUNC_51(VAR_17, "PrepareTransaction while in %s state",
    FUNC_48(VAR_25->state));
 FUNC_2(VAR_25->parent == ((void*)0));







 for (;;)
 {



  FUNC_1();






  if (!FUNC_40(1))
   break;
 }

 FUNC_24(VAR_19);
 FUNC_0(1);





 FUNC_41();


 FUNC_10(1);






 FUNC_39();
 if ((VAR_9 & VAR_20))
  FUNC_52(VAR_4,
    (FUNC_53(VAR_3),
     FUNC_54("cannot PREPARE a transaction that has operated on temporary objects")));






 if (FUNC_49())
  FUNC_52(VAR_4,
    (FUNC_53(VAR_3),
     FUNC_54("cannot PREPARE a transaction that has exported snapshots")));





 if (FUNC_50())
  FUNC_52(VAR_4,
    (FUNC_53(VAR_3),
     FUNC_54("cannot PREPARE a transaction that has manipulated logical replication workers")));


 FUNC_29();





 VAR_25->state = VAR_15;

 VAR_28 = FUNC_26();


 FUNC_23();





 VAR_27 = FUNC_31(VAR_26, VAR_24, VAR_28,
       FUNC_28(), VAR_7);
 VAR_24 = ((void*)0);
 FUNC_47(VAR_27);

 FUNC_19();
 FUNC_17();
 FUNC_21();
 FUNC_20();
 FUNC_18();
 FUNC_22();
 FUNC_25(VAR_27);






 VAR_21 = 0;






 FUNC_42(VAR_8);
 FUNC_24(VAR_18);

 FUNC_45(VAR_16,
       VAR_11,
       1, 1);


 FUNC_4(1);


 FUNC_12(1);



 FUNC_35();

 FUNC_32();

 FUNC_38();

 FUNC_34(VAR_26);

 FUNC_33(VAR_26);
 FUNC_36(VAR_26);

 FUNC_45(VAR_16,
       VAR_12,
       1, 1);
 FUNC_45(VAR_16,
       VAR_10,
       1, 1);






 FUNC_37();


 FUNC_8(1, 1);
 FUNC_14(1);
 FUNC_6();
 FUNC_16(1);
 FUNC_11(1, 0);
 FUNC_13();
 FUNC_7(1);
 FUNC_5();
 FUNC_9(1);

 FUNC_15(1, 1);
 FUNC_55(0);

 VAR_1 = ((void*)0);
 FUNC_44(VAR_16);
 VAR_25->curTransactionOwner = ((void*)0);
 VAR_0 = ((void*)0);
 VAR_16 = ((void*)0);

 FUNC_3();

 VAR_25->fullTransactionId = VAR_5;
 VAR_25->subTransactionId = VAR_6;
 VAR_25->nestingLevel = 0;
 VAR_25->gucNestLevel = 0;
 VAR_25->childXids = ((void*)0);
 VAR_25->nChildXids = 0;
 VAR_25->maxChildXids = 0;

 VAR_22 = VAR_5;
 VAR_23 = 0;





 VAR_25->state = VAR_13;

 FUNC_43();
}
