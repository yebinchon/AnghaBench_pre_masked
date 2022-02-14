
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bgw_flags; int bgw_notify_pid; int bgw_type; int bgw_name; int bgw_function_name; int bgw_library_name; int bgw_restart_time; int bgw_start_time; } ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 BackgroundWorker VAR_7;
 BackgroundWorkerHandle *VAR_8;

 FUNC_0(&VAR_7, 0, sizeof(BackgroundWorker));
 VAR_7.bgw_flags =
  VAR_1 | VAR_0;
 VAR_7.bgw_start_time = VAR_3;
 VAR_7.bgw_restart_time = VAR_2;
 FUNC_7(VAR_7.bgw_library_name, "pg_prewarm");
 FUNC_7(VAR_7.bgw_function_name, "autoprewarm_database_main");
 FUNC_7(VAR_7.bgw_name, "autoprewarm worker");
 FUNC_7(VAR_7.bgw_type, "autoprewarm worker");


 VAR_7.bgw_notify_pid = VAR_6;

 if (!FUNC_1(&VAR_7, &VAR_8))
  FUNC_3(VAR_5,
    (FUNC_4(VAR_4),
     FUNC_6("registering dynamic bgworker autoprewarm failed"),
     FUNC_5("Consider increasing configuration parameter \"max_worker_processes\".")));





 FUNC_2(VAR_8);
}
