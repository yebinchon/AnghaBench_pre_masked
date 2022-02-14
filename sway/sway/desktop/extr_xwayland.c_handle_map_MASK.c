
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_xwayland_surface {int fullscreen; TYPE_3__* surface; int height; int width; int * data; scalar_t__ override_redirect; } ;
struct wl_listener {int dummy; } ;
struct TYPE_5__ {int notify; } ;
struct sway_view {int natural_height; int natural_width; } ;
struct sway_xwayland_view {TYPE_2__ commit; int destroy; struct sway_view view; } ;
struct sway_xwayland_unmanaged {int map; } ;
struct TYPE_4__ {int commit; } ;
struct TYPE_6__ {TYPE_1__ events; } ;


 struct sway_xwayland_unmanaged* FUNC_0 (struct wlr_xwayland_surface*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct sway_view*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct wlr_xwayland_surface*) ;
 int FUNC_4 (struct sway_view*,TYPE_3__*,int ,int *,int) ;
 struct sway_xwayland_view* FUNC_5 (struct wl_listener*,int ,int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 struct sway_xwayland_view* VAR_2 ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_xwayland_view *VAR_5 =
  FUNC_5(VAR_3, VAR_5, VAR_1);
 struct wlr_xwayland_surface *VAR_6 = VAR_4;
 struct sway_view *VAR_7 = &VAR_5->view;

 if (VAR_6->override_redirect) {


  FUNC_1(&VAR_5->destroy, VAR_7);
  VAR_6->data = ((void*)0);
  struct sway_xwayland_unmanaged *VAR_8 = FUNC_0(VAR_6);
  FUNC_3(&VAR_8->map, VAR_6);
  return;
 }

 VAR_7->natural_width = VAR_6->width;
 VAR_7->natural_height = VAR_6->height;



 FUNC_6(&VAR_6->surface->events.commit, &VAR_5->commit);
 VAR_5->commit.notify = VAR_0;


 FUNC_4(VAR_7, VAR_6->surface, VAR_6->fullscreen, ((void*)0), 0);

 FUNC_2();
}
