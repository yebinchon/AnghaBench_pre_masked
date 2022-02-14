
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int flags; scalar_t__ offnum; } ;
typedef TYPE_2__ xl_heap_insert ;
struct TYPE_14__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef TYPE_3__ xl_heap_header ;
typedef int uint8 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_15__ {int t_len; int t_self; TYPE_1__* t_data; } ;
struct TYPE_12__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_4__* HeapTuple ;
typedef int CommandId ;
typedef int BulkInsertState ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_4__*,int *) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (int ,int,scalar_t__,int,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__,TYPE_4__*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_21 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,char*,int) ;
 int FUNC_25 (int ,scalar_t__,int) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (TYPE_4__*) ;
 TYPE_4__* FUNC_29 (int ,TYPE_4__*,int ,int ,int) ;
 int FUNC_30 (int ,TYPE_4__*) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (int ,scalar_t__,scalar_t__,int ) ;

void
FUNC_33(Relation VAR_19, HeapTuple VAR_20, CommandId VAR_21,
   int VAR_22, BulkInsertState VAR_23)
{
 TransactionId VAR_24 = FUNC_6();
 HeapTuple VAR_25;
 Buffer VAR_26;
 Buffer VAR_27 = VAR_4;
 bool VAR_28 = 0;







 VAR_25 = FUNC_29(VAR_19, VAR_20, VAR_24, VAR_21, VAR_22);





 VAR_26 = FUNC_14(VAR_19, VAR_25->t_len,
            VAR_4, VAR_22, VAR_23,
            &VAR_27, ((void*)0));
 FUNC_4(VAR_19, ((void*)0), VAR_4);


 FUNC_20();

 FUNC_18(VAR_19, VAR_26, VAR_25,
       (VAR_22 & VAR_3) != 0);

 if (FUNC_12(FUNC_2(VAR_26)))
 {
  VAR_28 = 1;
  FUNC_10(FUNC_2(VAR_26));
  FUNC_32(VAR_19,
       FUNC_7(&(VAR_25->t_self)),
       VAR_27, VAR_12);
 }
 FUNC_9(VAR_26);


 if (!(VAR_22 & VAR_2) && FUNC_17(VAR_19))
 {
  xl_heap_insert VAR_29;
  xl_heap_header VAR_30;
  XLogRecPtr VAR_31;
  Page VAR_32 = FUNC_2(VAR_26);
  uint8 VAR_33 = VAR_17;
  int VAR_34 = 0;





  if (FUNC_15(VAR_19))
   FUNC_30(VAR_19, VAR_25);






  if (FUNC_8(&(VAR_25->t_self)) == VAR_0 &&
   FUNC_11(VAR_32) == VAR_0)
  {
   VAR_33 |= VAR_16;
   VAR_34 |= VAR_7;
  }

  VAR_29.offnum = FUNC_8(&VAR_25->t_self);
  VAR_29.flags = 0;
  if (VAR_28)
   VAR_29.flags |= VAR_13;
  if (VAR_22 & VAR_3)
   VAR_29.flags |= VAR_15;
  FUNC_0(FUNC_7(&VAR_25->t_self) == FUNC_1(VAR_26));






  if (FUNC_16(VAR_19) &&
   !(VAR_22 & VAR_1))
  {
   VAR_29.flags |= VAR_14;
   VAR_34 |= VAR_5;
  }

  FUNC_22();
  FUNC_26((char *) &VAR_29, VAR_10);

  VAR_30.t_infomask2 = VAR_25->t_data->t_infomask2;
  VAR_30.t_infomask = VAR_25->t_data->t_infomask;
  VAR_30.t_hoff = VAR_25->t_data->t_hoff;






  FUNC_25(0, VAR_26, VAR_6 | VAR_34);
  FUNC_24(0, (char *) &VAR_30, VAR_9);

  FUNC_24(0,
       (char *) VAR_25->t_data + VAR_11,
       VAR_25->t_len - VAR_11);


  FUNC_27(VAR_18);

  VAR_31 = FUNC_23(VAR_8, VAR_33);

  FUNC_13(VAR_32, VAR_31);
 }

 FUNC_5();

 FUNC_21(VAR_26);
 if (VAR_27 != VAR_4)
  FUNC_19(VAR_27);







 FUNC_3(VAR_19, VAR_25, ((void*)0));


 FUNC_31(VAR_19, 1);





 if (VAR_25 != VAR_20)
 {
  VAR_20->t_self = VAR_25->t_self;
  FUNC_28(VAR_25);
 }
}
