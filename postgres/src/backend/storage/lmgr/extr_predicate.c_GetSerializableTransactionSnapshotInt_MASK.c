
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int VirtualTransactionId ;
struct TYPE_22__ {int lastCommitBeforeSnapshot; } ;
struct TYPE_24__ {int flags; int finishedLink; int predicateLocks; int pid; int xmin; int finishedBefore; int topXid; int possibleUnsafeConflicts; int inConflicts; int outConflicts; void* commitSeqNo; void* prepareSeqNo; TYPE_1__ SeqNo; int vxid; } ;
struct TYPE_23__ {int xmin; } ;
struct TYPE_21__ {scalar_t__ WritableSxactCount; int SxactGlobalXminCount; int LastSxactCommitSeqNo; int SxactGlobalXmin; } ;
typedef TYPE_2__* Snapshot ;
typedef TYPE_3__ SERIALIZABLEXACT ;
typedef int PGPROC ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 void* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 TYPE_10__* VAR_11 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 scalar_t__ FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*,int) ;
 int FUNC_29 (char*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static Snapshot
FUNC_30(Snapshot VAR_16,
           VirtualTransactionId *VAR_17,
           int VAR_18)
{
 PGPROC *VAR_19;
 VirtualTransactionId VAR_20;
 SERIALIZABLEXACT *VAR_21,
      *VAR_22;


 FUNC_0(VAR_9 == VAR_3);

 FUNC_0(!FUNC_13());






 if (FUNC_7())
  FUNC_25(VAR_1, "cannot establish serializable snapshot during a parallel operation");

 VAR_19 = VAR_7;
 FUNC_0(VAR_19 != ((void*)0));
 FUNC_4(VAR_20, *VAR_19);
 FUNC_8(VAR_13, VAR_5);
 do
 {
  VAR_21 = FUNC_2();

  if (!VAR_21)
  {
   FUNC_9(VAR_13);
   FUNC_18();
   FUNC_8(VAR_13, VAR_5);
  }
 } while (!VAR_21);


 if (!VAR_17)
  VAR_16 = FUNC_5(VAR_16);
 else if (!FUNC_12(VAR_16->xmin, VAR_17))
 {
  FUNC_14(VAR_21);
  FUNC_9(VAR_13);
  FUNC_26(VAR_1,
    (FUNC_27(VAR_0),
     FUNC_29("could not import the requested snapshot"),
     FUNC_28("The source process with PID %d is not running anymore.",
         VAR_18)));
 }
 if (VAR_14 && VAR_11->WritableSxactCount == 0)
 {
  FUNC_14(VAR_21);
  FUNC_9(VAR_13);
  return VAR_16;
 }


 if (!FUNC_24(VAR_11->SxactGlobalXmin))
 {
  FUNC_0(VAR_11->SxactGlobalXminCount == 0);
  VAR_11->SxactGlobalXmin = VAR_16->xmin;
  VAR_11->SxactGlobalXminCount = 1;
  FUNC_11(VAR_16->xmin);
 }
 else if (FUNC_22(VAR_16->xmin, VAR_11->SxactGlobalXmin))
 {
  FUNC_0(VAR_11->SxactGlobalXminCount > 0);
  VAR_11->SxactGlobalXminCount++;
 }
 else
 {
  FUNC_0(FUNC_23(VAR_16->xmin, VAR_11->SxactGlobalXmin));
 }


 VAR_21->vxid = VAR_20;
 VAR_21->SeqNo.lastCommitBeforeSnapshot = VAR_11->LastSxactCommitSeqNo;
 VAR_21->prepareSeqNo = VAR_2;
 VAR_21->commitSeqNo = VAR_2;
 FUNC_16(&(VAR_21->outConflicts));
 FUNC_16(&(VAR_21->inConflicts));
 FUNC_16(&(VAR_21->possibleUnsafeConflicts));
 VAR_21->topXid = FUNC_6();
 VAR_21->finishedBefore = VAR_4;
 VAR_21->xmin = VAR_16->xmin;
 VAR_21->pid = VAR_8;
 FUNC_16(&(VAR_21->predicateLocks));
 FUNC_15(&(VAR_21->finishedLink));
 VAR_21->flags = 0;
 if (VAR_14)
 {
  VAR_21->flags |= VAR_12;







  for (VAR_22 = FUNC_3();
    VAR_22 != ((void*)0);
    VAR_22 = FUNC_10(VAR_22))
  {
   if (!FUNC_19(VAR_22)
    && !FUNC_20(VAR_22)
    && !FUNC_21(VAR_22))
   {
    FUNC_17(VAR_21, VAR_22);
   }
  }
 }
 else
 {
  ++(VAR_11->WritableSxactCount);
  FUNC_0(VAR_11->WritableSxactCount <=
      (VAR_6 + VAR_15));
 }

 VAR_9 = VAR_21;
 VAR_10 = 0;

 FUNC_9(VAR_13);

 FUNC_1();

 return VAR_16;
}
