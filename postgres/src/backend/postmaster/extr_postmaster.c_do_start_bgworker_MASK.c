
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_10__ {scalar_t__ pid; int elem; } ;
struct TYPE_9__ {int bgw_name; } ;
struct TYPE_8__ {scalar_t__ rw_pid; TYPE_3__* rw_backend; TYPE_2__ rw_worker; void* rw_crashed_at; int rw_child_slot; int rw_shmem_slot; } ;
typedef TYPE_1__ RegisteredBgWorker ;
typedef int BackgroundWorker ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int *,TYPE_2__*,int) ;

__attribute__((used)) static bool
FUNC_20(RegisteredBgWorker *VAR_6)
{
 pid_t VAR_7;

 FUNC_0(VAR_6->rw_pid == 0);
 if (!FUNC_11(VAR_6))
 {
  VAR_6->rw_crashed_at = FUNC_2();
  return 0;
 }

 FUNC_14(VAR_1,
   (FUNC_15("starting background worker process \"%s\"",
     VAR_6->rw_worker.bgw_name)));




 switch ((VAR_7 = FUNC_17()))

 {
  case -1:

   FUNC_14(VAR_2,
     (FUNC_15("could not fork worker process: %m")));

   FUNC_7(VAR_6->rw_child_slot);
   VAR_6->rw_child_slot = 0;
   FUNC_18(VAR_6->rw_backend);
   VAR_6->rw_backend = ((void*)0);

   VAR_6->rw_crashed_at = FUNC_2();
   break;


  case 0:

   FUNC_3();


   FUNC_1(0);





   VAR_3 = (BackgroundWorker *)
    FUNC_4(VAR_5, sizeof(BackgroundWorker));
   FUNC_19(VAR_3, &VAR_6->rw_worker, sizeof(BackgroundWorker));


   FUNC_6(VAR_5);
   FUNC_5(VAR_4);
   VAR_4 = ((void*)0);

   FUNC_10();

   FUNC_16(1);
   break;

  default:

   VAR_6->rw_pid = VAR_7;
   VAR_6->rw_backend->pid = VAR_6->rw_pid;
   FUNC_8(VAR_6);

   FUNC_13(&VAR_0, &VAR_6->rw_backend->elem);



   return 1;
 }

 return 0;
}
