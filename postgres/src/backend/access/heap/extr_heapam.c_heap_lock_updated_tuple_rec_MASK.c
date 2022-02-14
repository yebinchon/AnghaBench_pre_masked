
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int flags; int infobits_set; int xmax; int offnum; } ;
typedef TYPE_1__ xl_heap_lock_updated ;
typedef int uint16 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_17__ {int t_infomask; int t_infomask2; int t_ctid; } ;
struct TYPE_16__ {TYPE_7__* t_data; int t_self; } ;
struct TYPE_15__ {int xid; int status; } ;
typedef scalar_t__ TM_Result ;
typedef int Relation ;
typedef int Page ;
typedef int MultiXactStatus ;
typedef TYPE_2__ MultiXactMember ;
typedef int LockTupleMode ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_3__ HeapTupleData ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_2__**,int,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__,int ) ;
 int FUNC_21 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 () ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_31 () ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,scalar_t__,int ) ;
 int FUNC_34 (char*,int ) ;
 int FUNC_35 (int ,int ,int *,int ) ;
 int FUNC_36 (int,int) ;
 int FUNC_37 (int ,int,int,int ,int ,int,int *,int*,int*) ;
 int FUNC_38 (int ,char*) ;
 int FUNC_39 (int ,int ,TYPE_3__*,scalar_t__*) ;
 int FUNC_40 (TYPE_2__*) ;
 scalar_t__ FUNC_41 (int ,int ,int ,TYPE_3__*,int*) ;
 scalar_t__ FUNC_42 (int ,int ,scalar_t__,int ) ;
 int FUNC_43 (int ,int ,scalar_t__*) ;

