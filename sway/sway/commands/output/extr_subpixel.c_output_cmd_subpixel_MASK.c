
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct output_config {int subpixel; } ;
struct cmd_results {int dummy; } ;
typedef enum wl_output_subpixel { ____Placeholder_wl_output_subpixel } wl_output_subpixel ;
struct TYPE_4__ {int argc; char** argv; } ;
struct TYPE_5__ {TYPE_1__ leftovers; struct output_config* output_config; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_1 (char*,char*) ;

struct cmd_results *FUNC_2(int VAR_8, char **VAR_9) {
 if (!VAR_7->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 if (!VAR_8) {
  return FUNC_0(VAR_1, "Missing subpixel argument.");
 }
 enum wl_output_subpixel VAR_10;

 if (FUNC_1(*VAR_9, "rgb") == 0) {
  VAR_10 = VAR_3;
 } else if (FUNC_1(*VAR_9, "bgr") == 0) {
  VAR_10 = VAR_2;
 } else if (FUNC_1(*VAR_9, "vrgb") == 0) {
  VAR_10 = VAR_6;
 } else if (FUNC_1(*VAR_9, "vbgr") == 0) {
  VAR_10 = VAR_5;
 } else if (FUNC_1(*VAR_9, "none") == 0) {
  VAR_10 = VAR_4;
 } else {
  return FUNC_0(VAR_1, "Invalid output subpixel.");
 }

 struct output_config *VAR_11 = VAR_7->handler_context.output_config;
 VAR_7->handler_context.leftovers.argc = VAR_8 - 1;
 VAR_7->handler_context.leftovers.argv = VAR_9 + 1;

 VAR_11->subpixel = VAR_10;
 return ((void*)0);
}
