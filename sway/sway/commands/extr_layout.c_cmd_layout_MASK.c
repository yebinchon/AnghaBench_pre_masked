
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_workspace {int layout; int prev_split_layout; int output; } ;
struct sway_container {int layout; int prev_split_layout; TYPE_3__* workspace; struct sway_container* parent; } ;
struct cmd_results {int dummy; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_7__ {struct sway_workspace* workspace; struct sway_container* container; } ;
struct TYPE_10__ {TYPE_2__ handler_context; } ;
struct TYPE_9__ {scalar_t__ fullscreen_global; TYPE_1__* outputs; } ;
struct TYPE_8__ {int output; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sway_workspace*) ;
 struct cmd_results* FUNC_2 (int,char*,int ,int) ;
 struct cmd_results* FUNC_3 (int ,char*) ;
 TYPE_5__* VAR_7 ;
 scalar_t__ FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*) ;
 char* VAR_8 ;
 int FUNC_6 (int,char**,int,int,int ) ;
 TYPE_4__* VAR_9 ;
 int FUNC_7 (struct sway_workspace*) ;

struct cmd_results *FUNC_8(int VAR_10, char **VAR_11) {
 struct cmd_results *VAR_12 = ((void*)0);
 if ((VAR_12 = FUNC_2(VAR_10, "layout", VAR_3, 1))) {
  return VAR_12;
 }
 if (!VAR_9->outputs->length) {
  return FUNC_3(VAR_1,
    "Can't run this command while there's no outputs connected.");
 }
 struct sway_container *VAR_13 = VAR_7->handler_context.container;
 struct sway_workspace *VAR_14 = VAR_7->handler_context.workspace;

 if (VAR_13 && FUNC_4(VAR_13)) {
  return FUNC_3(VAR_0,
    "Unable to change layout of floating windows");
 }


 if (VAR_13) {
  VAR_13 = VAR_13->parent;
 }




 enum sway_container_layout VAR_15 = VAR_4;
 enum sway_container_layout VAR_16 = VAR_4;
 if (VAR_13) {
  VAR_16 = VAR_13->layout;
  VAR_15 = FUNC_6(VAR_10, VAR_11,
    VAR_13->layout, VAR_13->prev_split_layout,
    VAR_13->workspace->output);
 } else {
  VAR_16 = VAR_14->layout;
  VAR_15 = FUNC_6(VAR_10, VAR_11,
    VAR_14->layout, VAR_14->prev_split_layout,
    VAR_14->output);
 }
 if (VAR_15 == VAR_4) {
  return FUNC_3(VAR_1, VAR_8);
 }
 if (VAR_15 != VAR_16) {
  if (VAR_13) {
   if (VAR_16 != VAR_6 && VAR_16 != VAR_5) {
    VAR_13->prev_split_layout = VAR_16;
   }
   VAR_13->layout = VAR_15;
   FUNC_5(VAR_13);
  } else {
   if (VAR_16 != VAR_6 && VAR_16 != VAR_5) {
    VAR_14->prev_split_layout = VAR_16;
   }
   VAR_14->layout = VAR_15;
   FUNC_7(VAR_14);
  }
  if (VAR_9->fullscreen_global) {
   FUNC_0();
  } else {
   FUNC_1(VAR_14);
  }
 }

 return FUNC_3(VAR_2, ((void*)0));
}
