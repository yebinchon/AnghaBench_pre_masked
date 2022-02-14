
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ layer; } ;
struct wlr_layer_surface_v1 {TYPE_1__ current; int surface; int mapped; } ;
struct sway_seat {struct wlr_layer_surface_v1* focused_layer; } ;
struct sway_node {int dummy; } ;
struct TYPE_4__ {int node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 struct sway_node* FUNC_1 (struct sway_seat*,int *) ;
 int FUNC_2 (struct sway_seat*,struct sway_node*) ;
 int FUNC_3 (struct sway_seat*,int ,int) ;

void FUNC_4(struct sway_seat *VAR_2,
  struct wlr_layer_surface_v1 *VAR_3) {
 if (!VAR_3 && VAR_2->focused_layer) {
  VAR_2->focused_layer = ((void*)0);
  struct sway_node *VAR_4 = FUNC_1(VAR_2, &VAR_1->node);
  if (VAR_4) {

   FUNC_2(VAR_2, ((void*)0));
   FUNC_2(VAR_2, VAR_4);
  }
  return;
 } else if (!VAR_3 || VAR_2->focused_layer == VAR_3) {
  return;
 }
 FUNC_0(VAR_3->mapped);
 FUNC_3(VAR_2, VAR_3->surface, 1);
 if (VAR_3->current.layer >= VAR_0) {
  VAR_2->focused_layer = VAR_3;
 }
}
