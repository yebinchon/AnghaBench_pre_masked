
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int dwt; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_2 (char*,int) ;

struct cmd_results *FUNC_3(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "dwt", VAR_2, 1))) {
  return VAR_8;
 }
 struct input_config *VAR_9 = VAR_5->handler_context.input_config;
 if (!VAR_9) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 if (FUNC_2(VAR_7[0], 1)) {
  VAR_9->dwt = VAR_4;
 } else {
  VAR_9->dwt = VAR_3;
 }

 return FUNC_1(VAR_1, ((void*)0));
}
