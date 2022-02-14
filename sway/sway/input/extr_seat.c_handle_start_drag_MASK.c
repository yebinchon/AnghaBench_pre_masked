
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int destroy; int map; int unmap; } ;
struct wlr_drag_icon {TYPE_3__ events; TYPE_2__* surface; struct sway_drag_icon* data; } ;
struct wlr_drag {struct wlr_drag_icon* icon; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {int dummy; } ;
struct TYPE_9__ {int notify; } ;
struct sway_drag_icon {int link; TYPE_4__ destroy; TYPE_4__ map; TYPE_4__ unmap; TYPE_4__ surface_commit; struct wlr_drag_icon* wlr_drag_icon; struct sway_seat* seat; } ;
struct TYPE_10__ {int drag_icons; } ;
struct TYPE_6__ {int commit; } ;
struct TYPE_7__ {TYPE_1__ events; } ;


 int VAR_0 ;
 struct sway_drag_icon* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sway_drag_icon*) ;
 TYPE_5__* VAR_5 ;
 struct sway_seat* VAR_6 ;
 int FUNC_2 (struct sway_seat*) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 struct sway_seat* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_8, void *VAR_9) {
 struct sway_seat *VAR_10 = FUNC_4(VAR_8, VAR_10, VAR_7);
 struct wlr_drag *VAR_11 = VAR_9;
 struct wlr_drag_icon *VAR_12 = VAR_11->icon;
 if (VAR_12 == ((void*)0)) {
  return;
 }

 struct sway_drag_icon *VAR_13 = FUNC_0(1, sizeof(struct sway_drag_icon));
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_0, "Allocation failed");
  return;
 }
 VAR_13->seat = VAR_10;
 VAR_13->wlr_drag_icon = VAR_12;
 VAR_12->data = VAR_13;

 VAR_13->surface_commit.notify = VAR_3;
 FUNC_6(&VAR_12->surface->events.commit, &VAR_13->surface_commit);
 VAR_13->unmap.notify = VAR_4;
 FUNC_6(&VAR_12->events.unmap, &VAR_13->unmap);
 VAR_13->map.notify = VAR_2;
 FUNC_6(&VAR_12->events.map, &VAR_13->map);
 VAR_13->destroy.notify = VAR_1;
 FUNC_6(&VAR_12->events.destroy, &VAR_13->destroy);

 FUNC_5(&VAR_5->drag_icons, &VAR_13->link);

 FUNC_1(VAR_13);
 FUNC_2(VAR_10);
}
