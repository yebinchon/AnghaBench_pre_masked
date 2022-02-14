
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int node; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct sway_container {int scratchpad; scalar_t__ fullscreen_mode; int node; struct sway_workspace* workspace; struct sway_container* parent; } ;
struct TYPE_2__ {int scratchpad; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_workspace*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*) ;
 int FUNC_7 (struct sway_container*,int) ;
 struct sway_seat* FUNC_8 () ;
 int FUNC_9 (struct sway_container*,char*) ;
 int FUNC_10 (int ,struct sway_container*) ;
 TYPE_1__* VAR_1 ;
 struct sway_node* FUNC_11 (struct sway_seat*,int *) ;
 int FUNC_12 (struct sway_seat*,struct sway_node*) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (struct sway_workspace*,struct sway_container*) ;

void FUNC_15(struct sway_container *VAR_2, struct sway_workspace *VAR_3) {
 if (!FUNC_13(!VAR_2->scratchpad, "Container is already in scratchpad")) {
  return;
 }

 struct sway_container *VAR_4 = VAR_2->parent;
 struct sway_workspace *VAR_5 = VAR_2->workspace;


 if (VAR_2->fullscreen_mode != VAR_0) {
  FUNC_5(VAR_2);
 }


 if (!FUNC_6(VAR_2)) {
  FUNC_7(VAR_2, 1);
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
 }

 FUNC_2(VAR_2);
 VAR_2->scratchpad = 1;
 FUNC_10(VAR_1->scratchpad, VAR_2);
 if (VAR_3) {
  FUNC_14(VAR_3, VAR_2);
 }

 if (!VAR_3) {
  struct sway_seat *VAR_6 = FUNC_8();
  struct sway_node *VAR_7 = ((void*)0);
  if (VAR_4) {
   FUNC_0(VAR_4);
   VAR_7 = FUNC_11(VAR_6, &VAR_4->node);
  }
  if (!VAR_7) {
   FUNC_1(VAR_5);
   VAR_7 = FUNC_11(VAR_6, &VAR_5->node);
  }
  FUNC_12(VAR_6, VAR_7);
 }

 FUNC_9(VAR_2, "move");
}
