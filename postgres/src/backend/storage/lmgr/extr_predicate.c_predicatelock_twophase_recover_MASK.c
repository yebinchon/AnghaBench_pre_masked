
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_21__ {int flags; int xmin; } ;
typedef TYPE_4__ TwoPhasePredicateXactRecord ;
struct TYPE_20__ {int lockRecord; int xactRecord; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_3__ data; } ;
typedef TYPE_5__ TwoPhasePredicateRecord ;
struct TYPE_23__ {int target; } ;
typedef TYPE_6__ TwoPhasePredicateLockRecord ;
typedef void* TransactionId ;
struct TYPE_19__ {void* lastCommitBeforeSnapshot; } ;
struct TYPE_18__ {scalar_t__ localTransactionId; int backendId; } ;
struct TYPE_26__ {int xmin; int flags; int inConflicts; int outConflicts; void* topXid; int finishedLink; int predicateLocks; int possibleUnsafeConflicts; TYPE_2__ SeqNo; int finishedBefore; int commitSeqNo; void* prepareSeqNo; scalar_t__ pid; TYPE_1__ vxid; } ;
struct TYPE_25__ {TYPE_9__* myXact; } ;
struct TYPE_24__ {void* xid; } ;
struct TYPE_17__ {scalar_t__ WritableSxactCount; int SxactGlobalXminCount; int SxactGlobalXmin; } ;
typedef TYPE_7__ SERIALIZABLEXIDTAG ;
typedef TYPE_8__ SERIALIZABLEXID ;
typedef TYPE_9__ SERIALIZABLEXACT ;
typedef scalar_t__ LocalTransactionId ;


 int FUNC_0 (int) ;
 TYPE_9__* FUNC_1 () ;
 int FUNC_2 (int *,int,TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ) ;
 TYPE_13__* VAR_11 ;
 int FUNC_6 (int *) ;
 void* VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (TYPE_9__*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ,TYPE_7__*,int ,int*) ;
 scalar_t__ VAR_19 ;

void
FUNC_18(TransactionId VAR_20, uint16 VAR_21,
          void *VAR_22, uint32 VAR_23)
{
 TwoPhasePredicateRecord *VAR_24;

 FUNC_0(VAR_23 == sizeof(TwoPhasePredicateRecord));

 VAR_24 = (TwoPhasePredicateRecord *) VAR_22;

 FUNC_0((VAR_24->type == VAR_18) ||
     (VAR_24->type == VAR_17));

 if (VAR_24->type == VAR_18)
 {

  TwoPhasePredicateXactRecord *VAR_25;
  SERIALIZABLEXACT *VAR_26;
  SERIALIZABLEXID *VAR_27;
  SERIALIZABLEXIDTAG VAR_28;
  bool VAR_29;

  VAR_25 = (TwoPhasePredicateXactRecord *) &VAR_24->data.xactRecord;

  FUNC_3(VAR_15, VAR_8);
  VAR_26 = FUNC_1();
  if (!VAR_26)
   FUNC_14(VAR_1,
     (FUNC_15(VAR_0),
      FUNC_16("out of shared memory")));


  VAR_26->vxid.backendId = VAR_4;
  VAR_26->vxid.localTransactionId = (LocalTransactionId) VAR_20;
  VAR_26->pid = 0;


  VAR_26->prepareSeqNo = VAR_12;
  VAR_26->commitSeqNo = VAR_5;
  VAR_26->finishedBefore = VAR_7;

  VAR_26->SeqNo.lastCommitBeforeSnapshot = VAR_12;






  FUNC_8(&(VAR_26->possibleUnsafeConflicts));

  FUNC_8(&(VAR_26->predicateLocks));
  FUNC_7(&(VAR_26->finishedLink));

  VAR_26->topXid = VAR_20;
  VAR_26->xmin = VAR_25->xmin;
  VAR_26->flags = VAR_25->flags;
  FUNC_0(FUNC_9(VAR_26));
  if (!FUNC_10(VAR_26))
  {
   ++(VAR_11->WritableSxactCount);
   FUNC_0(VAR_11->WritableSxactCount <=
       (VAR_10 + VAR_19));
  }






  FUNC_8(&(VAR_26->outConflicts));
  FUNC_8(&(VAR_26->inConflicts));
  VAR_26->flags |= VAR_13;
  VAR_26->flags |= VAR_14;


  VAR_28.xid = VAR_20;
  VAR_27 = (SERIALIZABLEXID *) FUNC_17(VAR_16,
              &VAR_28,
              VAR_2, &VAR_29);
  FUNC_0(VAR_27 != ((void*)0));
  FUNC_0(!VAR_29);
  VAR_27->myXact = (SERIALIZABLEXACT *) VAR_26;
  if ((!FUNC_13(VAR_11->SxactGlobalXmin)) ||
   (FUNC_12(VAR_11->SxactGlobalXmin, VAR_26->xmin)))
  {
   VAR_11->SxactGlobalXmin = VAR_26->xmin;
   VAR_11->SxactGlobalXminCount = 1;
   FUNC_5(VAR_26->xmin);
  }
  else if (FUNC_11(VAR_26->xmin, VAR_11->SxactGlobalXmin))
  {
   FUNC_0(VAR_11->SxactGlobalXminCount > 0);
   VAR_11->SxactGlobalXminCount++;
  }

  FUNC_4(VAR_15);
 }
 else if (VAR_24->type == VAR_17)
 {

  TwoPhasePredicateLockRecord *VAR_30;
  SERIALIZABLEXID *VAR_31;
  SERIALIZABLEXACT *VAR_32;
  SERIALIZABLEXIDTAG VAR_33;
  uint32 VAR_34;

  VAR_30 = (TwoPhasePredicateLockRecord *) &VAR_24->data.lockRecord;
  VAR_34 = FUNC_6(&VAR_30->target);

  FUNC_3(VAR_15, VAR_9);
  VAR_33.xid = VAR_20;
  VAR_31 = (SERIALIZABLEXID *)
   FUNC_17(VAR_16, &VAR_33, VAR_3, ((void*)0));
  FUNC_4(VAR_15);

  FUNC_0(VAR_31 != ((void*)0));
  VAR_32 = VAR_31->myXact;
  FUNC_0(VAR_32 != VAR_6);

  FUNC_2(&VAR_30->target, VAR_34, VAR_32);
 }
}
