
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_xdg_toplevel_resize_event {scalar_t__ serial; int edges; TYPE_2__* seat; } ;
struct wl_listener {int dummy; } ;
struct sway_view {int container; } ;
struct sway_xdg_shell_view {struct sway_view view; } ;
struct sway_seat {scalar_t__ last_button_serial; } ;
struct TYPE_4__ {TYPE_1__* seat; } ;
struct TYPE_3__ {struct sway_seat* data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sway_seat*,int ,int ) ;
 struct sway_xdg_shell_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 struct sway_xdg_shell_view* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_shell_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 if (!FUNC_0(VAR_5->container)) {
  return;
 }
 struct wlr_xdg_toplevel_resize_event *VAR_6 = VAR_3;
 struct sway_seat *VAR_7 = VAR_6->seat->seat->data;
 if (VAR_6->serial == VAR_7->last_button_serial) {
  FUNC_1(VAR_7, VAR_5->container, VAR_6->edges);
 }
}
