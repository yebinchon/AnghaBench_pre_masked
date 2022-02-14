
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int total_slots; int parallel_terminate_count; TYPE_4__* slot; } ;
struct TYPE_9__ {int bgw_notify_pid; int bgw_flags; int bgw_extra; int bgw_main_arg; int bgw_restart_time; int bgw_start_time; int bgw_function_name; int bgw_library_name; int bgw_type; int bgw_name; } ;
struct TYPE_12__ {int in_use; TYPE_1__ worker; scalar_t__ pid; scalar_t__ terminate; } ;
struct TYPE_10__ {int bgw_flags; int bgw_notify_pid; int bgw_name; int bgw_extra; int bgw_main_arg; int bgw_restart_time; int bgw_start_time; int bgw_function_name; int bgw_library_name; int bgw_type; } ;
struct TYPE_11__ {int rw_terminate; scalar_t__ rw_pid; int rw_shmem_slot; int rw_lnode; TYPE_2__ rw_worker; scalar_t__ rw_crashed_at; scalar_t__ rw_child_slot; int * rw_backend; } ;
typedef TYPE_3__ RegisteredBgWorker ;
typedef TYPE_4__ BackgroundWorkerSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,long,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int ) ;
 TYPE_3__* FUNC_9 (int) ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int *) ;

void
FUNC_14(void)
{
 int VAR_11;
 if (VAR_10 != VAR_3->total_slots)
 {
  FUNC_4(VAR_7,
    "inconsistent background worker state (max_worker_processes=%d, total_slots=%d",
    VAR_10,
    VAR_3->total_slots);
  return;
 }





 for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
 {
  BackgroundWorkerSlot *VAR_12 = &VAR_3->slot[VAR_11];
  RegisteredBgWorker *VAR_13;

  if (!VAR_12->in_use)
   continue;





  FUNC_12();


  VAR_13 = FUNC_0(VAR_11);
  if (VAR_13 != ((void*)0))
  {




   if (VAR_12->terminate && !VAR_13->rw_terminate)
   {
    VAR_13->rw_terminate = 1;
    if (VAR_13->rw_pid != 0)
     FUNC_8(VAR_13->rw_pid, VAR_8);
    else
    {

     FUNC_2(VAR_13);
    }
   }
   continue;
  }
  if (VAR_12->terminate)
  {
   int VAR_14;






   VAR_14 = VAR_12->worker.bgw_notify_pid;
   if ((VAR_12->worker.bgw_flags & VAR_0) != 0)
    VAR_3->parallel_terminate_count++;
   FUNC_11();
   VAR_12->pid = 0;
   VAR_12->in_use = 0;
   if (VAR_14 != 0)
    FUNC_8(VAR_14, VAR_9);

   continue;
  }




  VAR_13 = FUNC_9(sizeof(RegisteredBgWorker));
  if (VAR_13 == ((void*)0))
  {
   FUNC_5(VAR_7,
     (FUNC_6(VAR_6),
      FUNC_7("out of memory")));
   return;
  }





  FUNC_3(VAR_13->rw_worker.bgw_name,
         VAR_12->worker.bgw_name, VAR_2);
  FUNC_3(VAR_13->rw_worker.bgw_type,
         VAR_12->worker.bgw_type, VAR_2);
  FUNC_3(VAR_13->rw_worker.bgw_library_name,
         VAR_12->worker.bgw_library_name, VAR_2);
  FUNC_3(VAR_13->rw_worker.bgw_function_name,
         VAR_12->worker.bgw_function_name, VAR_2);
  VAR_13->rw_worker.bgw_flags = VAR_12->worker.bgw_flags;
  VAR_13->rw_worker.bgw_start_time = VAR_12->worker.bgw_start_time;
  VAR_13->rw_worker.bgw_restart_time = VAR_12->worker.bgw_restart_time;
  VAR_13->rw_worker.bgw_main_arg = VAR_12->worker.bgw_main_arg;
  FUNC_10(VAR_13->rw_worker.bgw_extra, VAR_12->worker.bgw_extra, VAR_1);
  VAR_13->rw_worker.bgw_notify_pid = VAR_12->worker.bgw_notify_pid;
  if (!FUNC_1(VAR_13->rw_worker.bgw_notify_pid))
  {
   FUNC_4(VAR_5, "worker notification PID %lu is not valid",
     (long) VAR_13->rw_worker.bgw_notify_pid);
   VAR_13->rw_worker.bgw_notify_pid = 0;
  }


  VAR_13->rw_backend = ((void*)0);
  VAR_13->rw_pid = 0;
  VAR_13->rw_child_slot = 0;
  VAR_13->rw_crashed_at = 0;
  VAR_13->rw_shmem_slot = VAR_11;
  VAR_13->rw_terminate = 0;


  FUNC_5(VAR_5,
    (FUNC_7("registering background worker \"%s\"",
      VAR_13->rw_worker.bgw_name)));

  FUNC_13(&VAR_4, &VAR_13->rw_lnode);
 }
}
