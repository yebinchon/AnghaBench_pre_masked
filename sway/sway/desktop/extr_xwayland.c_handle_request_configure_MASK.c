
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_xwayland_surface_configure_event {int height; int width; int y; int x; } ;
struct wlr_xwayland_surface {int mapped; } ;
struct wl_listener {int dummy; } ;
struct sway_view {TYPE_2__* container; int natural_height; int natural_width; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_xwayland_view {struct sway_view view; } ;
struct TYPE_4__ {int content_height; int content_width; int content_y; int content_x; } ;
struct TYPE_5__ {TYPE_1__ current; int node; int content_height; int content_width; int content_y; int content_x; } ;


 int FUNC_0 (struct sway_view*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct sway_xwayland_view* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (struct wlr_xwayland_surface*,int ,int ,int ,int ) ;
 struct sway_xwayland_view* VAR_1 ;

__attribute__((used)) static void FUNC_6(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_view *VAR_4 =
  FUNC_4(VAR_2, VAR_4, VAR_0);
 struct wlr_xwayland_surface_configure_event *VAR_5 = VAR_3;
 struct sway_view *VAR_6 = &VAR_4->view;
 struct wlr_xwayland_surface *VAR_7 = VAR_6->wlr_xwayland_surface;
 if (!VAR_7->mapped) {
  FUNC_5(VAR_7, VAR_5->x, VAR_5->y,
   VAR_5->width, VAR_5->height);
  return;
 }
 if (FUNC_2(VAR_6->container)) {

  VAR_6->natural_width = VAR_5->width;
  VAR_6->natural_height = VAR_5->height;
  FUNC_1(VAR_6->container);

  FUNC_0(VAR_6, VAR_6->container->content_x,
    VAR_6->container->content_y,
    VAR_6->container->content_width,
    VAR_6->container->content_height);
  FUNC_3(&VAR_6->container->node);
 } else {
  FUNC_0(VAR_6, VAR_6->container->current.content_x,
    VAR_6->container->current.content_y,
    VAR_6->container->current.content_width,
    VAR_6->container->current.content_height);
 }
}
