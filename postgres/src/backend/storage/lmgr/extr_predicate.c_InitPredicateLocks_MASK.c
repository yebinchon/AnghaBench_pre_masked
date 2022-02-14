
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int info ;
struct TYPE_12__ {scalar_t__ lastCommitBeforeSnapshot; } ;
struct TYPE_17__ {scalar_t__ pid; int flags; void* xmin; void* finishedBefore; void* topXid; int possibleUnsafeConflicts; int finishedLink; int predicateLocks; int inConflicts; int outConflicts; TYPE_2__ SeqNo; scalar_t__ commitSeqNo; scalar_t__ prepareSeqNo; int vxid; } ;
struct TYPE_16__ {TYPE_8__* OldCommittedSxact; TYPE_4__* element; int availableList; scalar_t__ HavePartialClearedThrough; scalar_t__ CanPartialClearThrough; scalar_t__ LastSxactCommitSeqNo; scalar_t__ WritableSxactCount; scalar_t__ SxactGlobalXminCount; void* SxactGlobalXmin; int activeList; } ;
struct TYPE_15__ {TYPE_4__* element; int availableList; } ;
struct TYPE_11__ {int predicateLockListLock; } ;
struct TYPE_14__ {int outLink; int link; TYPE_1__ sxact; } ;
struct TYPE_13__ {int keysize; int entrysize; void* num_partitions; int hash; } ;
typedef int Size ;
typedef int SHM_QUEUE ;
typedef int SERIALIZABLEXIDTAG ;
typedef int SERIALIZABLEXID ;
typedef int PREDICATELOCKTARGETTAG ;
typedef int PREDICATELOCKTARGET ;
typedef int PREDICATELOCKTAG ;
typedef int PREDICATELOCK ;
typedef TYPE_3__ HASHCTL ;


 int FUNC_0 (int) ;
 TYPE_8__* FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ) ;
 int VAR_10 ;
 long VAR_11 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 long FUNC_4 () ;
 void* VAR_12 ;
 TYPE_8__* VAR_13 ;
 int FUNC_5 () ;
 TYPE_7__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_6 (int ) ;
 void* VAR_18 ;
 int FUNC_7 (int *) ;
 int VAR_19 ;
 TYPE_6__* VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (char*,long,long,TYPE_3__*,int) ;
 void* FUNC_13 (char*,int,int*) ;
 int FUNC_14 (void*,int *,int ,int*) ;
 long VAR_27 ;
 int FUNC_15 (TYPE_4__*,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_28 ;

void
FUNC_17(void)
{
 HASHCTL VAR_29;
 long VAR_30;
 Size VAR_31;
 bool VAR_32;


 FUNC_0(!VAR_9);






 VAR_30 = FUNC_4();





 FUNC_3(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.keysize = sizeof(PREDICATELOCKTARGETTAG);
 VAR_29.entrysize = sizeof(PREDICATELOCKTARGET);
 VAR_29.num_partitions = VAR_12;

 VAR_18 = FUNC_12("PREDICATELOCKTARGET hash",
           VAR_30,
           VAR_30,
           &VAR_29,
           VAR_3 | VAR_2 |
           VAR_7 | VAR_5);







 if (!VAR_9)
 {
  (void) FUNC_14(VAR_18, &VAR_24,
         VAR_4, &VAR_32);
  FUNC_0(!VAR_32);
 }


 VAR_25 = FUNC_7(&VAR_24);
 VAR_23 = FUNC_6(VAR_25);





 FUNC_3(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.keysize = sizeof(PREDICATELOCKTAG);
 VAR_29.entrysize = sizeof(PREDICATELOCK);
 VAR_29.hash = VAR_28;
 VAR_29.num_partitions = VAR_12;


 VAR_30 *= 2;

 VAR_17 = FUNC_12("PREDICATELOCK hash",
           VAR_30,
           VAR_30,
           &VAR_29,
           VAR_3 | VAR_6 |
           VAR_7 | VAR_5);





 VAR_30 = (VAR_11 + VAR_27);
 VAR_30 *= 10;

 VAR_14 = FUNC_13("PredXactList",
          VAR_15,
          &VAR_32);
 FUNC_0(VAR_32 == VAR_9);
 if (!VAR_32)
 {
  int VAR_33;

  FUNC_8(&VAR_14->availableList);
  FUNC_8(&VAR_14->activeList);
  VAR_14->SxactGlobalXmin = VAR_8;
  VAR_14->SxactGlobalXminCount = 0;
  VAR_14->WritableSxactCount = 0;
  VAR_14->LastSxactCommitSeqNo = VAR_1 - 1;
  VAR_14->CanPartialClearThrough = 0;
  VAR_14->HavePartialClearedThrough = 0;
  VAR_31 = FUNC_16((Size) VAR_30,
          VAR_16);
  VAR_14->element = FUNC_11(VAR_31);

  FUNC_15(VAR_14->element, 0, VAR_31);
  for (VAR_33 = 0; VAR_33 < VAR_30; VAR_33++)
  {
   FUNC_2(&VAR_14->element[VAR_33].sxact.predicateLockListLock,
        VAR_10);
   FUNC_9(&(VAR_14->availableList),
         &(VAR_14->element[VAR_33].link));
  }
  VAR_14->OldCommittedSxact = FUNC_1();
  FUNC_10(VAR_14->OldCommittedSxact->vxid);
  VAR_14->OldCommittedSxact->prepareSeqNo = 0;
  VAR_14->OldCommittedSxact->commitSeqNo = 0;
  VAR_14->OldCommittedSxact->SeqNo.lastCommitBeforeSnapshot = 0;
  FUNC_8(&VAR_14->OldCommittedSxact->outConflicts);
  FUNC_8(&VAR_14->OldCommittedSxact->inConflicts);
  FUNC_8(&VAR_14->OldCommittedSxact->predicateLocks);
  FUNC_8(&VAR_14->OldCommittedSxact->finishedLink);
  FUNC_8(&VAR_14->OldCommittedSxact->possibleUnsafeConflicts);
  VAR_14->OldCommittedSxact->topXid = VAR_8;
  VAR_14->OldCommittedSxact->finishedBefore = VAR_8;
  VAR_14->OldCommittedSxact->xmin = VAR_8;
  VAR_14->OldCommittedSxact->flags = VAR_22;
  VAR_14->OldCommittedSxact->pid = 0;
 }

 VAR_13 = VAR_14->OldCommittedSxact;





 FUNC_3(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.keysize = sizeof(SERIALIZABLEXIDTAG);
 VAR_29.entrysize = sizeof(SERIALIZABLEXID);

 VAR_26 = FUNC_12("SERIALIZABLEXID hash",
          VAR_30,
          VAR_30,
          &VAR_29,
          VAR_3 | VAR_2 |
          VAR_5);
 VAR_30 *= 5;

 VAR_20 = FUNC_13("RWConflictPool",
          VAR_21,
          &VAR_32);
 FUNC_0(VAR_32 == VAR_9);
 if (!VAR_32)
 {
  int VAR_34;

  FUNC_8(&VAR_20->availableList);
  VAR_31 = FUNC_16((Size) VAR_30,
          VAR_19);
  VAR_20->element = FUNC_11(VAR_31);

  FUNC_15(VAR_20->element, 0, VAR_31);
  for (VAR_34 = 0; VAR_34 < VAR_30; VAR_34++)
  {
   FUNC_9(&(VAR_20->availableList),
         &(VAR_20->element[VAR_34].outLink));
  }
 }





 VAR_0 = (SHM_QUEUE *)
  FUNC_13("FinishedSerializableTransactions",
      sizeof(SHM_QUEUE),
      &VAR_32);
 FUNC_0(VAR_32 == VAR_9);
 if (!VAR_32)
  FUNC_8(VAR_0);





 FUNC_5();
}
