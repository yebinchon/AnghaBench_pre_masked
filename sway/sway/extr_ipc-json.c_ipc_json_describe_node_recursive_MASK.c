
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sway_node {int type; TYPE_7__* sway_container; TYPE_5__* sway_workspace; TYPE_3__* sway_output; } ;
struct sway_workspace {struct sway_node node; } ;
struct sway_output {struct sway_node node; } ;
struct sway_container {struct sway_node node; } ;
typedef int json_object ;
struct TYPE_16__ {TYPE_1__* outputs; } ;
struct TYPE_15__ {TYPE_6__* children; } ;
struct TYPE_14__ {int length; struct sway_container** items; } ;
struct TYPE_13__ {TYPE_4__* tiling; } ;
struct TYPE_12__ {int length; struct sway_container** items; } ;
struct TYPE_11__ {TYPE_2__* workspaces; } ;
struct TYPE_10__ {int length; struct sway_workspace** items; } ;
struct TYPE_9__ {int length; struct sway_output** items; } ;






 int * FUNC_0 (struct sway_node*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int *) ;
 TYPE_8__* VAR_0 ;

json_object *FUNC_5(struct sway_node *VAR_1) {
 json_object *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 json_object *VAR_4 = FUNC_3();
 switch (VAR_1->type) {
 case 129:
  FUNC_2(VAR_4,
    FUNC_1());
  for (VAR_3 = 0; VAR_3 < VAR_0->outputs->length; ++VAR_3) {
   struct sway_output *VAR_5 = VAR_0->outputs->items[VAR_3];
   FUNC_2(VAR_4,
     FUNC_5(&VAR_5->node));
  }
  break;
 case 130:
  for (VAR_3 = 0; VAR_3 < VAR_1->sway_output->workspaces->length; ++VAR_3) {
   struct sway_workspace *VAR_6 = VAR_1->sway_output->workspaces->items[VAR_3];
   FUNC_2(VAR_4,
     FUNC_5(&VAR_6->node));
  }
  break;
 case 128:
  for (VAR_3 = 0; VAR_3 < VAR_1->sway_workspace->tiling->length; ++VAR_3) {
   struct sway_container *VAR_7 = VAR_1->sway_workspace->tiling->items[VAR_3];
   FUNC_2(VAR_4,
     FUNC_5(&VAR_7->node));
  }
  break;
 case 131:
  if (VAR_1->sway_container->children) {
   for (VAR_3 = 0; VAR_3 < VAR_1->sway_container->children->length; ++VAR_3) {
    struct sway_container *VAR_8 =
     VAR_1->sway_container->children->items[VAR_3];
    FUNC_2(VAR_4,
      FUNC_5(&VAR_8->node));
   }
  }
  break;
 }
 FUNC_4(VAR_2, "nodes", VAR_4);

 return VAR_2;
}
