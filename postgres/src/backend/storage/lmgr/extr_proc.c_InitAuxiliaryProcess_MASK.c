
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int delayChkpt; scalar_t__ vacuumFlags; void* xmin; void* xid; } ;
struct TYPE_7__ {TYPE_4__* allPgXact; int spins_per_delay; } ;
struct TYPE_6__ {scalar_t__ pid; size_t pgprocno; int fpVXIDLock; int lwWaiting; int sem; int lockGroupMembers; int * lockGroupLeader; int procLatch; int * myProcLocks; int * waitProcLock; int * waitLock; scalar_t__ lwWaitMode; int isBackgroundWorker; void* tempNamespaceId; void* roleId; void* databaseId; int backendId; void* fpLocalTransactionId; void* lxid; int waitStatus; int links; } ;
typedef TYPE_1__ PGPROC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_17 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

void
FUNC_13(void)
{
 PGPROC *VAR_18;
 int VAR_19;





 if (VAR_15 == ((void*)0) || VAR_1 == ((void*)0))
  FUNC_10(VAR_14, "proc header uninitialized");

 if (VAR_10 != ((void*)0))
  FUNC_10(VAR_2, "you already exist");
 FUNC_6(VAR_16);

 FUNC_12(VAR_15->spins_per_delay);




 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
 {
  VAR_18 = &VAR_1[VAR_19];
  if (VAR_18->pid == 0)
   break;
 }
 if (VAR_19 >= VAR_12)
 {
  FUNC_7(VAR_16);
  FUNC_10(VAR_3, "all AuxiliaryProcs are in use");
 }



 ((volatile PGPROC *) VAR_18)->pid = VAR_11;

 VAR_10 = VAR_18;
 VAR_9 = &VAR_15->allPgXact[VAR_18->pgprocno];

 FUNC_7(VAR_16);





 FUNC_4(&(VAR_10->links));
 VAR_10->waitStatus = VAR_17;
 VAR_10->lxid = VAR_5;
 VAR_10->fpVXIDLock = 0;
 VAR_10->fpLocalTransactionId = VAR_5;
 VAR_9->xid = VAR_7;
 VAR_9->xmin = VAR_7;
 VAR_10->backendId = VAR_4;
 VAR_10->databaseId = VAR_6;
 VAR_10->roleId = VAR_6;
 VAR_10->tempNamespaceId = VAR_6;
 VAR_10->isBackgroundWorker = VAR_8;
 VAR_9->delayChkpt = 0;
 VAR_9->vacuumFlags = 0;
 VAR_10->lwWaiting = 0;
 VAR_10->lwWaitMode = 0;
 VAR_10->waitLock = ((void*)0);
 VAR_10->waitProcLock = ((void*)0);
 FUNC_2(&VAR_10->procLatch);
 FUNC_8();


 FUNC_0(VAR_10->lockGroupLeader == ((void*)0));
 FUNC_0(FUNC_9(&VAR_10->lockGroupMembers));






 FUNC_3(VAR_10->sem);




 FUNC_11(VAR_0, FUNC_1(VAR_19));
}
