
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_25__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_41__ {int anynullkeys; int nextkey; int pivotsearch; int keysz; int * scantid; int heapkeyspace; TYPE_1__* scankeys; } ;
struct TYPE_36__ {size_t itemIndex; TYPE_5__* items; int buf; } ;
struct TYPE_40__ {int numberOfKeys; scalar_t__ currTuples; TYPE_25__ currPos; TYPE_1__* keyData; int qual_ok; } ;
struct TYPE_39__ {scalar_t__ tupleOffset; int heapTid; } ;
struct TYPE_38__ {scalar_t__ xs_itup; scalar_t__ xs_want_itup; int xs_heaptid; int xs_snapshot; int * parallel_scan; int opaque; TYPE_3__* indexRelation; } ;
struct TYPE_37__ {scalar_t__* rd_opcintype; int * rd_opfamily; } ;
struct TYPE_35__ {int sk_attno; int sk_flags; int sk_strategy; scalar_t__ sk_subtype; scalar_t__ sk_collation; int sk_argument; } ;
typedef int StrategyNumber ;
typedef TYPE_1__ ScanKeyData ;
typedef TYPE_1__* ScanKey ;
typedef int ScanDirection ;
typedef TYPE_3__* Relation ;
typedef scalar_t__ RegProcedure ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_4__* IndexScanDesc ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef int BTStack ;
typedef TYPE_5__ BTScanPosItem ;
typedef TYPE_6__* BTScanOpaque ;
typedef TYPE_7__ BTScanInsertData ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;





 int VAR_0 ;
 int FUNC_1 (TYPE_25__) ;
 int FUNC_2 (TYPE_25__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,int,int,int,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (TYPE_1__*,int,int,int,scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_16 (TYPE_3__*,TYPE_7__*,int ) ;
 int FUNC_17 (TYPE_4__*,TYPE_25__*) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_6__*,int ) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_24 (TYPE_4__*,scalar_t__*) ;
 int FUNC_25 (TYPE_4__*) ;
 int FUNC_26 (TYPE_4__*,int ,int ) ;
 int FUNC_27 (TYPE_3__*,TYPE_7__*,int *,int ,int ) ;
 int FUNC_28 (TYPE_4__*,int ) ;
 int FUNC_29 (int ,char*,int,...) ;
 scalar_t__ FUNC_30 (int ,scalar_t__,scalar_t__,int ) ;
 int * FUNC_31 (TYPE_3__*,int,int ) ;
 int FUNC_32 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_33 (TYPE_3__*) ;

bool
FUNC_34(IndexScanDesc VAR_16, ScanDirection VAR_17)
{
 Relation VAR_18 = VAR_16->indexRelation;
 BTScanOpaque VAR_19 = (BTScanOpaque) VAR_16->opaque;
 Buffer VAR_20;
 BTStack VAR_21;
 OffsetNumber VAR_22;
 StrategyNumber VAR_23;
 bool VAR_24;
 bool VAR_25;
 BTScanInsertData VAR_26;
 ScanKey VAR_27[VAR_4];
 ScanKeyData VAR_28[VAR_4];
 int VAR_29 = 0;
 int VAR_30;
 bool VAR_31 = 1;
 StrategyNumber VAR_32;
 BTScanPosItem *VAR_33;
 BlockNumber VAR_34;

 FUNC_0(!FUNC_2(VAR_19->currPos));

 FUNC_33(VAR_18);





 FUNC_25(VAR_16);





 if (!VAR_19->qual_ok)
  return 0;







 if (VAR_16->parallel_scan != ((void*)0))
 {
  VAR_31 = FUNC_24(VAR_16, &VAR_34);
  if (!VAR_31)
   return 0;
  else if (VAR_34 == VAR_8)
  {
   FUNC_22(VAR_16);
   return 0;
  }
  else if (VAR_34 != VAR_5)
  {
   if (!FUNC_23(VAR_16, VAR_34, VAR_17))
    return 0;
   goto readcomplete;
  }
 }
 VAR_32 = 132;
 if (VAR_19->numberOfKeys > 0)
 {
  AttrNumber VAR_35;
  ScanKey VAR_36;
  ScanKey VAR_37;
  ScanKey VAR_38;






  VAR_35 = 1;
  VAR_36 = ((void*)0);

  VAR_37 = ((void*)0);






  for (VAR_38 = VAR_19->keyData, VAR_30 = 0;; VAR_38++, VAR_30++)
  {
   if (VAR_30 >= VAR_19->numberOfKeys || VAR_38->sk_attno != VAR_35)
   {




    if (VAR_36 == ((void*)0) && VAR_37 != ((void*)0) &&
     ((VAR_37->sk_flags & VAR_10) ?
      FUNC_13(VAR_17) :
      FUNC_12(VAR_17)))
    {

     VAR_36 = &VAR_28[VAR_29];
     FUNC_14(VAR_36,
             (VAR_15 | VAR_11 |
           (VAR_37->sk_flags &
            (VAR_9 | VAR_10))),
             VAR_35,
             ((VAR_37->sk_flags & VAR_10) ?
           130 :
           128),
             VAR_6,
             VAR_6,
             VAR_6,
             (Datum) 0);
    }





    if (VAR_36 == ((void*)0))
     break;
    VAR_27[VAR_29++] = VAR_36;





    VAR_23 = VAR_36->sk_strategy;
    if (VAR_23 != 132)
    {
     VAR_32 = VAR_23;
     if (VAR_23 == 130 ||
      VAR_23 == 128)
      break;
    }






    if (VAR_30 >= VAR_19->numberOfKeys ||
     VAR_38->sk_attno != VAR_35 + 1)
     break;




    VAR_35 = VAR_38->sk_attno;
    VAR_36 = ((void*)0);
    VAR_37 = ((void*)0);
   }
   switch (VAR_38->sk_strategy)
   {
    case 128:
    case 129:
     if (VAR_36 == ((void*)0))
     {
      if (FUNC_12(VAR_17))
       VAR_36 = VAR_38;
      else
       VAR_37 = VAR_38;
     }
     break;
    case 132:

     VAR_36 = VAR_38;
     break;
    case 131:
    case 130:
     if (VAR_36 == ((void*)0))
     {
      if (FUNC_13(VAR_17))
       VAR_36 = VAR_38;
      else
       VAR_37 = VAR_38;
     }
     break;
   }
  }
 }






 if (VAR_29 == 0)
 {
  bool VAR_39;

  VAR_39 = FUNC_18(VAR_16, VAR_17);

  if (!VAR_39)
  {

   FUNC_22(VAR_16);
  }

  return VAR_39;
 }
 FUNC_0(VAR_29 <= VAR_4);
 for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++)
 {
  ScanKey VAR_40 = VAR_27[VAR_30];

  FUNC_0(VAR_40->sk_attno == VAR_30 + 1);

  if (VAR_40->sk_flags & VAR_13)
  {
   ScanKey VAR_41 = (ScanKey) FUNC_5(VAR_40->sk_argument);

   FUNC_0(VAR_41->sk_flags & VAR_14);
   if (VAR_41->sk_flags & VAR_11)
   {
    FUNC_22(VAR_16);
    return 0;
   }
   FUNC_32(VAR_26.scankeys + VAR_30, VAR_41, sizeof(ScanKeyData));
   if (VAR_30 == VAR_29 - 1)
   {
    bool VAR_42 = 0;

    FUNC_0(!(VAR_41->sk_flags & VAR_12));
    for (;;)
    {
     VAR_41++;
     FUNC_0(VAR_41->sk_flags & VAR_14);
     if (VAR_41->sk_attno != VAR_29 + 1)
      break;
     if (VAR_41->sk_strategy != VAR_40->sk_strategy)
      break;
     if (VAR_41->sk_flags & VAR_11)
      break;
     FUNC_0(VAR_29 < VAR_4);
     FUNC_32(VAR_26.scankeys + VAR_29, VAR_41,
         sizeof(ScanKeyData));
     VAR_29++;
     if (VAR_41->sk_flags & VAR_12)
     {
      VAR_42 = 1;
      break;
     }
    }
    if (!VAR_42)
    {
     switch (VAR_32)
     {
      case 128:
       VAR_32 = 129;
       break;
      case 130:
       VAR_32 = 131;
       break;
     }
    }
    break;
   }
  }
  else
  {
   if (VAR_40->sk_subtype == VAR_18->rd_opcintype[VAR_30] ||
    VAR_40->sk_subtype == VAR_6)
   {
    FmgrInfo *VAR_43;

    VAR_43 = FUNC_31(VAR_18, VAR_40->sk_attno, VAR_0);
    FUNC_15(VAR_26.scankeys + VAR_30,
              VAR_40->sk_flags,
              VAR_40->sk_attno,
              VAR_7,
              VAR_40->sk_subtype,
              VAR_40->sk_collation,
              VAR_43,
              VAR_40->sk_argument);
   }
   else
   {
    RegProcedure VAR_44;

    VAR_44 = FUNC_30(VAR_18->rd_opfamily[VAR_30],
            VAR_18->rd_opcintype[VAR_30],
            VAR_40->sk_subtype,
            VAR_0);
    if (!FUNC_10(VAR_44))
     FUNC_29(VAR_3, "missing support function %d(%u,%u) for attribute %d of index \"%s\"",
       VAR_0, VAR_18->rd_opcintype[VAR_30], VAR_40->sk_subtype,
       VAR_40->sk_attno, FUNC_11(VAR_18));
    FUNC_14(VAR_26.scankeys + VAR_30,
            VAR_40->sk_flags,
            VAR_40->sk_attno,
            VAR_7,
            VAR_40->sk_subtype,
            VAR_40->sk_collation,
            VAR_44,
            VAR_40->sk_argument);
   }
  }
 }
 switch (VAR_32)
 {
  case 128:







   VAR_24 = 0;
   VAR_25 = 1;
   break;

  case 129:







   VAR_24 = 1;
   VAR_25 = 1;
   break;

  case 132:





   if (FUNC_12(VAR_17))
   {




    VAR_24 = 1;
    VAR_25 = 1;
   }
   else
   {




    VAR_24 = 0;
    VAR_25 = 0;
   }
   break;

  case 131:





   VAR_24 = 0;
   VAR_25 = 0;
   break;

  case 130:





   VAR_24 = 1;
   VAR_25 = 0;
   break;

  default:

   FUNC_29(VAR_3, "unrecognized strat_total: %d", (int) VAR_32);
   return 0;
 }


 VAR_26.heapkeyspace = FUNC_20(VAR_18);
 VAR_26.anynullkeys = 0;
 VAR_26.nextkey = VAR_24;
 VAR_26.pivotsearch = 0;
 VAR_26.scantid = ((void*)0);
 VAR_26.keysz = VAR_29;





 VAR_21 = FUNC_27(VAR_18, &VAR_26, &VAR_20, VAR_1, VAR_16->xs_snapshot);


 FUNC_19(VAR_21);

 if (!FUNC_4(VAR_20))
 {




  FUNC_9(VAR_18, VAR_16->xs_snapshot);





  FUNC_22(VAR_16);
  FUNC_1(VAR_19->currPos);

  return 0;
 }
 else
  FUNC_8(VAR_18, FUNC_3(VAR_20),
        VAR_16->xs_snapshot);

 FUNC_21(VAR_19, VAR_17);


 VAR_22 = FUNC_16(VAR_18, &VAR_26, VAR_20);
 if (VAR_25)
  VAR_22 = FUNC_7(VAR_22);


 FUNC_0(!FUNC_2(VAR_19->currPos));
 VAR_19->currPos.buf = VAR_20;




 if (!FUNC_26(VAR_16, VAR_17, VAR_22))
 {




  FUNC_6(VAR_19->currPos.buf, VAR_2);
  if (!FUNC_28(VAR_16, VAR_17))
   return 0;
 }
 else
 {

  FUNC_17(VAR_16, &VAR_19->currPos);
 }

readcomplete:

 VAR_33 = &VAR_19->currPos.items[VAR_19->currPos.itemIndex];
 VAR_16->xs_heaptid = VAR_33->heapTid;
 if (VAR_16->xs_want_itup)
  VAR_16->xs_itup = (IndexTuple) (VAR_19->currTuples + VAR_33->tupleOffset);

 return 1;
}
