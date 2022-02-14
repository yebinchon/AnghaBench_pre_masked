
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int destroy; int unmap; int map; int request_configure; } ;
struct wlr_xwayland_surface {TYPE_1__ events; } ;
struct TYPE_4__ {int notify; } ;
struct sway_xwayland_unmanaged {TYPE_2__ destroy; TYPE_2__ unmap; TYPE_2__ map; TYPE_2__ request_configure; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;


 int VAR_0 ;
 struct sway_xwayland_unmanaged* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static struct sway_xwayland_unmanaged *FUNC_3(
  struct wlr_xwayland_surface *VAR_5) {
 struct sway_xwayland_unmanaged *VAR_6 =
  FUNC_0(1, sizeof(struct sway_xwayland_unmanaged));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_0, "Allocation failed");
  return ((void*)0);
 }

 VAR_6->wlr_xwayland_surface = VAR_5;

 FUNC_2(&VAR_5->events.request_configure,
  &VAR_6->request_configure);
 VAR_6->request_configure.notify = VAR_3;
 FUNC_2(&VAR_5->events.map, &VAR_6->map);
 VAR_6->map.notify = VAR_2;
 FUNC_2(&VAR_5->events.unmap, &VAR_6->unmap);
 VAR_6->unmap.notify = VAR_4;
 FUNC_2(&VAR_5->events.destroy, &VAR_6->destroy);
 VAR_6->destroy.notify = VAR_1;

 return VAR_6;
}
