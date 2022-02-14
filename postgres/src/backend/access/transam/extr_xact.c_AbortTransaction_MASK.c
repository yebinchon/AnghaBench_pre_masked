
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_6__ {int lxid; } ;
struct TYPE_5__ {scalar_t__ blockState; scalar_t__ state; scalar_t__ parallelModeLevel; int prevSecContext; int prevUser; int * parent; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,int) ;
 int FUNC_23 () ;
 int FUNC_24 (int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_28 () ;
 int VAR_1 ;
 scalar_t__ FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_32 (int *) ;
 int FUNC_33 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_34 () ;
 int FUNC_35 (int) ;
 int FUNC_36 (int *,int ,int,int) ;
 int FUNC_37 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_38 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_39 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_40 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_41 () ;
 int FUNC_42 (int ) ;
 int VAR_15 ;
 int FUNC_43 (int ,char*,int ) ;
 int FUNC_44 () ;
 int FUNC_45 () ;
 int FUNC_46 (int ) ;
 int FUNC_47 () ;
 int FUNC_48 (int) ;

__attribute__((used)) static void
FUNC_49(void)
{
 TransactionState VAR_16 = VAR_0;
 TransactionId VAR_17;
 bool VAR_18;


 FUNC_28();


 FUNC_3();
 FUNC_6();







 FUNC_30();


 FUNC_45();
 FUNC_44();


 FUNC_0();
 FUNC_40();


 FUNC_41();


 FUNC_27();





 FUNC_31();
 FUNC_47();






 FUNC_32(&VAR_11);




 VAR_18 = (VAR_16->blockState == VAR_6);
 if (VAR_16->state != VAR_8 && VAR_16->state != VAR_9)
  FUNC_43(VAR_12, "AbortTransaction while in %s state",
    FUNC_39(VAR_16->state));
 FUNC_2(VAR_16->parent == ((void*)0));





 VAR_16->state = VAR_7;
 FUNC_37(VAR_16->prevUser, VAR_16->prevSecContext);


 if (FUNC_29())
 {
  FUNC_19(0);
  VAR_16->parallelModeLevel = 0;
 }




 FUNC_1(0);
 FUNC_5();
 FUNC_16(0);
 FUNC_4();
 FUNC_22(0, VAR_18);
 FUNC_7();







 if (!VAR_18)
  VAR_17 = FUNC_35(0);
 else
 {
  VAR_17 = VAR_1;






  FUNC_42(VAR_15);
 }

 FUNC_38(VAR_2->lxid);






 FUNC_33(VAR_2, VAR_17);






 if (VAR_10 != ((void*)0))
 {
  if (VAR_18)
   FUNC_26(VAR_14);
  else
   FUNC_26(VAR_13);

  FUNC_36(VAR_10,
        VAR_4,
        0, 1);
  FUNC_9(0);
  FUNC_21(0);
  FUNC_15(0);
  FUNC_17();
  FUNC_36(VAR_10,
        VAR_5,
        0, 1);
  FUNC_36(VAR_10,
        VAR_3,
        0, 1);
  FUNC_48(0);

  FUNC_13(0, 1);
  FUNC_24(0);
  FUNC_11();
  FUNC_25(0);
  FUNC_18(0, VAR_18);
  FUNC_23();
  FUNC_12(0);
  FUNC_10();
  FUNC_14(0);
  FUNC_20(0, VAR_18);
  FUNC_8(0);
  FUNC_46(0);
 }




 FUNC_34();
}
