
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_6__ {int argc; char** argv; } ;
struct TYPE_7__ {TYPE_2__ leftovers; TYPE_1__* output_config; } ;
struct TYPE_8__ {TYPE_3__ handler_context; } ;
struct TYPE_5__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_4__* VAR_1 ;

struct cmd_results *FUNC_1(int VAR_2, char **VAR_3) {
 if (!VAR_1->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 VAR_1->handler_context.output_config->enabled = 0;

 VAR_1->handler_context.leftovers.argc = VAR_2;
 VAR_1->handler_context.leftovers.argv = VAR_3;
 return ((void*)0);
}
