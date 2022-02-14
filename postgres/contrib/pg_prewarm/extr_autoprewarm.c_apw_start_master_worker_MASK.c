
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_5__ {int bgw_notify_pid; int bgw_type; int bgw_name; int bgw_function_name; int bgw_library_name; int bgw_start_time; int bgw_flags; } ;
typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_1__ BackgroundWorker ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 BackgroundWorker VAR_7;
 BackgroundWorkerHandle *VAR_8;
 BgwHandleStatus VAR_9;
 pid_t VAR_10;

 FUNC_0(&VAR_7, 0, sizeof(BackgroundWorker));
 VAR_7.bgw_flags = VAR_1;
 VAR_7.bgw_start_time = VAR_2;
 FUNC_8(VAR_7.bgw_library_name, "pg_prewarm");
 FUNC_8(VAR_7.bgw_function_name, "autoprewarm_main");
 FUNC_8(VAR_7.bgw_name, "autoprewarm master");
 FUNC_8(VAR_7.bgw_type, "autoprewarm master");

 if (VAR_6)
 {
  FUNC_1(&VAR_7);
  return;
 }


 VAR_7.bgw_notify_pid = VAR_5;

 if (!FUNC_2(&VAR_7, &VAR_8))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_7("could not register background process"),
     FUNC_6("You may need to increase max_worker_processes.")));

 VAR_9 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_9 != VAR_0)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_7("could not start background process"),
     FUNC_6("More details may be available in the server log.")));
}
