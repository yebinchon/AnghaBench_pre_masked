
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_xwayland_surface {int surface; int y; int x; } ;
struct wl_listener {int dummy; } ;
struct TYPE_5__ {int link; } ;
struct sway_xwayland_unmanaged {TYPE_1__ commit; int link; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_seat {TYPE_3__* wlr_seat; } ;
struct sway_node {int dummy; } ;
struct TYPE_8__ {int node; } ;
struct TYPE_6__ {int focused_surface; } ;
struct TYPE_7__ {TYPE_2__ keyboard_state; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 struct sway_seat* FUNC_1 () ;
 TYPE_4__* VAR_0 ;
 struct sway_node* FUNC_2 (struct sway_seat*,int *) ;
 int FUNC_3 (struct sway_seat*,struct sway_node*) ;
 struct sway_xwayland_unmanaged* VAR_1 ;
 int VAR_2 ;
 struct sway_xwayland_unmanaged* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_xwayland_unmanaged *VAR_5 =
  FUNC_4(VAR_3, VAR_5, VAR_2);
 struct wlr_xwayland_surface *VAR_6 = VAR_5->wlr_xwayland_surface;
 FUNC_0(VAR_6->surface, VAR_6->x, VAR_6->y, 1);
 FUNC_5(&VAR_5->link);
 FUNC_5(&VAR_5->commit.link);

 struct sway_seat *VAR_7 = FUNC_1();
 if (VAR_7->wlr_seat->keyboard_state.focused_surface ==
   VAR_6->surface) {

  struct sway_node *VAR_8 = FUNC_2(VAR_7, &VAR_0->node);
  if (VAR_8) {

   FUNC_3(VAR_7, ((void*)0));
   FUNC_3(VAR_7, VAR_8);
  }
 }
}
