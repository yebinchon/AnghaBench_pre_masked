
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct sway_node {struct sway_container* sway_container; } ;
struct sway_container {int dummy; } ;







 struct sway_container* FUNC_0 (struct sway_node*,double,double,struct wlr_surface**,double*,double*) ;
 struct sway_container* FUNC_1 (struct sway_node*,double,double,struct wlr_surface**,double*,double*) ;
 struct sway_container* FUNC_2 (struct sway_node*,double,double,struct wlr_surface**,double*,double*) ;
 int FUNC_3 (struct sway_node*) ;
 int FUNC_4 (struct sway_node*) ;
 scalar_t__ FUNC_5 (struct sway_node*) ;
 int FUNC_6 (struct sway_container*,double,double,struct wlr_surface**,double*,double*) ;

struct sway_container *FUNC_7(struct sway_node *VAR_0,
  double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 if (FUNC_5(VAR_0)) {
  FUNC_6(VAR_0->sway_container, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return VAR_0->sway_container;
 }
 if (!FUNC_3(VAR_0)) {
  return ((void*)0);
 }
 switch (FUNC_4(VAR_0)) {
 case 132:
 case 128:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 129:
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 130:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 131:
  return ((void*)0);
 }
 return ((void*)0);
}
