
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct input_config {scalar_t__ scroll_button; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct input_config* input_config; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;

struct cmd_results *FUNC_5(int VAR_9, char **VAR_10) {
 struct cmd_results *VAR_11 = ((void*)0);
 if ((VAR_11 = FUNC_0(VAR_9, "scroll_button", VAR_3, 1))) {
  return VAR_11;
 }
 struct input_config *VAR_12 = VAR_8->handler_context.input_config;
 if (!VAR_12) {
  return FUNC_1(VAR_0, "No input device defined.");
 }

 if (FUNC_4(*VAR_10, "disable") == 0) {
  VAR_12->scroll_button = 0;
  return FUNC_1(VAR_2, ((void*)0));
 }

 char *VAR_13 = ((void*)0);
 uint32_t VAR_14 = FUNC_3(*VAR_10, &VAR_13);
 if (VAR_13) {
  VAR_11 = FUNC_1(VAR_1, VAR_13);
  FUNC_2(VAR_13);
  return VAR_11;
 } else if (VAR_14 == VAR_7 || VAR_14 == VAR_4
   || VAR_14 == VAR_5 || VAR_14 == VAR_6) {
  return FUNC_1(VAR_1,
    "X11 axis buttons are not supported for scroll_button");
 } else if (!VAR_14) {
  return FUNC_1(VAR_1, "Unknown button %s", *VAR_10);
 }
 VAR_12->scroll_button = VAR_14;

 return FUNC_1(VAR_2, ((void*)0));
}
