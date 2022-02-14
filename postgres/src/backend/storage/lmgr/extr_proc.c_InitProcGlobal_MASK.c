
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int slock_t ;
struct TYPE_9__ {int * next; } ;
struct TYPE_11__ {int pgprocno; int clogGroupNext; int procArrayGroupNext; int lockGroupMembers; int * myProcLocks; struct TYPE_11__** procgloballist; TYPE_1__ links; int backendLock; int procLatch; int sem; } ;
struct TYPE_10__ {int startupBufferPinWaitBufId; int allProcCount; TYPE_3__* walsenderFreeProcs; TYPE_3__* bgworkerFreeProcs; TYPE_3__* autovacFreeProcs; TYPE_3__* freeProcs; TYPE_3__* allPgXact; TYPE_3__* allProcs; int clogGroupFirst; int procArrayGroupFirst; int * checkpointerLatch; int * walwriterLatch; scalar_t__ startupProcPid; int * startupProc; int spins_per_delay; } ;
typedef int SHM_QUEUE ;
typedef TYPE_2__ PROC_HDR ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,int,int*) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int *,int ) ;

void
FUNC_11(void)
{
 PGPROC *VAR_14;
 PGXACT *VAR_15;
 int VAR_16,
    VAR_17;
 bool VAR_18;
 uint32 VAR_19 = VAR_4 + VAR_6 + VAR_12;


 VAR_9 = (PROC_HDR *)
  FUNC_7("Proc Header", sizeof(PROC_HDR), &VAR_18);
 FUNC_0(!VAR_18);




 VAR_9->spins_per_delay = VAR_1;
 VAR_9->freeProcs = ((void*)0);
 VAR_9->autovacFreeProcs = ((void*)0);
 VAR_9->bgworkerFreeProcs = ((void*)0);
 VAR_9->walsenderFreeProcs = ((void*)0);
 VAR_9->startupProc = ((void*)0);
 VAR_9->startupProcPid = 0;
 VAR_9->startupBufferPinWaitBufId = -1;
 VAR_9->walwriterLatch = ((void*)0);
 VAR_9->checkpointerLatch = ((void*)0);
 FUNC_10(&VAR_9->procArrayGroupFirst, VAR_2);
 FUNC_10(&VAR_9->clogGroupFirst, VAR_2);
 VAR_14 = (PGPROC *) FUNC_6(VAR_19 * sizeof(PGPROC));
 FUNC_3(VAR_14, 0, VAR_19 * sizeof(PGPROC));
 VAR_9->allProcs = VAR_14;

 VAR_9->allProcCount = VAR_4 + VAR_6;
 VAR_15 = (PGXACT *) FUNC_6(VAR_19 * sizeof(PGXACT));
 FUNC_3(VAR_15, 0, VAR_19 * sizeof(PGXACT));
 VAR_9->allPgXact = VAR_15;

 for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
 {







  if (VAR_16 < VAR_4 + VAR_6)
  {
   VAR_14[VAR_16].sem = FUNC_4();
   FUNC_1(&(VAR_14[VAR_16].procLatch));
   FUNC_2(&(VAR_14[VAR_16].backendLock), VAR_3);
  }
  VAR_14[VAR_16].pgprocno = VAR_16;
  if (VAR_16 < VAR_5)
  {

   VAR_14[VAR_16].links.next = (SHM_QUEUE *) VAR_9->freeProcs;
   VAR_9->freeProcs = &VAR_14[VAR_16];
   VAR_14[VAR_16].procgloballist = &VAR_9->freeProcs;
  }
  else if (VAR_16 < VAR_5 + VAR_11 + 1)
  {

   VAR_14[VAR_16].links.next = (SHM_QUEUE *) VAR_9->autovacFreeProcs;
   VAR_9->autovacFreeProcs = &VAR_14[VAR_16];
   VAR_14[VAR_16].procgloballist = &VAR_9->autovacFreeProcs;
  }
  else if (VAR_16 < VAR_5 + VAR_11 + 1 + VAR_13)
  {

   VAR_14[VAR_16].links.next = (SHM_QUEUE *) VAR_9->bgworkerFreeProcs;
   VAR_9->bgworkerFreeProcs = &VAR_14[VAR_16];
   VAR_14[VAR_16].procgloballist = &VAR_9->bgworkerFreeProcs;
  }
  else if (VAR_16 < VAR_4)
  {

   VAR_14[VAR_16].links.next = (SHM_QUEUE *) VAR_9->walsenderFreeProcs;
   VAR_9->walsenderFreeProcs = &VAR_14[VAR_16];
   VAR_14[VAR_16].procgloballist = &VAR_9->walsenderFreeProcs;
  }


  for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
   FUNC_5(&(VAR_14[VAR_16].myProcLocks[VAR_17]));


  FUNC_9(&VAR_14[VAR_16].lockGroupMembers);





  FUNC_10(&(VAR_14[VAR_16].procArrayGroupNext), VAR_2);
  FUNC_10(&(VAR_14[VAR_16].clogGroupNext), VAR_2);
 }





 VAR_0 = &VAR_14[VAR_4];
 VAR_8 = &VAR_14[VAR_4 + VAR_6];


 VAR_10 = (slock_t *) FUNC_6(sizeof(slock_t));
 FUNC_8(VAR_10);
}
