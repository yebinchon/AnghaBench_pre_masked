
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xdg_toplevel_set_fullscreen_event {scalar_t__ fullscreen; TYPE_1__* output; } ;
struct wlr_xdg_surface {scalar_t__ role; int mapped; } ;
struct wl_listener {int dummy; } ;
struct sway_view {int container; struct wlr_xdg_surface* wlr_xdg_surface; } ;
struct sway_xdg_shell_view {struct sway_view view; } ;
struct sway_workspace {int dummy; } ;
struct sway_output {int dummy; } ;
struct TYPE_2__ {struct sway_output* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct sway_workspace* FUNC_4 (struct sway_output*) ;
 int VAR_1 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 () ;
 struct sway_xdg_shell_view* FUNC_7 (struct wl_listener*,int ,int ) ;
 int FUNC_8 (struct sway_workspace*,int ) ;
 int FUNC_9 (struct sway_workspace*,int ) ;
 struct sway_xdg_shell_view* VAR_2 ;

__attribute__((used)) static void FUNC_10(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_xdg_shell_view *VAR_5 =
  FUNC_7(VAR_3, VAR_5, VAR_1);
 struct wlr_xdg_toplevel_set_fullscreen_event *VAR_6 = VAR_4;
 struct wlr_xdg_surface *VAR_7 =
  VAR_5->view.wlr_xdg_surface;
 struct sway_view *VAR_8 = &VAR_5->view;

 if (!FUNC_5(VAR_7->role == VAR_0,
    "xdg_shell requested fullscreen of surface with role %i",
    VAR_7->role)) {
  return;
 }
 if (!VAR_7->mapped) {
  return;
 }

 if (VAR_6->fullscreen && VAR_6->output && VAR_6->output->data) {
  struct sway_output *VAR_9 = VAR_6->output->data;
  struct sway_workspace *VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 && !FUNC_2(VAR_8->container)) {
   if (FUNC_1(VAR_8->container)) {
    FUNC_8(VAR_10, VAR_8->container);
   } else {
    FUNC_9(VAR_10, VAR_8->container);
   }
  }
 }

 FUNC_3(VAR_8->container, VAR_6->fullscreen);

 FUNC_0();
 FUNC_6();
}
