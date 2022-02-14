
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_view {int dummy; } ;
struct sway_xdg_shell_view {struct sway_view view; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*) ;
 int FUNC_1 (struct sway_view*,int) ;
 struct sway_xdg_shell_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 struct sway_xdg_shell_view* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_shell_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 FUNC_1(VAR_5, 0);
 FUNC_0(VAR_5);
}
