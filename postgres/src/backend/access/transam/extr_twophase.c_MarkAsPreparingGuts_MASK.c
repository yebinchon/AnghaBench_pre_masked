
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* TransactionId ;
typedef int TimestampTz ;
struct TYPE_11__ {TYPE_1__* allPgXact; TYPE_2__* allProcs; } ;
struct TYPE_10__ {size_t pgprocno; int valid; int inredo; int gid; int locking_backend; void* owner; void* xid; int prepared_at; } ;
struct TYPE_9__ {size_t pgprocno; int isBackgroundWorker; int lwWaiting; int * myProcLocks; int * waitProcLock; int * waitLock; scalar_t__ lwWaitMode; int tempNamespaceId; void* roleId; void* databaseId; int backendId; scalar_t__ pid; scalar_t__ lxid; int waitStatus; int links; } ;
struct TYPE_8__ {int delayChkpt; int overflowed; scalar_t__ nxids; scalar_t__ vacuumFlags; int xmin; void* xid; } ;
typedef TYPE_1__ PGXACT ;
typedef TYPE_2__ PGPROC ;
typedef void* Oid ;
typedef scalar_t__ LocalTransactionId ;
typedef TYPE_3__* GlobalTransaction ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static void
FUNC_6(GlobalTransaction VAR_10, TransactionId VAR_11, const char *VAR_12,
     TimestampTz VAR_13, Oid VAR_14, Oid VAR_15)
{
 PGPROC *VAR_16;
 PGXACT *VAR_17;
 int VAR_18;

 FUNC_0(FUNC_1(VAR_9, VAR_3));

 FUNC_0(VAR_10 != ((void*)0));
 VAR_16 = &VAR_7->allProcs[VAR_10->pgprocno];
 VAR_17 = &VAR_7->allPgXact[VAR_10->pgprocno];


 FUNC_2(VAR_16, 0, sizeof(PGPROC));
 VAR_16->pgprocno = VAR_10->pgprocno;
 FUNC_3(&(VAR_16->links));
 VAR_16->waitStatus = VAR_8;

 VAR_16->lxid = (LocalTransactionId) VAR_11;
 VAR_17->xid = VAR_11;
 VAR_17->xmin = VAR_2;
 VAR_17->delayChkpt = 0;
 VAR_17->vacuumFlags = 0;
 VAR_16->pid = 0;
 VAR_16->backendId = VAR_0;
 VAR_16->databaseId = VAR_15;
 VAR_16->roleId = VAR_14;
 VAR_16->tempNamespaceId = VAR_1;
 VAR_16->isBackgroundWorker = 0;
 VAR_16->lwWaiting = 0;
 VAR_16->lwWaitMode = 0;
 VAR_16->waitLock = ((void*)0);
 VAR_16->waitProcLock = ((void*)0);
 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++)
  FUNC_4(&(VAR_16->myProcLocks[VAR_18]));

 VAR_17->overflowed = 0;
 VAR_17->nxids = 0;

 VAR_10->prepared_at = VAR_13;
 VAR_10->xid = VAR_11;
 VAR_10->owner = VAR_14;
 VAR_10->locking_backend = VAR_4;
 VAR_10->valid = 0;
 VAR_10->inredo = 0;
 FUNC_5(VAR_10->gid, VAR_12);





 VAR_5 = VAR_10;
}
