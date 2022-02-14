
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int node; } ;
struct sway_seat {char* prev_workspace_name; } ;
struct TYPE_5__ {int id; } ;
struct sway_container {int scratchpad; int fullscreen_mode; TYPE_3__* workspace; TYPE_1__ node; } ;
typedef enum sway_fullscreen_mode { ____Placeholder_sway_fullscreen_mode } sway_fullscreen_mode ;
struct TYPE_6__ {struct sway_seat* seat; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {int output; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*,int) ;
 int FUNC_4 (char*) ;
 struct sway_workspace* FUNC_5 (int ) ;
 int FUNC_6 (struct sway_container*,int *) ;
 int FUNC_7 (struct sway_container*) ;
 int FUNC_8 (struct sway_container*) ;
 int FUNC_9 (struct sway_seat*,int *) ;
 struct sway_container* FUNC_10 (struct sway_seat*) ;
 int FUNC_11 (struct sway_seat*,int ) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (struct sway_container*,struct sway_container*,struct sway_seat*,struct sway_container*) ;
 int FUNC_14 (struct sway_container*,struct sway_container*) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (int ,char*,int ,int ) ;
 int FUNC_17 (struct sway_workspace*) ;

void FUNC_18(struct sway_container *VAR_2, struct sway_container *VAR_3) {
 if (!FUNC_15(VAR_2 && VAR_3, "Cannot swap with nothing")) {
  return;
 }
 if (!FUNC_15(!FUNC_1(VAR_2, VAR_3)
    && !FUNC_1(VAR_3, VAR_2),
    "Cannot swap ancestor and descendant")) {
  return;
 }

 FUNC_16(VAR_0, "Swapping containers %zu and %zu",
   VAR_2->node.id, VAR_3->node.id);

 bool VAR_4 = VAR_2->scratchpad;
 bool VAR_5 = FUNC_2(VAR_2);
 bool VAR_6 = VAR_3->scratchpad;
 bool VAR_7 = FUNC_2(VAR_3);
 if (VAR_4) {
  if (VAR_5) {
   FUNC_8(VAR_2);
  }
  FUNC_7(VAR_2);
 }
 if (VAR_6) {
  if (VAR_7) {
   FUNC_8(VAR_3);
  }
  FUNC_7(VAR_3);
 }

 enum sway_fullscreen_mode VAR_8 = VAR_2->fullscreen_mode;
 enum sway_fullscreen_mode VAR_9 = VAR_3->fullscreen_mode;
 if (VAR_8) {
  FUNC_0(VAR_2);
 }
 if (VAR_9) {
  FUNC_0(VAR_3);
 }

 struct sway_seat *VAR_10 = VAR_1->handler_context.seat;
 struct sway_container *VAR_11 = FUNC_10(VAR_10);
 struct sway_workspace *VAR_12 =
  FUNC_5(VAR_2->workspace->output);
 struct sway_workspace *VAR_13 =
  FUNC_5(VAR_3->workspace->output);
 if (!FUNC_15(VAR_12 && VAR_13, "con1 or con2 are on an output without a"
    "workspace. This should not happen")) {
  return;
 }

 char *VAR_14 = ((void*)0);
 if (VAR_10->prev_workspace_name) {
  VAR_14 = FUNC_12(VAR_10->prev_workspace_name);
 }

 FUNC_14(VAR_2, VAR_3);

 if (!FUNC_17(VAR_12)) {
  FUNC_11(VAR_10, FUNC_9(VAR_10, &VAR_12->node));
 }
 if (!FUNC_17(VAR_13)) {
  FUNC_11(VAR_10, FUNC_9(VAR_10, &VAR_13->node));
 }

 FUNC_13(VAR_2, VAR_3, VAR_10, VAR_11);

 if (VAR_14) {
  FUNC_4(VAR_10->prev_workspace_name);
  VAR_10->prev_workspace_name = VAR_14;
 }

 if (VAR_4) {
  FUNC_6(VAR_3, ((void*)0));
  if (!VAR_5) {
   FUNC_8(VAR_3);
  }
 }
 if (VAR_6) {
  FUNC_6(VAR_2, ((void*)0));
  if (!VAR_7) {
   FUNC_8(VAR_2);
  }
 }

 if (VAR_8) {
  FUNC_3(VAR_3, VAR_8);
 }
 if (VAR_9) {
  FUNC_3(VAR_2, VAR_9);
 }
}
