
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int natural_scroll; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*,int) ;

struct cmd_results *FUNC_3(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "natural_scroll", VAR_2, 1))) {
  return VAR_6;
 }
 struct input_config *VAR_7 = VAR_3->handler_context.input_config;
 if (!VAR_7) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 VAR_7->natural_scroll = FUNC_2(VAR_5[0], 1);

 return FUNC_1(VAR_1, ((void*)0));
}
