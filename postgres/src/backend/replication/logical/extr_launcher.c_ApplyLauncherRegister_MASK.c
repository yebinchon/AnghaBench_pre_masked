
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bgw ;
struct TYPE_4__ {int bgw_flags; int bgw_restart_time; scalar_t__ bgw_main_arg; scalar_t__ bgw_notify_pid; int bgw_type; int bgw_name; int bgw_function_name; int bgw_library_name; int bgw_start_time; } ;
typedef scalar_t__ Datum ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;

void
FUNC_3(void)
{
 BackgroundWorker VAR_5;

 if (VAR_4 == 0)
  return;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.bgw_flags = VAR_1 |
  VAR_0;
 VAR_5.bgw_start_time = VAR_3;
 FUNC_2(VAR_5.bgw_library_name, VAR_2, "postgres");
 FUNC_2(VAR_5.bgw_function_name, VAR_2, "ApplyLauncherMain");
 FUNC_2(VAR_5.bgw_name, VAR_2,
    "logical replication launcher");
 FUNC_2(VAR_5.bgw_type, VAR_2,
    "logical replication launcher");
 VAR_5.bgw_restart_time = 5;
 VAR_5.bgw_notify_pid = 0;
 VAR_5.bgw_main_arg = (Datum) 0;

 FUNC_0(&VAR_5);
}
