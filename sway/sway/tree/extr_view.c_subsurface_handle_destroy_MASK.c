
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_view_child {int dummy; } ;
struct sway_subsurface {struct sway_view_child child; } ;


 int VAR_0 ;
 struct sway_subsurface* VAR_1 ;
 int FUNC_0 (struct sway_view_child*) ;
 struct sway_subsurface* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_subsurface *VAR_4 =
  FUNC_1(VAR_2, VAR_4, VAR_0);
 struct sway_view_child *VAR_5 = &VAR_4->child;
 FUNC_0(VAR_5);
}
