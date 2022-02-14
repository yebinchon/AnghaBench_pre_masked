
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ uint32 ;
struct TYPE_17__ {int localTransactionId; int backendId; } ;
typedef TYPE_3__ VirtualTransactionId ;
struct TYPE_22__ {int tag; } ;
struct TYPE_21__ {int nelements; TYPE_6__* locks; } ;
struct TYPE_20__ {int fastpath; int leaderPid; int pid; int lxid; int backend; void* waitLockMode; scalar_t__ holdMask; int locktag; } ;
struct TYPE_19__ {int pid; int lxid; int backendId; void* waitLockMode; TYPE_8__* waitLock; int backendLock; int fpLocalTransactionId; scalar_t__ fpVXIDLock; int * fpRelId; int databaseId; } ;
struct TYPE_16__ {TYPE_8__* myLock; TYPE_5__* myProc; } ;
struct TYPE_18__ {TYPE_1__* groupLeader; TYPE_2__ tag; scalar_t__ holdMask; } ;
struct TYPE_15__ {int pid; } ;
struct TYPE_14__ {int allProcCount; TYPE_5__* allProcs; } ;
typedef TYPE_4__ PROCLOCK ;
typedef TYPE_5__ PGPROC ;
typedef TYPE_6__ LockInstanceData ;
typedef TYPE_7__ LockData ;
typedef int LOCKTAG ;
typedef TYPE_8__ LOCK ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 TYPE_11__* VAR_8 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_3__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (TYPE_6__*,int) ;

LockData *
FUNC_14(void)
{
 LockData *VAR_9;
 PROCLOCK *VAR_10;
 HASH_SEQ_STATUS VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = (LockData *) FUNC_12(sizeof(LockData));


 VAR_12 = VAR_5;
 VAR_13 = 0;
 VAR_9->locks = (LockInstanceData *) FUNC_12(sizeof(LockInstanceData) * VAR_12);
 for (VAR_14 = 0; VAR_14 < VAR_8->allProcCount; ++VAR_14)
 {
  PGPROC *VAR_15 = &VAR_8->allProcs[VAR_14];
  uint32 VAR_16;

  FUNC_3(&VAR_15->backendLock, VAR_3);

  for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
  {
   LockInstanceData *VAR_17;
   uint32 VAR_18 = FUNC_1(VAR_15, VAR_16);


   if (!VAR_18)
    continue;

   if (VAR_13 >= VAR_12)
   {
    VAR_12 += VAR_5;
    VAR_9->locks = (LockInstanceData *)
     FUNC_13(VAR_9->locks, sizeof(LockInstanceData) * VAR_12);
   }

   VAR_17 = &VAR_9->locks[VAR_13];
   FUNC_6(VAR_17->locktag, VAR_15->databaseId,
         VAR_15->fpRelId[VAR_16]);
   VAR_17->holdMask = VAR_18 << VAR_1;
   VAR_17->waitLockMode = VAR_7;
   VAR_17->backend = VAR_15->backendId;
   VAR_17->lxid = VAR_15->lxid;
   VAR_17->pid = VAR_15->pid;
   VAR_17->leaderPid = VAR_15->pid;
   VAR_17->fastpath = 1;

   VAR_13++;
  }

  if (VAR_15->fpVXIDLock)
  {
   VirtualTransactionId VAR_19;
   LockInstanceData *VAR_20;

   if (VAR_13 >= VAR_12)
   {
    VAR_12 += VAR_5;
    VAR_9->locks = (LockInstanceData *)
     FUNC_13(VAR_9->locks, sizeof(LockInstanceData) * VAR_12);
   }

   VAR_19.backendId = VAR_15->backendId;
   VAR_19.localTransactionId = VAR_15->fpLocalTransactionId;

   VAR_20 = &VAR_9->locks[VAR_13];
   FUNC_7(VAR_20->locktag, VAR_19);
   VAR_20->holdMask = FUNC_2(VAR_0);
   VAR_20->waitLockMode = VAR_7;
   VAR_20->backend = VAR_15->backendId;
   VAR_20->lxid = VAR_15->lxid;
   VAR_20->pid = VAR_15->pid;
   VAR_20->leaderPid = VAR_15->pid;
   VAR_20->fastpath = 1;

   VAR_13++;
  }

  FUNC_4(&VAR_15->backendLock);
 }
 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  FUNC_3(FUNC_5(VAR_14), VAR_3);


 VAR_9->nelements = VAR_13 + FUNC_8(VAR_4);
 if (VAR_9->nelements > VAR_12)
 {
  VAR_12 = VAR_9->nelements;
  VAR_9->locks = (LockInstanceData *)
   FUNC_13(VAR_9->locks, sizeof(LockInstanceData) * VAR_12);
 }


 FUNC_9(&VAR_11, VAR_4);

 while ((VAR_10 = (PROCLOCK *) FUNC_10(&VAR_11)))
 {
  PGPROC *VAR_21 = VAR_10->tag.myProc;
  LOCK *VAR_22 = VAR_10->tag.myLock;
  LockInstanceData *VAR_23 = &VAR_9->locks[VAR_13];

  FUNC_11(&VAR_23->locktag, &VAR_22->tag, sizeof(LOCKTAG));
  VAR_23->holdMask = VAR_10->holdMask;
  if (VAR_21->waitLock == VAR_10->tag.myLock)
   VAR_23->waitLockMode = VAR_21->waitLockMode;
  else
   VAR_23->waitLockMode = VAR_7;
  VAR_23->backend = VAR_21->backendId;
  VAR_23->lxid = VAR_21->lxid;
  VAR_23->pid = VAR_21->pid;
  VAR_23->leaderPid = VAR_10->groupLeader->pid;
  VAR_23->fastpath = 0;

  VAR_13++;
 }
 for (VAR_14 = VAR_6; --VAR_14 >= 0;)
  FUNC_4(FUNC_5(VAR_14));

 FUNC_0(VAR_13 == VAR_9->nelements);

 return VAR_9;
}
