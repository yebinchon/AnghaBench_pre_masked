
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xdg_surface {int configure_serial; } ;
struct wlr_box {scalar_t__ width; scalar_t__ height; } ;
struct wl_listener {int dummy; } ;
struct sway_view {struct wlr_box geometry; struct sway_container* container; struct wlr_xdg_surface* wlr_xdg_surface; } ;
struct sway_xdg_shell_view {struct sway_view view; } ;
struct TYPE_2__ {scalar_t__ instruction; } ;
struct sway_container {scalar_t__ surface_width; scalar_t__ surface_height; TYPE_1__ node; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*) ;
 int FUNC_1 (struct wlr_box*,struct wlr_box*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sway_view*,int ) ;
 int FUNC_4 (struct sway_view*) ;
 int FUNC_5 (struct sway_view*,scalar_t__,scalar_t__) ;
 struct sway_xdg_shell_view* FUNC_6 (struct wl_listener*,int ,int ) ;
 int FUNC_7 (struct wlr_xdg_surface*,struct wlr_box*) ;
 struct sway_xdg_shell_view* VAR_1 ;

__attribute__((used)) static void FUNC_8(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_shell_view *VAR_4 =
  FUNC_6(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 struct wlr_xdg_surface *VAR_6 = VAR_5->wlr_xdg_surface;

 if (VAR_5->container->node.instruction) {
  FUNC_7(VAR_6, &VAR_5->geometry);
  FUNC_3(VAR_5,
    VAR_6->configure_serial);
 } else {
  struct wlr_box VAR_7;
  FUNC_7(VAR_6, &VAR_7);
  struct sway_container *VAR_8 = VAR_5->container;

  if ((VAR_7.width != VAR_8->surface_width ||
     VAR_7.height != VAR_8->surface_height)) {

   FUNC_0(VAR_5);
   FUNC_5(VAR_5, VAR_7.width, VAR_7.height);
   FUNC_1(&VAR_5->geometry, &VAR_7, sizeof(struct wlr_box));
   FUNC_0(VAR_5);
   FUNC_2();
  } else {
   FUNC_1(&VAR_5->geometry, &VAR_7, sizeof(struct wlr_box));
  }
 }

 FUNC_4(VAR_5);
}
