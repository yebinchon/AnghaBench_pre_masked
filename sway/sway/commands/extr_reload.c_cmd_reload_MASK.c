
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {int current_config_path; } ;
struct TYPE_3__ {int wl_event_loop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int ) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int ,int ,int *) ;

struct cmd_results *FUNC_4(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "reload", VAR_2, 0))) {
  return VAR_8;
 }

 if (!FUNC_2(VAR_3->current_config_path, 1, 1)) {
  return FUNC_1(VAR_0, "Error(s) reloading config.");
 }



 FUNC_3(VAR_5.wl_event_loop, VAR_4, ((void*)0));

 return FUNC_1(VAR_1, ((void*)0));
}
