
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unmap; int map; int destroy; int new_popup; } ;
struct wlr_xdg_surface {TYPE_1__ events; int surface; } ;
struct wlr_xdg_popup {struct wlr_xdg_surface* base; } ;
struct TYPE_5__ {int notify; } ;
struct TYPE_6__ {TYPE_2__ surface_unmap; TYPE_2__ surface_map; } ;
struct sway_xdg_popup {TYPE_3__ child; TYPE_2__ destroy; TYPE_2__ new_popup; struct wlr_xdg_surface* wlr_xdg_surface; } ;
struct sway_view {int dummy; } ;


 struct sway_xdg_popup* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sway_xdg_popup*) ;
 int FUNC_2 (TYPE_3__*,int *,struct sway_view*,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static struct sway_xdg_popup *FUNC_4(
  struct wlr_xdg_popup *VAR_3, struct sway_view *VAR_4) {
 struct wlr_xdg_surface *VAR_5 = VAR_3->base;

 struct sway_xdg_popup *VAR_6 =
  FUNC_0(1, sizeof(struct sway_xdg_popup));
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_2(&VAR_6->child, &VAR_2, VAR_4, VAR_5->surface);
 VAR_6->wlr_xdg_surface = VAR_5;

 FUNC_3(&VAR_5->events.new_popup, &VAR_6->new_popup);
 VAR_6->new_popup.notify = VAR_1;
 FUNC_3(&VAR_5->events.destroy, &VAR_6->destroy);
 VAR_6->destroy.notify = VAR_0;

 FUNC_3(&VAR_5->events.map, &VAR_6->child.surface_map);
 FUNC_3(&VAR_5->events.unmap, &VAR_6->child.surface_unmap);

 FUNC_1(VAR_6);

 return VAR_6;
}
