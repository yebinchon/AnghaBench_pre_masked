
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_25__ {int t_data; } ;
struct TYPE_21__ {scalar_t__ lastCommitBeforeSnapshot; scalar_t__ earliestOutConflictCommit; } ;
struct TYPE_24__ {TYPE_1__ SeqNo; int flags; int topXid; int inConflicts; } ;
struct TYPE_23__ {TYPE_4__* myXact; } ;
struct TYPE_22__ {int xid; } ;
typedef int Snapshot ;
typedef scalar_t__ SerCommitSeqNo ;
typedef TYPE_2__ SERIALIZABLEXIDTAG ;
typedef TYPE_3__ SERIALIZABLEXID ;
typedef TYPE_4__ SERIALIZABLEXACT ;
typedef int Relation ;
typedef TYPE_5__* HeapTuple ;
typedef int HTSV_Result ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 () ;
 int VAR_2 ;





 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int VAR_11 ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,int) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*) ;
 scalar_t__ FUNC_31 (int ,TYPE_2__*,int ,int *) ;

void
FUNC_32(bool VAR_12, Relation VAR_13,
        HeapTuple VAR_14, Buffer VAR_15,
        Snapshot VAR_16)
{
 TransactionId VAR_17;
 SERIALIZABLEXIDTAG VAR_18;
 SERIALIZABLEXID *VAR_19;
 SERIALIZABLEXACT *VAR_20;
 HTSV_Result VAR_21;

 if (!FUNC_11(VAR_13, VAR_16))
  return;


 if (FUNC_17(VAR_6))
 {
  FUNC_26(VAR_1,
    (FUNC_27(VAR_0),
     FUNC_30("could not serialize access due to read/write dependencies among transactions"),
     FUNC_28("Reason code: Canceled on identification as a pivot, during conflict out checking."),
     FUNC_29("The transaction might succeed if retried.")));
 }
 VAR_21 = FUNC_5(VAR_14, VAR_11, VAR_15);
 switch (VAR_21)
 {
  case 129:
   if (VAR_12)
    return;
   VAR_17 = FUNC_4(VAR_14->t_data);
   break;
  case 128:
   if (!VAR_12)
    return;
   VAR_17 = FUNC_3(VAR_14->t_data);
   break;
  case 131:
   VAR_17 = FUNC_3(VAR_14->t_data);
   break;
  case 130:
   VAR_17 = FUNC_4(VAR_14->t_data);
   break;
  case 132:
   return;
  default:






   FUNC_25(VAR_1, "unrecognized return value from HeapTupleSatisfiesVacuum: %u", VAR_21);







   VAR_17 = VAR_4;
 }
 FUNC_0(FUNC_22(VAR_17));
 FUNC_0(FUNC_21(VAR_17, VAR_11));





 if (FUNC_20(VAR_17, FUNC_2()))
  return;
 VAR_17 = FUNC_12(VAR_17);
 if (FUNC_23(VAR_17, VAR_11))
  return;
 if (FUNC_20(VAR_17, FUNC_2()))
  return;




 VAR_18.xid = VAR_17;
 FUNC_6(VAR_9, VAR_5);
 VAR_19 = (SERIALIZABLEXID *)
  FUNC_31(VAR_10, &VAR_18, VAR_2, ((void*)0));
 if (!VAR_19)
 {




  SerCommitSeqNo VAR_22;

  VAR_22 = FUNC_8(VAR_17);
  if (VAR_22 != 0)
  {
   if (VAR_22 != VAR_3
    && (!FUNC_19(VAR_6)
     || VAR_22
     <= VAR_6->SeqNo.lastCommitBeforeSnapshot))
    FUNC_26(VAR_1,
      (FUNC_27(VAR_0),
       FUNC_30("could not serialize access due to read/write dependencies among transactions"),
       FUNC_28("Reason code: Canceled on conflict out to old pivot %u.", VAR_17),
       FUNC_29("The transaction might succeed if retried.")));

   if (FUNC_14(VAR_6)
    || !FUNC_10(&VAR_6->inConflicts))
    FUNC_26(VAR_1,
      (FUNC_27(VAR_0),
       FUNC_30("could not serialize access due to read/write dependencies among transactions"),
       FUNC_28("Reason code: Canceled on identification as a pivot, with conflict out to old committed transaction %u.", VAR_17),
       FUNC_29("The transaction might succeed if retried.")));

   VAR_6->flags |= VAR_8;
  }


  FUNC_7(VAR_9);
  return;
 }
 VAR_20 = VAR_19->myXact;
 FUNC_0(FUNC_20(VAR_20->topXid, VAR_17));
 if (VAR_20 == VAR_6 || FUNC_17(VAR_20))
 {

  FUNC_7(VAR_9);
  return;
 }







 if (FUNC_15(VAR_20))
 {
  if (!FUNC_18(VAR_20))
  {
   VAR_20->flags |= VAR_7;
   FUNC_7(VAR_9);
   return;
  }
  else
  {
   FUNC_7(VAR_9);
   FUNC_26(VAR_1,
     (FUNC_27(VAR_0),
      FUNC_30("could not serialize access due to read/write dependencies among transactions"),
      FUNC_28("Reason code: Canceled on conflict out to old pivot."),
      FUNC_29("The transaction might succeed if retried.")));
  }
 }






 if (FUNC_19(VAR_6)
  && FUNC_16(VAR_20)
  && !FUNC_15(VAR_20)
  && (!FUNC_13(VAR_20)
   || VAR_6->SeqNo.lastCommitBeforeSnapshot < VAR_20->SeqNo.earliestOutConflictCommit))
 {

  FUNC_7(VAR_9);
  return;
 }

 if (!FUNC_24(VAR_17))
 {

  FUNC_7(VAR_9);
  return;
 }

 if (FUNC_9(VAR_6, VAR_20))
 {

  FUNC_7(VAR_9);
  return;
 }





 FUNC_1(VAR_6, VAR_20);
 FUNC_7(VAR_9);
}
