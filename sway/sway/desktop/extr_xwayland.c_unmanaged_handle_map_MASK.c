
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wlr_xwayland_surface {TYPE_6__* surface; int y; int x; } ;
struct wlr_xwayland {int dummy; } ;
struct wl_listener {int dummy; } ;
struct TYPE_12__ {int notify; } ;
struct sway_xwayland_unmanaged {int ly; int lx; TYPE_4__ commit; int link; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_seat {int wlr_seat; } ;
struct TYPE_9__ {int prev; } ;
struct TYPE_15__ {TYPE_1__ xwayland_unmanaged; } ;
struct TYPE_10__ {int commit; } ;
struct TYPE_14__ {TYPE_2__ events; } ;
struct TYPE_11__ {struct wlr_xwayland* wlr_xwayland; } ;
struct TYPE_13__ {TYPE_3__ xwayland; } ;


 int FUNC_0 (TYPE_6__*,int ,int ,int) ;
 struct sway_seat* FUNC_1 () ;
 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_2 (struct sway_seat*,TYPE_6__*,int) ;
 TYPE_5__ VAR_2 ;
 struct sway_xwayland_unmanaged* VAR_3 ;
 int VAR_4 ;
 struct sway_xwayland_unmanaged* FUNC_3 (struct wl_listener*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_6 (struct wlr_xwayland_surface*) ;
 int FUNC_7 (struct wlr_xwayland*,int ) ;

__attribute__((used)) static void FUNC_8(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_xwayland_unmanaged *VAR_7 =
  FUNC_3(VAR_5, VAR_7, VAR_0);
 struct wlr_xwayland_surface *VAR_8 = VAR_7->wlr_xwayland_surface;

 FUNC_4(VAR_1->xwayland_unmanaged.prev, &VAR_7->link);

 FUNC_5(&VAR_8->surface->events.commit, &VAR_7->commit);
 VAR_7->commit.notify = VAR_4;

 VAR_7->lx = VAR_8->x;
 VAR_7->ly = VAR_8->y;
 FUNC_0(VAR_8->surface, VAR_7->lx, VAR_7->ly, 1);

 if (FUNC_6(VAR_8)) {
  struct sway_seat *VAR_9 = FUNC_1();
  struct wlr_xwayland *VAR_10 = VAR_2.xwayland.wlr_xwayland;
  FUNC_7(VAR_10, VAR_9->wlr_seat);
  FUNC_2(VAR_9, VAR_8->surface, 0);
 }
}
