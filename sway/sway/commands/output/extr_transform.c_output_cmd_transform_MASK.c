
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_output {int transform; } ;
struct sway_output {struct wlr_output* wlr_output; } ;
struct output_config {char* name; int transform; } ;
struct cmd_results {int dummy; } ;
typedef enum wl_output_transform { ____Placeholder_wl_output_transform } wl_output_transform ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cmd_results* FUNC_0 (int ,char*,...) ;
 TYPE_3__* VAR_10 ;
 struct sway_output* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

struct cmd_results *FUNC_6(int VAR_11, char **VAR_12) {
 if (!VAR_10->handler_context.output_config) {
  return FUNC_0(VAR_0, "Missing output config");
 }
 if (!VAR_11) {
  return FUNC_0(VAR_1, "Missing transform argument.");
 }
 enum wl_output_transform VAR_13;
 if (FUNC_2(*VAR_12, "normal") == 0 ||
   FUNC_2(*VAR_12, "0") == 0) {
  VAR_13 = VAR_9;
 } else if (FUNC_2(*VAR_12, "90") == 0) {
  VAR_13 = VAR_4;
 } else if (FUNC_2(*VAR_12, "180") == 0) {
  VAR_13 = VAR_2;
 } else if (FUNC_2(*VAR_12, "270") == 0) {
  VAR_13 = VAR_3;
 } else if (FUNC_2(*VAR_12, "flipped") == 0) {
  VAR_13 = VAR_5;
 } else if (FUNC_2(*VAR_12, "flipped-90") == 0) {
  VAR_13 = VAR_8;
 } else if (FUNC_2(*VAR_12, "flipped-180") == 0) {
  VAR_13 = VAR_6;
 } else if (FUNC_2(*VAR_12, "flipped-270") == 0) {
  VAR_13 = VAR_7;
 } else {
  return FUNC_0(VAR_1, "Invalid output transform.");
 }
 struct output_config *VAR_14 = VAR_10->handler_context.output_config;
 VAR_10->handler_context.leftovers.argc = VAR_11 - 1;
 VAR_10->handler_context.leftovers.argv = VAR_12 + 1;
 if (VAR_11 > 1 &&
   (FUNC_2(VAR_12[1], "clockwise") == 0 || FUNC_2(VAR_12[1], "anticlockwise") == 0)) {
  if (!FUNC_3(VAR_14->name != ((void*)0), "Output config name not set")) {
   return ((void*)0);
  }
  if (FUNC_2(VAR_14->name, "*") == 0) {
   return FUNC_0(VAR_1,
    "Cannot apply relative transform to all outputs.");
  }
  struct sway_output *VAR_15 = FUNC_1(VAR_14->name);
  if (VAR_15 == ((void*)0)) {
   return FUNC_0(VAR_1,
    "Cannot apply relative transform to unknown output %s", VAR_14->name);
  }
  if (FUNC_2(VAR_12[1], "anticlockwise") == 0) {
   VAR_13 = FUNC_5(VAR_13);
  }
  struct wlr_output *VAR_16 = VAR_15->wlr_output;
  VAR_13 = FUNC_4(VAR_16->transform, VAR_13);
  VAR_10->handler_context.leftovers.argv += 1;
  VAR_10->handler_context.leftovers.argc -= 1;
 }
 VAR_14->transform = VAR_13;
 return ((void*)0);
}
