
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
struct TYPE_6__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (char*,char**) ;

struct cmd_results *FUNC_2(int VAR_3, char **VAR_4) {
 if (!VAR_2->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 if (!VAR_3) {
  return FUNC_0(VAR_1, "Missing scale argument.");
 }

 char *VAR_5;
 VAR_2->handler_context.output_config->scale = FUNC_1(*VAR_4, &VAR_5);
 if (*VAR_5) {
  return FUNC_0(VAR_1, "Invalid scale.");
 }

 VAR_2->handler_context.leftovers.argc = VAR_3 - 1;
 VAR_2->handler_context.leftovers.argv = VAR_4 + 1;
 return ((void*)0);
}
