
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {int xkb_file_is_set; int * xkb_file; int identifier; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ,int *) ;

struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "xkb_file", VAR_2, 1))) {
  return VAR_7;
 }
 struct input_config *VAR_8 = VAR_4->handler_context.input_config;
 if (!VAR_8) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 if (FUNC_3(VAR_6[0], "-") == 0) {
  FUNC_2(VAR_8->xkb_file);
  VAR_8->xkb_file = ((void*)0);
 } else {
  VAR_8->xkb_file = FUNC_4(VAR_6[0]);
 }
 VAR_8->xkb_file_is_set = 1;

 FUNC_5(VAR_3, "set-xkb_file for config: %s file: %s",
   VAR_8->identifier, VAR_8->xkb_file);
 return FUNC_1(VAR_1, ((void*)0));
}
