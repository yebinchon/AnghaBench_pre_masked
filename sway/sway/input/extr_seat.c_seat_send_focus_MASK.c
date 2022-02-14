
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_xwayland {int dummy; } ;
struct wlr_pointer_constraint_v1 {int dummy; } ;
struct sway_view {scalar_t__ type; int surface; } ;
struct sway_seat {int cursor; int wlr_seat; } ;
struct sway_node {scalar_t__ type; TYPE_2__* sway_container; } ;
struct TYPE_4__ {struct wlr_xwayland* wlr_xwayland; } ;
struct TYPE_6__ {int pointer_constraints; TYPE_1__ xwayland; } ;
struct TYPE_5__ {struct sway_view* view; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sway_seat*,int ) ;
 int FUNC_1 (struct sway_seat*,int ) ;
 int FUNC_2 (struct sway_node*,struct sway_seat*) ;
 int FUNC_3 (struct sway_seat*,int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (int ,struct wlr_pointer_constraint_v1*) ;
 struct wlr_pointer_constraint_v1* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct wlr_xwayland*,int ) ;

__attribute__((used)) static void FUNC_7(struct sway_node *VAR_3, struct sway_seat *VAR_4) {
 FUNC_2(VAR_3, VAR_4);

 struct sway_view *VAR_5 = VAR_3->type == VAR_0 ?
  VAR_3->sway_container->view : ((void*)0);

 if (VAR_5 && FUNC_0(VAR_4, VAR_5->surface)) {







  FUNC_1(VAR_4, VAR_5->surface);
  FUNC_3(VAR_4, VAR_5->surface);

  struct wlr_pointer_constraint_v1 *VAR_6 =
   FUNC_5(
    VAR_2.pointer_constraints, VAR_5->surface, VAR_4->wlr_seat);
  FUNC_4(VAR_4->cursor, VAR_6);
 }
}
