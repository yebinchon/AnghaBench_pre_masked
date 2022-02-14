
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_5__ {int argc; char** argv; } ;
struct TYPE_7__ {TYPE_1__ leftovers; TYPE_2__* output_config; } ;
struct TYPE_8__ {TYPE_3__ handler_context; } ;
struct TYPE_6__ {int dpms_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_1 (char*,int) ;

struct cmd_results *FUNC_2(int VAR_5, char **VAR_6) {
 if (!VAR_4->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 if (!VAR_5) {
  return FUNC_0(VAR_1, "Missing dpms argument.");
 }

 if (FUNC_1(VAR_6[0], 1)) {
  VAR_4->handler_context.output_config->dpms_state = VAR_3;
 } else {
  VAR_4->handler_context.output_config->dpms_state = VAR_2;
 }

 VAR_4->handler_context.leftovers.argc = VAR_5 - 1;
 VAR_4->handler_context.leftovers.argv = VAR_6 + 1;
 return ((void*)0);
}
