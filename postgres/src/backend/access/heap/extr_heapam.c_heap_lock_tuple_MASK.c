
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int flags; int infobits_set; scalar_t__ locking_xid; int offnum; } ;
typedef TYPE_1__ xl_heap_lock ;
typedef int uint16 ;
typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_24__ {TYPE_4__* t_data; int t_self; int t_tableOid; int t_len; } ;
struct TYPE_23__ {int t_infomask; int t_infomask2; int t_ctid; } ;
struct TYPE_22__ {int status; scalar_t__ xid; } ;
struct TYPE_21__ {int cmax; int xmax; int ctid; } ;
typedef scalar_t__ TM_Result ;
typedef TYPE_2__ TM_FailureData ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ MultiXactStatus ;
typedef TYPE_3__ MultiXactMember ;
typedef int MultiXactId ;
typedef int LockWaitPolicy ;
typedef int const LockTupleMode ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef TYPE_4__* HeapTupleHeader ;
typedef TYPE_5__* HeapTuple ;
typedef int CommandId ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,int const,int *) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,TYPE_3__**,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_7 ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_20 (TYPE_5__*,int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (scalar_t__,int ) ;







 int FUNC_28 (scalar_t__) ;
 int FUNC_29 () ;
 int FUNC_30 (int ,scalar_t__,int,int ,int *,int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 scalar_t__ FUNC_33 (int ) ;
 int FUNC_34 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_35 (int ,int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 scalar_t__ FUNC_38 (int ) ;
 int FUNC_39 (scalar_t__) ;
 int FUNC_40 () ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int const FUNC_41 (int ) ;
 int FUNC_42 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_43 (scalar_t__) ;
 int FUNC_44 (int ,int *,int const) ;
 int FUNC_45 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_46 () ;
 int FUNC_47 (int ,int ) ;
 int FUNC_48 (int ,scalar_t__,int ) ;
 int FUNC_49 (char*,int ) ;
 int FUNC_50 (scalar_t__,int ,int *,int ) ;
 int FUNC_51 (int,int) ;
 int FUNC_52 (scalar_t__,int,int,int ,int const,int,scalar_t__*,int*,int*) ;
 int FUNC_53 (int ,char*) ;
 int FUNC_54 (int ,int ) ;
 int FUNC_55 (int ) ;
 int FUNC_56 (char*,int ) ;
 scalar_t__ FUNC_57 (int const,int) ;
 int FUNC_58 (int ,int *,int const,int ,int*) ;
 scalar_t__ FUNC_59 (int ,TYPE_5__*,int *,int ,int const) ;
 int FUNC_60 (TYPE_3__*) ;
 scalar_t__ FUNC_61 (int ,int ,scalar_t__,int ) ;
 int FUNC_62 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_63 (int,int) ;

TM_Result
FUNC_64(Relation VAR_25, HeapTuple VAR_26,
    CommandId VAR_27, LockTupleMode VAR_28, LockWaitPolicy VAR_29,
    bool VAR_30,
    Buffer *VAR_31, TM_FailureData *VAR_32)
{
 TM_Result VAR_33;
 ItemPointer VAR_34 = &(VAR_26->t_self);
 ItemId VAR_35;
 Page VAR_36;
 Buffer VAR_37 = VAR_8;
 BlockNumber VAR_38;
 TransactionId VAR_39,
    VAR_40;
 uint16 VAR_41,
    VAR_42,
    VAR_43;
 bool VAR_44 = 1;
 bool VAR_45 = 0;
 bool VAR_46 = 0;
 bool VAR_47 = 0;

 *VAR_31 = FUNC_35(VAR_25, FUNC_25(VAR_34));
 VAR_38 = FUNC_25(VAR_34);







 if (FUNC_33(FUNC_1(*VAR_31)))
  FUNC_62(VAR_25, VAR_38, &VAR_37);

 FUNC_27(*VAR_31, VAR_0);

 VAR_36 = FUNC_1(*VAR_31);
 VAR_35 = FUNC_32(VAR_36, FUNC_26(VAR_34));
 FUNC_0(FUNC_22(VAR_35));

 VAR_26->t_data = (HeapTupleHeader) FUNC_31(VAR_36, VAR_35);
 VAR_26->t_len = FUNC_21(VAR_35);
 VAR_26->t_tableOid = FUNC_37(VAR_25);

l3:
 VAR_33 = FUNC_20(VAR_26, VAR_27, *VAR_31);

 if (VAR_33 == VAR_16)
 {






  VAR_33 = VAR_16;
  goto out_locked;
 }
 else if (VAR_33 == VAR_14 ||
    VAR_33 == VAR_19 ||
    VAR_33 == VAR_15)
 {
  TransactionId VAR_48;
  uint16 VAR_49;
  uint16 VAR_50;
  bool VAR_51;
  ItemPointerData VAR_52;


  VAR_48 = FUNC_15(VAR_26->t_data);
  VAR_49 = VAR_26->t_data->t_infomask;
  VAR_50 = VAR_26->t_data->t_infomask2;
  FUNC_23(&VAR_26->t_data->t_ctid, &VAR_52);

  FUNC_27(*VAR_31, VAR_1);
  if (VAR_44)
  {
   VAR_44 = 0;

   if (VAR_49 & VAR_7)
   {
    int VAR_53;
    int VAR_54;
    MultiXactMember *VAR_55;






    VAR_54 =
     FUNC_8(VAR_48, &VAR_55, 0,
            FUNC_11(VAR_49));

    for (VAR_53 = 0; VAR_53 < VAR_54; VAR_53++)
    {

     if (!FUNC_43(VAR_55[VAR_53].xid))
      continue;

     if (FUNC_41(VAR_55[VAR_53].status) >= VAR_28)
     {
      FUNC_60(VAR_55);
      VAR_33 = VAR_17;
      goto out_unlocked;
     }
     else
     {
      VAR_45 = 1;
     }
    }

    if (VAR_55)
     FUNC_60(VAR_55);
   }
   else if (FUNC_43(VAR_48))
   {
    switch (VAR_28)
    {
     case 133:
      FUNC_0(FUNC_10(VAR_49) ||
          FUNC_12(VAR_49) ||
          FUNC_9(VAR_49));
      VAR_33 = VAR_17;
      goto out_unlocked;
     case 131:
      if (FUNC_12(VAR_49) ||
       FUNC_9(VAR_49))
      {
       VAR_33 = VAR_17;
       goto out_unlocked;
      }
      break;
     case 132:
      if (FUNC_9(VAR_49))
      {
       VAR_33 = VAR_17;
       goto out_unlocked;
      }
      break;
     case 134:
      if (FUNC_9(VAR_49) &&
       VAR_50 & VAR_4)
      {
       VAR_33 = VAR_17;
       goto out_unlocked;
      }
      break;
    }
   }
  }






  VAR_51 = 1;
  if (VAR_28 == 133)
  {
   if (!(VAR_50 & VAR_4))
   {
    bool VAR_56;

    VAR_56 = !FUNC_11(VAR_49);





    if (VAR_30 && VAR_56)
    {
     TM_Result VAR_57;

     VAR_57 = FUNC_59(VAR_25, VAR_26, &VAR_52,
              FUNC_7(),
              VAR_28);
     if (VAR_57 != VAR_17)
     {
      VAR_33 = VAR_57;

      FUNC_27(*VAR_31, VAR_0);
      goto failed;
     }
    }

    FUNC_27(*VAR_31, VAR_0);
    if (!FUNC_18(VAR_26->t_data) &&
     ((VAR_26->t_data->t_infomask2 & VAR_4) ||
      !VAR_56))
     goto l3;


    VAR_51 = 0;
   }
  }
  else if (VAR_28 == 131)
  {




   if (FUNC_11(VAR_49) &&
    !FUNC_9(VAR_49))
   {
    FUNC_27(*VAR_31, VAR_0);





    if (!FUNC_11(VAR_26->t_data->t_infomask) ||
     FUNC_9(VAR_26->t_data->t_infomask))
     goto l3;
    VAR_51 = 0;
   }
  }
  else if (VAR_28 == 132)
  {





   if (VAR_49 & VAR_7)
   {
    if (!FUNC_5((MultiXactId) VAR_48, VAR_49,
            VAR_28, ((void*)0)))
    {




     FUNC_27(*VAR_31, VAR_0);
     if (FUNC_63(VAR_26->t_data->t_infomask, VAR_49) ||
      !FUNC_42(FUNC_15(VAR_26->t_data),
            VAR_48))
      goto l3;


     VAR_51 = 0;
    }
   }
   else if (FUNC_10(VAR_49))
   {
    FUNC_27(*VAR_31, VAR_0);


    if (FUNC_63(VAR_26->t_data->t_infomask, VAR_49) ||
     !FUNC_42(
           FUNC_15(VAR_26->t_data),
           VAR_48))
     goto l3;

    VAR_51 = 0;
   }
  }
  if (VAR_51 && !(VAR_49 & VAR_7) &&
   FUNC_43(VAR_48))
  {

   FUNC_27(*VAR_31, VAR_0);
   if (FUNC_63(VAR_26->t_data->t_infomask, VAR_49) ||
    !FUNC_42(FUNC_15(VAR_26->t_data),
          VAR_48))
    goto l3;
   FUNC_0(FUNC_11(VAR_26->t_data->t_infomask));
   VAR_51 = 0;
  }
  if (VAR_51 && (VAR_33 == VAR_19 || VAR_33 == VAR_15))
  {
   FUNC_27(*VAR_31, VAR_0);
   goto failed;
  }
  else if (VAR_51)
  {
   if (!VAR_45 &&
    !FUNC_58(VAR_25, VAR_34, VAR_28, VAR_29,
           &VAR_46))
   {




    VAR_33 = VAR_20;

    FUNC_27(*VAR_31, VAR_0);
    goto failed;
   }

   if (VAR_49 & VAR_7)
   {
    MultiXactStatus VAR_58 = FUNC_57(VAR_28, 0);


    if (VAR_58 >= VAR_10)
     FUNC_53(VAR_3, "invalid lock mode in heap_lock_tuple");


    switch (VAR_29)
    {
     case 130:
      FUNC_30((MultiXactId) VAR_48, VAR_58, VAR_49,
          VAR_25, &VAR_26->t_self, VAR_24, ((void*)0));
      break;
     case 128:
      if (!FUNC_3((MultiXactId) VAR_48,
              VAR_58, VAR_49, VAR_25,
              ((void*)0)))
      {
       VAR_33 = VAR_20;

       FUNC_27(*VAR_31, VAR_0);
       goto failed;
      }
      break;
     case 129:
      if (!FUNC_3((MultiXactId) VAR_48,
              VAR_58, VAR_49, VAR_25,
              ((void*)0)))
       FUNC_54(VAR_3,
         (FUNC_55(VAR_2),
          FUNC_56("could not obtain lock on row in relation \"%s\"",
           FUNC_36(VAR_25))));

      break;
    }
   }
   else
   {

    switch (VAR_29)
    {
     case 130:
      FUNC_50(VAR_48, VAR_25, &VAR_26->t_self,
            VAR_24);
      break;
     case 128:
      if (!FUNC_4(VAR_48))
      {
       VAR_33 = VAR_20;

       FUNC_27(*VAR_31, VAR_0);
       goto failed;
      }
      break;
     case 129:
      if (!FUNC_4(VAR_48))
       FUNC_54(VAR_3,
         (FUNC_55(VAR_2),
          FUNC_56("could not obtain lock on row in relation \"%s\"",
           FUNC_36(VAR_25))));
      break;
    }
   }


   if (VAR_30 && !FUNC_11(VAR_49))
   {
    TM_Result VAR_59;

    VAR_59 = FUNC_59(VAR_25, VAR_26, &VAR_52,
             FUNC_7(),
             VAR_28);
    if (VAR_59 != VAR_17)
    {
     VAR_33 = VAR_59;

     FUNC_27(*VAR_31, VAR_0);
     goto failed;
    }
   }

   FUNC_27(*VAR_31, VAR_0);






   if (FUNC_63(VAR_26->t_data->t_infomask, VAR_49) ||
    !FUNC_42(FUNC_15(VAR_26->t_data),
          VAR_48))
    goto l3;

   if (!(VAR_49 & VAR_7))
   {
    FUNC_45(VAR_26->t_data, *VAR_31, VAR_48);
   }
  }
  if (!VAR_51 ||
   (VAR_26->t_data->t_infomask & VAR_6) ||
   FUNC_11(VAR_26->t_data->t_infomask) ||
   FUNC_18(VAR_26->t_data))
   VAR_33 = VAR_17;
  else if (!FUNC_24(&VAR_26->t_self, &VAR_26->t_data->t_ctid) ||
     FUNC_17(VAR_26->t_data))
   VAR_33 = VAR_19;
  else
   VAR_33 = VAR_15;
 }

failed:
 if (VAR_33 != VAR_17)
 {
  FUNC_0(VAR_33 == VAR_18 || VAR_33 == VAR_19 ||
      VAR_33 == VAR_15 || VAR_33 == VAR_20);
  FUNC_0(!(VAR_26->t_data->t_infomask & VAR_6));
  FUNC_0(VAR_33 != VAR_19 ||
      !FUNC_24(&VAR_26->t_self, &VAR_26->t_data->t_ctid));
  VAR_32->ctid = VAR_26->t_data->t_ctid;
  VAR_32->xmax = FUNC_16(VAR_26->t_data);
  if (VAR_33 == VAR_18)
   VAR_32->cmax = FUNC_14(VAR_26->t_data);
  else
   VAR_32->cmax = VAR_9;
  goto out_locked;
 }
 if (VAR_37 == VAR_8 && FUNC_33(VAR_36))
 {
  FUNC_27(*VAR_31, VAR_1);
  FUNC_62(VAR_25, VAR_38, &VAR_37);
  FUNC_27(*VAR_31, VAR_0);
  goto l3;
 }

 VAR_40 = FUNC_15(VAR_26->t_data);
 VAR_41 = VAR_26->t_data->t_infomask;
 FUNC_29();






 FUNC_52(VAR_40, VAR_41, VAR_26->t_data->t_infomask2,
         FUNC_7(), VAR_28, 0,
         &VAR_39, &VAR_42, &VAR_43);

 FUNC_40();
 VAR_26->t_data->t_infomask &= ~VAR_5;
 VAR_26->t_data->t_infomask2 &= ~VAR_4;
 VAR_26->t_data->t_infomask |= VAR_42;
 VAR_26->t_data->t_infomask2 |= VAR_43;
 if (FUNC_11(VAR_42))
  FUNC_13(VAR_26->t_data);
 FUNC_19(VAR_26->t_data, VAR_39);
 if (FUNC_11(VAR_42))
  VAR_26->t_data->t_ctid = *VAR_34;


 if (FUNC_33(VAR_36) &&
  FUNC_61(VAR_25, VAR_38, VAR_37,
       VAR_21))
  VAR_47 = 1;


 FUNC_28(*VAR_31);
 if (FUNC_38(VAR_25))
 {
  xl_heap_lock VAR_60;
  XLogRecPtr VAR_61;

  FUNC_46();
  FUNC_48(0, *VAR_31, VAR_11);

  VAR_60.offnum = FUNC_26(&VAR_26->t_self);
  VAR_60.locking_xid = VAR_39;
  VAR_60.infobits_set = FUNC_51(VAR_42,
             VAR_26->t_data->t_infomask2);
  VAR_60.flags = VAR_47 ? VAR_22 : 0;
  FUNC_49((char *) &VAR_60, VAR_13);



  VAR_61 = FUNC_47(VAR_12, VAR_23);

  FUNC_34(VAR_36, VAR_61);
 }

 FUNC_6();

 VAR_33 = VAR_17;

out_locked:
 FUNC_27(*VAR_31, VAR_1);

out_unlocked:
 if (FUNC_2(VAR_37))
  FUNC_39(VAR_37);
 if (VAR_46)
  FUNC_44(VAR_25, VAR_34, VAR_28);

 return VAR_33;
}
