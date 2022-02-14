
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct output_config {int custom_mode; void* height; int refresh_rate; void* width; } ;
struct cmd_results {int dummy; } ;
struct TYPE_4__ {int argc; char** argv; } ;
struct TYPE_5__ {TYPE_1__ leftovers; struct output_config* output_config; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**) ;
 void* FUNC_4 (char*,char**,int) ;

struct cmd_results *FUNC_5(int VAR_3, char **VAR_4) {
 if (!VAR_2->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 if (!VAR_3) {
  return FUNC_0(VAR_1, "Missing mode argument.");
 }

 struct output_config *VAR_5 = VAR_2->handler_context.output_config;

 if (FUNC_2(VAR_4[0], "--custom") == 0) {
  VAR_4++;
  VAR_3--;
  VAR_5->custom_mode = 1;
 } else {
  VAR_5->custom_mode = 0;
 }

 char *VAR_6;
 VAR_5->width = FUNC_4(*VAR_4, &VAR_6, 10);
 if (*VAR_6) {

  if (*VAR_6 != 'x') {
   return FUNC_0(VAR_1, "Invalid mode width.");
  }
  ++VAR_6;
  VAR_5->height = FUNC_4(VAR_6, &VAR_6, 10);
  if (*VAR_6) {
   if (*VAR_6 != '@') {
    return FUNC_0(VAR_1, "Invalid mode height.");
   }
   ++VAR_6;
   VAR_5->refresh_rate = FUNC_3(VAR_6, &VAR_6);
   if (FUNC_1("Hz", VAR_6) != 0) {
    return FUNC_0(VAR_1,
     "Invalid mode refresh rate.");
   }
  }
 } else {

  VAR_3--; VAR_4++;
  if (!VAR_3) {
   return FUNC_0(VAR_1,
    "Missing mode argument (height).");
  }
  VAR_5->height = FUNC_4(*VAR_4, &VAR_6, 10);
  if (*VAR_6) {
   return FUNC_0(VAR_1, "Invalid mode height.");
  }
 }

 VAR_2->handler_context.leftovers.argc = VAR_3 - 1;
 VAR_2->handler_context.leftovers.argv = VAR_4 + 1;
 return ((void*)0);
}
