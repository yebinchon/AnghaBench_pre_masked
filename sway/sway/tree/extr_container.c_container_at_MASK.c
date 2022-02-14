
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct sway_workspace {int node; } ;
struct sway_seat {int dummy; } ;
struct sway_container {scalar_t__ view; } ;


 scalar_t__ FUNC_0 (struct sway_container*) ;
 struct sway_container* FUNC_1 (double,double,struct wlr_surface**,double*,double*) ;
 struct sway_seat* FUNC_2 () ;
 struct sway_container* FUNC_3 (struct sway_seat*) ;
 struct sway_container* FUNC_4 (struct sway_container*,double,double,struct wlr_surface**,double*,double*) ;
 scalar_t__ FUNC_5 (struct wlr_surface*) ;
 struct sway_container* FUNC_6 (int *,double,double,struct wlr_surface**,double*,double*) ;

struct sway_container *FUNC_7(struct sway_workspace *VAR_0,
  double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 struct sway_container *VAR_6;

 struct sway_seat *VAR_7 = FUNC_2();
 struct sway_container *VAR_8 = FUNC_3(VAR_7);
 bool VAR_9 = VAR_8 && FUNC_0(VAR_8);

 if (VAR_8 && VAR_8->view) {
  VAR_6 = FUNC_4(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6 && FUNC_5(*VAR_3)) {
   return VAR_6;
  }
  *VAR_3 = ((void*)0);
 }

 if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3 ,VAR_4 ,VAR_5))) {
  return VAR_6;
 }

 if (VAR_8 && VAR_8->view && !VAR_9) {
  if ((VAR_6 = FUNC_4(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))) {
   return VAR_6;
  }
 }

 if ((VAR_6 = FUNC_6(&VAR_0->node, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))) {
  return VAR_6;
 }
 return ((void*)0);
}
