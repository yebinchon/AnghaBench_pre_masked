
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_subsurface {int dummy; } ;
struct wl_listener {int dummy; } ;
struct sway_view {int dummy; } ;


 int VAR_0 ;
 struct sway_view* VAR_1 ;
 int FUNC_0 (struct sway_view*,struct wlr_subsurface*) ;
 struct sway_view* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_view *VAR_4 =
  FUNC_1(VAR_2, VAR_4, VAR_0);
 struct wlr_subsurface *VAR_5 = VAR_3;
 FUNC_0(VAR_4, VAR_5);
}
