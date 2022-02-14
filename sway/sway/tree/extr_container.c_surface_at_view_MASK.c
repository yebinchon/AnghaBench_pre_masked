
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct TYPE_2__ {double x; double y; } ;
struct sway_view {int type; int wlr_xdg_surface; int surface; TYPE_1__ geometry; } ;
struct sway_container {double surface_x; double surface_y; struct sway_view* view; } ;




 int FUNC_0 (struct sway_view*,char*) ;
 struct wlr_surface* FUNC_1 (int ,double,double,double*,double*) ;
 struct wlr_surface* FUNC_2 (int ,double,double,double*,double*) ;

__attribute__((used)) static struct sway_container *FUNC_3(struct sway_container *VAR_0, double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 if (!FUNC_0(VAR_0->view, "Expected a view")) {
  return ((void*)0);
 }
 struct sway_view *VAR_6 = VAR_0->view;
 double VAR_7 = VAR_1 - VAR_0->surface_x + VAR_6->geometry.x;
 double VAR_8 = VAR_2 - VAR_0->surface_y + VAR_6->geometry.y;

 double VAR_9, VAR_10;
 struct wlr_surface *VAR_11 = ((void*)0);
 switch (VAR_6->type) {






 case 129:
  VAR_11 = FUNC_2(
    VAR_6->wlr_xdg_surface,
    VAR_7, VAR_8, &VAR_9, &VAR_10);
  break;
 }
 if (VAR_11) {
  *VAR_4 = VAR_9;
  *VAR_5 = VAR_10;
  *VAR_3 = VAR_11;
  return VAR_0;
 }
 return ((void*)0);
}
