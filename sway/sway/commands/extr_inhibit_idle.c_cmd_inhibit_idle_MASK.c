
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_idle_inhibitor_v1 {int mode; } ;
struct sway_container {int view; } ;
struct cmd_results {int dummy; } ;
typedef enum sway_idle_inhibit_mode { ____Placeholder_sway_idle_inhibit_mode } sway_idle_inhibit_mode ;
struct TYPE_4__ {struct sway_container* container; } ;
struct TYPE_6__ {TYPE_1__ handler_context; } ;
struct TYPE_5__ {int idle_inhibit_manager_v1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__ VAR_8 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sway_idle_inhibitor_v1*) ;
 struct sway_idle_inhibitor_v1* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

struct cmd_results *FUNC_7(int VAR_9, char **VAR_10) {
 struct cmd_results *VAR_11 = ((void*)0);
 if ((VAR_11 = FUNC_0(VAR_9, "inhibit_idle", VAR_2, 1))) {
  return VAR_11;
 }

 struct sway_container *VAR_12 = VAR_7->handler_context.container;
 if (!VAR_12 || !VAR_12->view) {
  return FUNC_1(VAR_0,
    "Only views can have idle inhibitors");
 }

 bool VAR_13 = 0;
 enum sway_idle_inhibit_mode VAR_14;
 if (FUNC_2(VAR_10[0], "focus") == 0) {
  VAR_14 = VAR_3;
 } else if (FUNC_2(VAR_10[0], "fullscreen") == 0) {
  VAR_14 = VAR_4;
 } else if (FUNC_2(VAR_10[0], "open") == 0) {
  VAR_14 = VAR_5;
 } else if (FUNC_2(VAR_10[0], "none") == 0) {
  VAR_13 = 1;
 } else if (FUNC_2(VAR_10[0], "visible") == 0) {
  VAR_14 = VAR_6;
 } else {
  return FUNC_1(VAR_0,
    "Expected `inhibit_idle focus|fullscreen|open|none|visible`");
 }

 struct sway_idle_inhibitor_v1 *VAR_15 =
  FUNC_5(VAR_12->view);
 if (VAR_15) {
  if (VAR_13) {
   FUNC_4(VAR_15);
  } else {
   VAR_15->mode = VAR_14;
   FUNC_3(VAR_8.idle_inhibit_manager_v1);
  }
 } else if (!VAR_13) {
  FUNC_6(VAR_12->view, VAR_14);
 }

 return FUNC_1(VAR_1, ((void*)0));
}
