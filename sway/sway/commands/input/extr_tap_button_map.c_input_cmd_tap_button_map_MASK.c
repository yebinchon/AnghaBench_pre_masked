
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int tap_button_map; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_7, char **VAR_8) {
 struct cmd_results *VAR_9 = ((void*)0);
 if ((VAR_9 = FUNC_0(VAR_7, "tap_button_map", VAR_3, 1))) {
  return VAR_9;
 }
 struct input_config *VAR_10 = VAR_6->handler_context.input_config;
 if (!VAR_10) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 if (FUNC_2(VAR_8[0], "lrm") == 0) {
  VAR_10->tap_button_map = VAR_5;
 } else if (FUNC_2(VAR_8[0], "lmr") == 0) {
  VAR_10->tap_button_map = VAR_4;
 } else {
  return FUNC_1(VAR_1,
   "Expected 'tap_button_map <lrm|lmr>'");
 }

 return FUNC_1(VAR_2, ((void*)0));
}
