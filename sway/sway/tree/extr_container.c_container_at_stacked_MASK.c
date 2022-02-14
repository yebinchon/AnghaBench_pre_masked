
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_box {double y; double height; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct sway_container {int dummy; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 () ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (struct sway_node*,struct wlr_box*) ;
 TYPE_1__* FUNC_3 (struct sway_node*) ;
 struct sway_node* FUNC_4 (struct sway_seat*,struct sway_node*) ;
 struct sway_container* FUNC_5 (struct sway_node*,double,double,struct wlr_surface**,double*,double*) ;

__attribute__((used)) static struct sway_container *FUNC_6(struct sway_node *VAR_0,
  double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 struct wlr_box VAR_6;
 FUNC_2(VAR_0, &VAR_6);
 if (VAR_2 < VAR_6.y || VAR_2 > VAR_6.y + VAR_6.height) {
  return ((void*)0);
 }
 struct sway_seat *VAR_7 = FUNC_1();
 list_t *VAR_8 = FUNC_3(VAR_0);


 int VAR_9 = FUNC_0();
 if (VAR_9 > 0) {
  int VAR_10 = (VAR_2 - VAR_6.y) / VAR_9;
  if (VAR_10 < VAR_8->length) {
   struct sway_container *VAR_11 = VAR_8->items[VAR_10];
   return VAR_11;
  }
 }


 struct sway_node *VAR_12 = FUNC_4(VAR_7, VAR_0);
 return VAR_12 ? FUNC_5(VAR_12, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5) : ((void*)0);
}
