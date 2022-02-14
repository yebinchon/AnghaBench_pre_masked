
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_xdg_decoration {int wlr_xdg_decoration; } ;


 int VAR_0 ;
 struct sway_xdg_decoration* VAR_1 ;
 int VAR_2 ;
 struct sway_xdg_decoration* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_3,
  void *VAR_4) {
 struct sway_xdg_decoration *VAR_5 =
  FUNC_0(VAR_3, VAR_5, VAR_2);
 FUNC_1(VAR_5->wlr_xdg_decoration,
   VAR_0);
}
