
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int repeat_delay; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_2__* VAR_4 ;

struct cmd_results *FUNC_3(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "repeat_delay", VAR_3, 1))) {
  return VAR_7;
 }
 struct input_config *VAR_8 = VAR_4->handler_context.input_config;
 if (!VAR_8) {
  return FUNC_2(VAR_0, "No input device defined.");
 }

 int VAR_9 = FUNC_0(VAR_6[0]);
 if (VAR_9 < 0) {
  return FUNC_2(VAR_1, "Repeat delay cannot be negative");
 }
 VAR_8->repeat_delay = VAR_9;

 return FUNC_2(VAR_2, ((void*)0));
}
