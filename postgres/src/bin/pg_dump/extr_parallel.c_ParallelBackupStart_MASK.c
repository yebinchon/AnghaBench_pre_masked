
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_16__ {TYPE_4__* slot; TYPE_5__* AH; } ;
typedef TYPE_2__ WorkerInfo ;
typedef int TocEntry ;
struct TYPE_21__ {TYPE_3__* pstate; } ;
struct TYPE_20__ {int am_worker; } ;
struct TYPE_15__ {int numWorkers; } ;
struct TYPE_19__ {int * connection; TYPE_1__ public; } ;
struct TYPE_18__ {int pipeRead; int pipeWrite; int pipeRevRead; int pipeRevWrite; uintptr_t hThread; scalar_t__ pid; int threadId; int * callback_data; int * callback; int * AH; int workerStatus; } ;
struct TYPE_17__ {int numWorkers; TYPE_4__* parallelSlot; int ** te; } ;
typedef TYPE_3__ ParallelState ;
typedef TYPE_4__ ParallelSlot ;
typedef TYPE_5__ ArchiveHandle ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 uintptr_t FUNC_2 (int *,int ,void*,TYPE_2__*,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 () ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_5__*,int *) ;
 int FUNC_14 (TYPE_3__*) ;
 TYPE_7__ VAR_8 ;
 TYPE_6__ VAR_9 ;

ParallelState *
FUNC_15(ArchiveHandle *VAR_10)
{
 ParallelState *VAR_11;
 int VAR_12;

 FUNC_0(VAR_10->public.numWorkers > 0);

 VAR_11 = (ParallelState *) FUNC_9(sizeof(ParallelState));

 VAR_11->numWorkers = VAR_10->public.numWorkers;
 VAR_11->te = ((void*)0);
 VAR_11->parallelSlot = ((void*)0);

 if (VAR_10->public.numWorkers == 1)
  return VAR_11;

 VAR_11->te = (TocEntry **)
  FUNC_10(VAR_11->numWorkers * sizeof(TocEntry *));
 VAR_11->parallelSlot = (ParallelSlot *)
  FUNC_10(VAR_11->numWorkers * sizeof(ParallelSlot));
 VAR_8.pstate = VAR_11;
 FUNC_13(VAR_10, ((void*)0));


 FUNC_6(((void*)0));


 for (VAR_12 = 0; VAR_12 < VAR_11->numWorkers; VAR_12++)
 {




  pid_t VAR_13;

  ParallelSlot *VAR_14 = &(VAR_11->parallelSlot[VAR_12]);
  int VAR_15[2],
     VAR_16[2];


  if (FUNC_11(VAR_15) < 0 || FUNC_11(VAR_16) < 0)
   FUNC_5("could not create communication channels: %m");

  VAR_11->te[VAR_12] = ((void*)0);

  VAR_14->workerStatus = VAR_4;
  VAR_14->AH = ((void*)0);
  VAR_14->callback = ((void*)0);
  VAR_14->callback_data = ((void*)0);


  VAR_14->pipeRead = VAR_16[VAR_0];
  VAR_14->pipeWrite = VAR_15[VAR_1];

  VAR_14->pipeRevRead = VAR_15[VAR_0];
  VAR_14->pipeRevWrite = VAR_16[VAR_1];
  VAR_13 = FUNC_7();
  if (VAR_13 == 0)
  {

   int VAR_17;


   VAR_14->pid = FUNC_8();


   VAR_9.am_worker = 1;


   FUNC_3(VAR_16[VAR_0]);

   FUNC_3(VAR_15[VAR_1]);





   for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
   {
    FUNC_3(VAR_11->parallelSlot[VAR_17].pipeRead);
    FUNC_3(VAR_11->parallelSlot[VAR_17].pipeWrite);
   }


   FUNC_1(VAR_10, VAR_14);


   FUNC_4(0);
  }
  else if (VAR_13 < 0)
  {

   FUNC_5("could not create worker process: %m");
  }


  VAR_14->pid = VAR_13;


  FUNC_3(VAR_15[VAR_0]);

  FUNC_3(VAR_16[VAR_1]);

 }







 FUNC_12(VAR_2, VAR_3);





 FUNC_13(VAR_10, VAR_10->connection);







 FUNC_14(VAR_11);

 return VAR_11;
}
