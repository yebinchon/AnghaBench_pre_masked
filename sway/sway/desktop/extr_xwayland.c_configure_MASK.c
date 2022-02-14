
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wlr_xwayland_surface {int dummy; } ;
struct sway_xwayland_view {int dummy; } ;
struct sway_view {struct wlr_xwayland_surface* wlr_xwayland_surface; } ;


 int FUNC_0 (struct wlr_xwayland_surface*,double,double,int,int) ;
 struct sway_xwayland_view* FUNC_1 (struct sway_view*) ;

__attribute__((used)) static uint32_t FUNC_2(struct sway_view *VAR_0, double VAR_1, double VAR_2, int VAR_3,
  int VAR_4) {
 struct sway_xwayland_view *VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 == ((void*)0)) {
  return 0;
 }
 struct wlr_xwayland_surface *VAR_6 = VAR_0->wlr_xwayland_surface;

 FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);


 return 0;
}
