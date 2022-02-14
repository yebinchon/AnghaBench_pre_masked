
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct TYPE_7__ {int destroy; } ;
struct wlr_pointer_constraint_v1 {struct wlr_surface* surface; TYPE_2__ events; TYPE_1__* seat; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {int cursor; } ;
struct TYPE_10__ {int notify; } ;
struct sway_pointer_constraint {TYPE_5__ destroy; struct wlr_pointer_constraint_v1* constraint; } ;
struct sway_node {scalar_t__ type; TYPE_4__* sway_container; } ;
struct TYPE_9__ {TYPE_3__* view; } ;
struct TYPE_8__ {struct wlr_surface* surface; } ;
struct TYPE_6__ {struct sway_seat* data; } ;


 scalar_t__ VAR_0 ;
 struct sway_pointer_constraint* FUNC_0 (int,int) ;
 int VAR_1 ;
 struct sway_node* FUNC_1 (struct sway_seat*) ;
 int FUNC_2 (int ,struct wlr_pointer_constraint_v1*) ;
 int FUNC_3 (int *,TYPE_5__*) ;

void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct wlr_pointer_constraint_v1 *VAR_4 = VAR_3;
 struct sway_seat *VAR_5 = VAR_4->seat->data;

 struct sway_pointer_constraint *VAR_6 =
  FUNC_0(1, sizeof(struct sway_pointer_constraint));
 VAR_6->constraint = VAR_4;

 VAR_6->destroy.notify = VAR_1;
 FUNC_3(&VAR_4->events.destroy, &VAR_6->destroy);

 struct sway_node *VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 && VAR_7->type == VAR_0 && VAR_7->sway_container->view) {
  struct wlr_surface *VAR_8 = VAR_7->sway_container->view->surface;
  if (VAR_8 == VAR_4->surface) {
   FUNC_2(VAR_5->cursor, VAR_4);
  }
 }
}
