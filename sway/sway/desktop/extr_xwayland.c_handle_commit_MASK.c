
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_xwayland_surface {TYPE_1__* surface; } ;
struct wlr_surface_state {int height; int width; } ;
struct wlr_box {scalar_t__ width; scalar_t__ height; } ;
struct wl_listener {int dummy; } ;
struct sway_view {struct wlr_box geometry; struct sway_container* container; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;
struct sway_xwayland_view {struct sway_view view; } ;
struct TYPE_4__ {scalar_t__ instruction; } ;
struct sway_container {scalar_t__ surface_width; scalar_t__ surface_height; TYPE_2__ node; } ;
struct TYPE_3__ {struct wlr_surface_state current; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*) ;
 int FUNC_1 (struct sway_view*,struct wlr_box*) ;
 int FUNC_2 (struct wlr_box*,struct wlr_box*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sway_view*,int ,int ) ;
 int FUNC_5 (struct sway_view*) ;
 int FUNC_6 (struct sway_view*,scalar_t__,scalar_t__) ;
 struct sway_xwayland_view* FUNC_7 (struct wl_listener*,int ,int ) ;
 struct sway_xwayland_view* VAR_1 ;

__attribute__((used)) static void FUNC_8(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_view *VAR_4 =
  FUNC_7(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 struct wlr_xwayland_surface *VAR_6 = VAR_5->wlr_xwayland_surface;
 struct wlr_surface_state *VAR_7 = &VAR_6->surface->current;

 if (VAR_5->container->node.instruction) {
  FUNC_1(VAR_5, &VAR_5->geometry);
  FUNC_4(VAR_5,
    VAR_7->width, VAR_7->height);
 } else {
  struct wlr_box VAR_8;
  FUNC_1(VAR_5, &VAR_8);
  struct sway_container *VAR_9 = VAR_5->container;

  if ((VAR_8.width != VAR_9->surface_width ||
     VAR_8.height != VAR_9->surface_height)) {


   FUNC_0(VAR_5);
   FUNC_6(VAR_5, VAR_8.width, VAR_8.height);
   FUNC_2(&VAR_5->geometry, &VAR_8, sizeof(struct wlr_box));
   FUNC_0(VAR_5);
   FUNC_3();
  } else {
   FUNC_2(&VAR_5->geometry, &VAR_8, sizeof(struct wlr_box));
  }
 }

 FUNC_5(VAR_5);
}
