
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int worker ;
struct TYPE_4__ {int bgw_flags; int bgw_main_arg; int bgw_type; int bgw_name; scalar_t__ bgw_notify_pid; int bgw_function_name; int bgw_library_name; int bgw_restart_time; int bgw_start_time; } ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int *,unsigned int*,int,int,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,char*,int *,int *,char*,int ,int ,int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (int ,char*) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

void
FUNC_7(void)
{
 BackgroundWorker VAR_12;
 unsigned int VAR_13;


 FUNC_0("worker_spi.naptime",
       "Duration between each check (in seconds).",
       ((void*)0),
       &VAR_10,
       10,
       1,
       VAR_5,
       VAR_7,
       0,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 if (!VAR_8)
  return;

 FUNC_0("worker_spi.total_workers",
       "Number of workers.",
       ((void*)0),
       &VAR_11,
       2,
       1,
       100,
       VAR_6,
       0,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 FUNC_1("worker_spi.database",
          "Database to connect to.",
          ((void*)0),
          &VAR_9,
          "postgres",
          VAR_6,
          0,
          ((void*)0), ((void*)0), ((void*)0));


 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.bgw_flags = VAR_1 |
  VAR_0;
 VAR_12.bgw_start_time = VAR_4;
 VAR_12.bgw_restart_time = VAR_3;
 FUNC_6(VAR_12.bgw_library_name, "worker_spi");
 FUNC_6(VAR_12.bgw_function_name, "worker_spi_main");
 VAR_12.bgw_notify_pid = 0;




 for (VAR_13 = 1; VAR_13 <= VAR_11; VAR_13++)
 {
  FUNC_5(VAR_12.bgw_name, VAR_2, "worker_spi worker %d", VAR_13);
  FUNC_5(VAR_12.bgw_type, VAR_2, "worker_spi");
  VAR_12.bgw_main_arg = FUNC_2(VAR_13);

  FUNC_3(&VAR_12);
 }
}
