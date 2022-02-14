
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;


struct TYPE_51__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef TYPE_3__ xl_heap_header ;
struct TYPE_52__ {int flags; scalar_t__ xmax; int offnum; int infobits_set; } ;
typedef TYPE_4__ xl_heap_delete ;
typedef int uint16 ;
typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_57__ {int t_len; TYPE_1__* t_data; } ;
struct TYPE_56__ {int t_self; TYPE_7__* t_data; int t_len; int t_tableOid; } ;
struct TYPE_55__ {int t_infomask; int t_infomask2; int t_ctid; } ;
struct TYPE_54__ {TYPE_2__* rd_rel; } ;
struct TYPE_53__ {int cmax; int xmax; int ctid; } ;
struct TYPE_50__ {scalar_t__ relreplident; scalar_t__ relkind; } ;
struct TYPE_49__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef scalar_t__ TM_Result ;
typedef TYPE_5__ TM_FailureData ;
typedef int Snapshot ;
typedef TYPE_6__* Relation ;
typedef int Page ;
typedef int MultiXactId ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef TYPE_7__* HeapTupleHeader ;
typedef TYPE_8__ HeapTupleData ;
typedef TYPE_9__* HeapTuple ;
typedef int CommandId ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_6__*,TYPE_8__*,int *) ;
 int FUNC_4 (TYPE_6__*,TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int,int ,int*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__* FUNC_7 (TYPE_6__*,TYPE_8__*,int,int*) ;
 scalar_t__ FUNC_8 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_7__*,int *,int*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_7__*) ;
 scalar_t__ FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*,int ,int) ;
 int FUNC_19 (TYPE_7__*) ;
 int FUNC_20 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_21 (TYPE_8__*,int ,scalar_t__) ;
 int FUNC_22 (TYPE_8__*,int ,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_31 (scalar_t__) ;
 int FUNC_32 () ;
 int FUNC_33 (int ,int ,int,TYPE_6__*,int *,int ,int *) ;
 int VAR_15 ;
 int FUNC_34 (int ) ;
 scalar_t__ FUNC_35 (int ,int ) ;
 int FUNC_36 (int ,int ) ;
 scalar_t__ FUNC_37 (int ) ;
 int FUNC_38 (int ,int ) ;
 int FUNC_39 (int ,scalar_t__) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_40 (TYPE_6__*,int ) ;
 int FUNC_41 (TYPE_6__*) ;
 scalar_t__ FUNC_42 (TYPE_6__*) ;
 scalar_t__ FUNC_43 (TYPE_6__*) ;
 int FUNC_44 (scalar_t__) ;
 int FUNC_45 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_46 (scalar_t__,scalar_t__) ;
 int FUNC_47 (scalar_t__) ;
 int FUNC_48 (scalar_t__) ;
 int FUNC_49 (TYPE_6__*,int *,int ) ;
 int FUNC_50 (TYPE_7__*,scalar_t__,scalar_t__) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_51 () ;
 int FUNC_52 (int ,int ) ;
 int FUNC_53 (int ,scalar_t__,int ) ;
 int FUNC_54 (char*,int) ;
 int FUNC_55 (int ) ;
 int FUNC_56 (scalar_t__,TYPE_6__*,int *,int ) ;
 int FUNC_57 (int,int) ;
 int FUNC_58 (scalar_t__,int,int,scalar_t__,int ,int,scalar_t__*,int*,int*) ;
 int FUNC_59 (int ,int ) ;
 int FUNC_60 (int ) ;
 int FUNC_61 (char*) ;
 int FUNC_62 (TYPE_6__*,int *,int ,int ,int*) ;
 int FUNC_63 (TYPE_9__*) ;
 int FUNC_64 (TYPE_6__*,TYPE_8__*,int) ;
 int FUNC_65 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_66 (TYPE_6__*) ;
 int FUNC_67 (TYPE_6__*,int ,scalar_t__,int ) ;
 int FUNC_68 (TYPE_6__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_69 (int,int) ;

TM_Result
FUNC_70(Relation VAR_38, ItemPointer VAR_39,
   CommandId VAR_40, Snapshot VAR_41, bool VAR_42,
   TM_FailureData *VAR_43, bool VAR_44)
{
 TM_Result VAR_45;
 TransactionId VAR_46 = FUNC_8();
 ItemId VAR_47;
 HeapTupleData VAR_48;
 Page VAR_49;
 BlockNumber VAR_50;
 Buffer VAR_51;
 Buffer VAR_52 = VAR_10;
 TransactionId VAR_53;
 uint16 VAR_54,
    VAR_55;
 bool VAR_56 = 0;
 bool VAR_57;
 bool VAR_58 = 0;
 HeapTuple VAR_59 = ((void*)0);
 bool VAR_60 = 0;

 FUNC_0(FUNC_29(VAR_39));






 if (FUNC_23())
  FUNC_59(VAR_4,
    (FUNC_60(VAR_2),
     FUNC_61("cannot delete tuples during a parallel operation")));

 VAR_50 = FUNC_27(VAR_39);
 VAR_51 = FUNC_40(VAR_38, VAR_50);
 VAR_49 = FUNC_2(VAR_51);







 if (FUNC_37(VAR_49))
  FUNC_68(VAR_38, VAR_50, &VAR_52);

 FUNC_30(VAR_51, VAR_0);







 if (VAR_52 == VAR_10 && FUNC_37(VAR_49))
 {
  FUNC_30(VAR_51, VAR_1);
  FUNC_68(VAR_38, VAR_50, &VAR_52);
  FUNC_30(VAR_51, VAR_0);
 }

 VAR_47 = FUNC_36(VAR_49, FUNC_28(VAR_39));
 FUNC_0(FUNC_25(VAR_47));

 VAR_48.t_tableOid = FUNC_41(VAR_38);
 VAR_48.t_data = (HeapTupleHeader) FUNC_35(VAR_49, VAR_47);
 VAR_48.t_len = FUNC_24(VAR_47);
 VAR_48.t_self = *VAR_39;

l1:
 VAR_45 = FUNC_21(&VAR_48, VAR_40, VAR_51);

 if (VAR_45 == VAR_26)
 {
  FUNC_48(VAR_51);
  FUNC_59(VAR_4,
    (FUNC_60(VAR_3),
     FUNC_61("attempted to delete invisible tuple")));
 }
 else if (VAR_45 == VAR_24 && VAR_42)
 {
  TransactionId VAR_61;
  uint16 VAR_62;


  VAR_61 = FUNC_14(VAR_48.t_data);
  VAR_62 = VAR_48.t_data->t_infomask;
  if (VAR_62 & VAR_9)
  {
   bool VAR_63 = 0;

   if (FUNC_5((MultiXactId) VAR_61, VAR_62,
          VAR_13, &VAR_63))
   {
    FUNC_30(VAR_51, VAR_1);





    if (!VAR_63)
     FUNC_62(VAR_38, &(VAR_48.t_self), VAR_13,
           VAR_14, &VAR_56);


    FUNC_33((MultiXactId) VAR_61, VAR_15, VAR_62,
        VAR_38, &(VAR_48.t_self), VAR_37,
        ((void*)0));
    FUNC_30(VAR_51, VAR_0);






    if (FUNC_69(VAR_48.t_data->t_infomask, VAR_62) ||
     !FUNC_46(FUNC_14(VAR_48.t_data),
           VAR_61))
     goto l1;
   }
  }
  else if (!FUNC_47(VAR_61))
  {




   FUNC_30(VAR_51, VAR_1);
   FUNC_62(VAR_38, &(VAR_48.t_self), VAR_13,
         VAR_14, &VAR_56);
   FUNC_56(VAR_61, VAR_38, &(VAR_48.t_self), VAR_37);
   FUNC_30(VAR_51, VAR_0);






   if (FUNC_69(VAR_48.t_data->t_infomask, VAR_62) ||
    !FUNC_46(FUNC_14(VAR_48.t_data),
          VAR_61))
    goto l1;


   FUNC_50(VAR_48.t_data, VAR_51, VAR_61);
  }





  if ((VAR_48.t_data->t_infomask & VAR_8) ||
   FUNC_9(VAR_48.t_data->t_infomask) ||
   FUNC_17(VAR_48.t_data))
   VAR_45 = VAR_27;
  else if (!FUNC_26(&VAR_48.t_self, &VAR_48.t_data->t_ctid) ||
     FUNC_16(VAR_48.t_data))
   VAR_45 = VAR_29;
  else
   VAR_45 = VAR_25;
 }

 if (VAR_41 != VAR_12 && VAR_45 == VAR_27)
 {

  if (!FUNC_22(&VAR_48, VAR_41, VAR_51))
   VAR_45 = VAR_29;
 }

 if (VAR_45 != VAR_27)
 {
  FUNC_0(VAR_45 == VAR_28 ||
      VAR_45 == VAR_29 ||
      VAR_45 == VAR_25 ||
      VAR_45 == VAR_24);
  FUNC_0(!(VAR_48.t_data->t_infomask & VAR_8));
  FUNC_0(VAR_45 != VAR_29 ||
      !FUNC_26(&VAR_48.t_self, &VAR_48.t_data->t_ctid));
  VAR_43->ctid = VAR_48.t_data->t_ctid;
  VAR_43->xmax = FUNC_15(VAR_48.t_data);
  if (VAR_45 == VAR_28)
   VAR_43->cmax = FUNC_13(VAR_48.t_data);
  else
   VAR_43->cmax = VAR_11;
  FUNC_48(VAR_51);
  if (VAR_56)
   FUNC_49(VAR_38, &(VAR_48.t_self), VAR_13);
  if (VAR_52 != VAR_10)
   FUNC_44(VAR_52);
  return VAR_45;
 }
 FUNC_4(VAR_38, &VAR_48, VAR_51);


 FUNC_11(VAR_48.t_data, &VAR_40, &VAR_57);





 VAR_59 = FUNC_7(VAR_38, &VAR_48, 1, &VAR_60);
 FUNC_32();

 FUNC_58(FUNC_14(VAR_48.t_data),
         VAR_48.t_data->t_infomask, VAR_48.t_data->t_infomask2,
         VAR_46, VAR_13, 1,
         &VAR_53, &VAR_54, &VAR_55);

 FUNC_45();
 FUNC_39(VAR_49, VAR_46);

 if (FUNC_37(VAR_49))
 {
  VAR_58 = 1;
  FUNC_34(VAR_49);
  FUNC_67(VAR_38, FUNC_1(VAR_51),
       VAR_52, VAR_30);
 }


 VAR_48.t_data->t_infomask &= ~(VAR_7 | VAR_6);
 VAR_48.t_data->t_infomask2 &= ~VAR_5;
 VAR_48.t_data->t_infomask |= VAR_54;
 VAR_48.t_data->t_infomask2 |= VAR_55;
 FUNC_12(VAR_48.t_data);
 FUNC_20(VAR_48.t_data, VAR_53);
 FUNC_18(VAR_48.t_data, VAR_40, VAR_57);

 VAR_48.t_data->t_ctid = VAR_48.t_self;


 if (VAR_44)
  FUNC_19(VAR_48.t_data);

 FUNC_31(VAR_51);







 if (FUNC_43(VAR_38))
 {
  xl_heap_delete VAR_64;
  xl_heap_header VAR_65;
  XLogRecPtr VAR_66;


  if (FUNC_42(VAR_38))
   FUNC_65(VAR_38, &VAR_48);

  VAR_64.flags = 0;
  if (VAR_58)
   VAR_64.flags |= VAR_31;
  if (VAR_44)
   VAR_64.flags |= VAR_34;
  VAR_64.infobits_set = FUNC_57(VAR_48.t_data->t_infomask,
             VAR_48.t_data->t_infomask2);
  VAR_64.offnum = FUNC_28(&VAR_48.t_self);
  VAR_64.xmax = VAR_53;

  if (VAR_59 != ((void*)0))
  {
   if (VAR_38->rd_rel->relreplident == VAR_19)
    VAR_64.flags |= VAR_33;
   else
    VAR_64.flags |= VAR_32;
  }

  FUNC_51();
  FUNC_54((char *) &VAR_64, VAR_21);

  FUNC_53(0, VAR_51, VAR_16);




  if (VAR_59 != ((void*)0))
  {
   VAR_65.t_infomask2 = VAR_59->t_data->t_infomask2;
   VAR_65.t_infomask = VAR_59->t_data->t_infomask;
   VAR_65.t_hoff = VAR_59->t_data->t_hoff;

   FUNC_54((char *) &VAR_65, VAR_22);
   FUNC_54((char *) VAR_59->t_data
        + VAR_23,
        VAR_59->t_len
        - VAR_23);
  }


  FUNC_55(VAR_36);

  VAR_66 = FUNC_52(VAR_20, VAR_35);

  FUNC_38(VAR_49, VAR_66);
 }

 FUNC_6();

 FUNC_30(VAR_51, VAR_1);

 if (VAR_52 != VAR_10)
  FUNC_44(VAR_52);







 if (VAR_38->rd_rel->relkind != VAR_18 &&
  VAR_38->rd_rel->relkind != VAR_17)
 {

  FUNC_0(!FUNC_10(&VAR_48));
 }
 else if (FUNC_10(&VAR_48))
  FUNC_64(VAR_38, &VAR_48, 0);






 FUNC_3(VAR_38, &VAR_48, ((void*)0));


 FUNC_44(VAR_51);




 if (VAR_56)
  FUNC_49(VAR_38, &(VAR_48.t_self), VAR_13);

 FUNC_66(VAR_38);

 if (VAR_59 != ((void*)0) && VAR_60)
  FUNC_63(VAR_59);

 return VAR_27;
}
