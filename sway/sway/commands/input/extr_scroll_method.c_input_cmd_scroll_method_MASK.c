
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int scroll_method; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct cmd_results *FUNC_3(int VAR_9, char **VAR_10) {
 struct cmd_results *VAR_11 = ((void*)0);
 if ((VAR_11 = FUNC_0(VAR_9, "scroll_method", VAR_3, 1))) {
  return VAR_11;
 }
 struct input_config *VAR_12 = VAR_8->handler_context.input_config;
 if (!VAR_12) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 if (FUNC_2(VAR_10[0], "none") == 0) {
  VAR_12->scroll_method = VAR_6;
 } else if (FUNC_2(VAR_10[0], "two_finger") == 0) {
  VAR_12->scroll_method = VAR_4;
 } else if (FUNC_2(VAR_10[0], "edge") == 0) {
  VAR_12->scroll_method = VAR_5;
 } else if (FUNC_2(VAR_10[0], "on_button_down") == 0) {
  VAR_12->scroll_method = VAR_7;
 } else {
  return FUNC_1(VAR_1,
   "Expected 'scroll_method <none|two_finger|edge|on_button_down>'");
 }

 return FUNC_1(VAR_2, ((void*)0));
}
