
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {int node; struct sway_output* output; } ;
struct sway_seat {int dummy; } ;
struct sway_output {TYPE_3__* wlr_output; TYPE_2__* workspaces; } ;
struct sway_node {int dummy; } ;
struct TYPE_5__ {struct sway_seat* seat; } ;
struct TYPE_8__ {TYPE_1__ handler_context; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {scalar_t__ length; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct sway_workspace*,char*) ;
 int FUNC_2 (struct sway_output*,struct sway_workspace*) ;
 struct sway_workspace* FUNC_3 (struct sway_output*) ;
 int FUNC_4 (struct sway_output*) ;
 struct sway_node* FUNC_5 (struct sway_seat*,int *) ;
 int FUNC_6 (struct sway_seat*,struct sway_node*) ;
 int FUNC_7 (struct sway_seat*,int *) ;
 int FUNC_8 (struct sway_workspace*,char*) ;
 int FUNC_9 (struct sway_workspace*) ;
 struct sway_workspace* FUNC_10 (struct sway_output*,char*) ;
 int FUNC_11 (struct sway_workspace*) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (struct sway_workspace*,struct sway_output*,struct sway_output*) ;

__attribute__((used)) static void FUNC_14(struct sway_workspace *VAR_1,
  struct sway_output *VAR_2) {
 if (VAR_1->output == VAR_2) {
  return;
 }
 struct sway_output *VAR_3 = VAR_1->output;
 FUNC_11(VAR_1);
 struct sway_workspace *VAR_4 =
  FUNC_3(VAR_2);
 if (!FUNC_8(VAR_4, "Expected output to have a workspace")) {
  return;
 }

 FUNC_2(VAR_2, VAR_1);



 struct sway_seat *VAR_5 = VAR_0->handler_context.seat;
 if (VAR_3->workspaces->length == 0) {
  char *VAR_6 = FUNC_12(VAR_3->wlr_output->name);
  struct sway_workspace *VAR_7 = FUNC_10(VAR_3, VAR_6);
  FUNC_0(VAR_6);
  FUNC_7(VAR_5, &VAR_7->node);
 }

 FUNC_9(VAR_4);

 FUNC_4(VAR_2);
 struct sway_node *VAR_8 = FUNC_5(VAR_5, &VAR_1->node);
 FUNC_6(VAR_5, VAR_8);
 FUNC_13(VAR_1, VAR_3, VAR_2);
 FUNC_1(((void*)0), VAR_1, "move");
}