__attribute__((used)) static TM_Result
FUNC_44(Relation VAR_25, ItemPointer VAR_26, TransactionId VAR_27,
       LockTupleMode VAR_28)
{
 TM_Result VAR_29;
 ItemPointerData VAR_30;
 HeapTupleData VAR_31;
 Buffer VAR_32;
 uint16 VAR_33,
    VAR_34,
    VAR_35,
    VAR_36;
 TransactionId VAR_37,
    VAR_38;
 TransactionId VAR_39 = VAR_8;
 bool VAR_40 = 0;
 bool VAR_41;
 Buffer VAR_42 = VAR_7;
 BlockNumber VAR_43;

 FUNC_16(VAR_26, &VAR_30);

 for (;;)
 {
  VAR_33 = 0;
  VAR_38 = VAR_8;
  VAR_43 = FUNC_18(&VAR_30);
  FUNC_16(&VAR_30, &(VAR_31.t_self));

  if (!FUNC_39(VAR_25, VAR_18, &VAR_31, &VAR_32))
  {







   VAR_29 = VAR_19;
   goto out_unlocked;
  }

l4:
  FUNC_2();







  if (FUNC_22(FUNC_1(VAR_32)))
  {
   FUNC_43(VAR_25, VAR_43, &VAR_42);
   VAR_41 = 1;
  }
  else
   VAR_41 = 0;

  FUNC_20(VAR_32, VAR_0);
  if (!VAR_41 && FUNC_22(FUNC_1(VAR_32)))
  {
   FUNC_20(VAR_32, VAR_1);
   FUNC_43(VAR_25, VAR_43, &VAR_42);
   FUNC_20(VAR_32, VAR_0);
  }





  if (FUNC_29(VAR_39) &&
   !FUNC_28(FUNC_12(VAR_31.t_data),
         VAR_39))
  {
   VAR_29 = VAR_19;
   goto out_locked;
  }






  if (FUNC_27(FUNC_12(VAR_31.t_data)))
  {
   VAR_29 = VAR_19;
   goto out_locked;
  }

  VAR_35 = VAR_31.t_data->t_infomask;
  VAR_36 = VAR_31.t_data->t_infomask2;
  VAR_37 = FUNC_10(VAR_31.t_data);







  if (!(VAR_35 & VAR_5))
  {
   TransactionId VAR_44;
   bool VAR_45;

   VAR_44 = FUNC_10(VAR_31.t_data);
   if (VAR_35 & VAR_6)
   {
    int VAR_46;
    int VAR_47;
    MultiXactMember *VAR_48;
    FUNC_0(!FUNC_5(VAR_31.t_data->t_infomask));

    VAR_46 = FUNC_4(VAR_44, &VAR_48, 0,
             FUNC_8(VAR_35));
    for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
    {
     VAR_29 = FUNC_41(VAR_48[VAR_47].status,
              VAR_48[VAR_47].xid,
              VAR_28,
              &VAR_31,
              &VAR_45);
     if (VAR_29 == VAR_20)
     {
      FUNC_40(VAR_48);
      goto next;
     }

     if (VAR_45)
     {
      FUNC_20(VAR_32, VAR_1);
      FUNC_35(VAR_48[VAR_47].xid, VAR_25,
            &VAR_31.t_self,
            VAR_24);
      FUNC_40(VAR_48);
      goto l4;
     }
     if (VAR_29 != VAR_19)
     {
      FUNC_40(VAR_48);
      goto out_locked;
     }
    }
    if (VAR_48)
     FUNC_40(VAR_48);
   }
   else
   {
    MultiXactStatus VAR_49;





    if (FUNC_8(VAR_35))
    {
     if (FUNC_7(VAR_35))
      VAR_49 = VAR_9;
     else if (FUNC_9(VAR_35))
      VAR_49 = VAR_11;
     else if (FUNC_6(VAR_35))
     {
      if (VAR_36 & VAR_3)
       VAR_49 = VAR_12;
      else
       VAR_49 = VAR_10;
     }
     else
     {





      FUNC_38(VAR_2, "invalid lock status in tuple");
     }
    }
    else
    {

     if (VAR_36 & VAR_3)
      VAR_49 = VAR_14;
     else
      VAR_49 = VAR_13;
    }

    VAR_29 = FUNC_41(VAR_49, VAR_44, VAR_28,
             &VAR_31, &VAR_45);
    if (VAR_29 == VAR_20)
     goto next;

    if (VAR_45)
    {
     FUNC_20(VAR_32, VAR_1);
     FUNC_35(VAR_44, VAR_25, &VAR_31.t_self,
           VAR_24);
     goto l4;
    }
    if (VAR_29 != VAR_19)
    {
     goto out_locked;
    }
   }
  }


  FUNC_37(VAR_37, VAR_35, VAR_31.t_data->t_infomask2,
          VAR_27, VAR_28, 0,
          &VAR_38, &VAR_33, &VAR_34);

  if (FUNC_22(FUNC_1(VAR_32)) &&
   FUNC_42(VAR_25, VAR_43, VAR_42,
        VAR_21))
   VAR_40 = 1;

  FUNC_26();


  FUNC_15(VAR_31.t_data, VAR_38);
  VAR_31.t_data->t_infomask &= ~VAR_4;
  VAR_31.t_data->t_infomask2 &= ~VAR_3;
  VAR_31.t_data->t_infomask |= VAR_33;
  VAR_31.t_data->t_infomask2 |= VAR_34;

  FUNC_21(VAR_32);


  if (FUNC_24(VAR_25))
  {
   xl_heap_lock_updated VAR_50;
   XLogRecPtr VAR_51;
   Page VAR_52 = FUNC_1(VAR_32);

   FUNC_31();
   FUNC_33(0, VAR_32, VAR_15);

   VAR_50.offnum = FUNC_19(&VAR_31.t_self);
   VAR_50.xmax = VAR_38;
   VAR_50.infobits_set = FUNC_36(VAR_33, VAR_34);
   VAR_50.flags =
    VAR_40 ? VAR_22 : 0;

   FUNC_34((char *) &VAR_50, VAR_17);

   VAR_51 = FUNC_32(VAR_16, VAR_23);

   FUNC_23(VAR_52, VAR_51);
  }

  FUNC_3();

next:

  if (VAR_31.t_data->t_infomask & VAR_5 ||
   FUNC_13(VAR_31.t_data) ||
   FUNC_17(&VAR_31.t_self, &VAR_31.t_data->t_ctid) ||
   FUNC_14(VAR_31.t_data))
  {
   VAR_29 = VAR_19;
   goto out_locked;
  }


  VAR_39 = FUNC_11(VAR_31.t_data);
  FUNC_16(&(VAR_31.t_data->t_ctid), &VAR_30);
  FUNC_30(VAR_32);
 }

 VAR_29 = VAR_19;

out_locked:
 FUNC_30(VAR_32);

out_unlocked:
 if (VAR_42 != VAR_7)
  FUNC_25(VAR_42);

 return VAR_29;
}
