
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int node; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct sway_container {scalar_t__ fullscreen_mode; struct sway_node node; struct sway_workspace* workspace; } ;
struct TYPE_2__ {int scratchpad; int node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sway_workspace*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 struct sway_seat* FUNC_3 () ;
 int FUNC_4 (struct sway_container*,char*) ;
 int FUNC_5 (int ,struct sway_container*) ;
 scalar_t__ FUNC_6 (struct sway_node*,struct sway_node*) ;
 TYPE_1__* VAR_2 ;
 struct sway_node* FUNC_7 (struct sway_seat*,int *) ;
 int FUNC_8 (struct sway_seat*,struct sway_node*) ;

void FUNC_9(struct sway_container *VAR_3) {
 struct sway_seat *VAR_4 = FUNC_3();
 struct sway_node *VAR_5 = FUNC_7(VAR_4, &VAR_2->node);
 struct sway_workspace *VAR_6 = VAR_3->workspace;

 if (VAR_3->fullscreen_mode == VAR_0 && !VAR_3->workspace) {


  return;
 }

 if (VAR_3->fullscreen_mode != VAR_1) {
  FUNC_2(VAR_3);
 }
 FUNC_1(VAR_3);
 FUNC_0(VAR_6);
 if (&VAR_3->node == VAR_5 || FUNC_6(VAR_5, &VAR_3->node)) {
  FUNC_8(VAR_4, FUNC_7(VAR_4, &VAR_6->node));
 }
 FUNC_5(VAR_2->scratchpad, VAR_3);

 FUNC_4(VAR_3, "move");
}
