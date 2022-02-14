
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_box {int height; int width; int y; int x; } ;
struct sway_node {int dummy; } ;
struct sway_container {int node; int height; int width; int y; int x; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;


 TYPE_1__* FUNC_0 (struct sway_node*) ;
 struct sway_container* FUNC_1 (int *,double,double,struct wlr_surface**,double*,double*) ;
 scalar_t__ FUNC_2 (struct wlr_box*,double,double) ;

__attribute__((used)) static struct sway_container *FUNC_3(struct sway_node *VAR_0,
  double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 list_t *VAR_6 = FUNC_0(VAR_0);
 for (int VAR_7 = 0; VAR_7 < VAR_6->length; ++VAR_7) {
  struct sway_container *VAR_8 = VAR_6->items[VAR_7];
  struct wlr_box VAR_9 = {
   .x = VAR_8->x,
   .y = VAR_8->y,
   .width = VAR_8->width,
   .height = VAR_8->height,
  };
  if (FUNC_2(&VAR_9, VAR_1, VAR_2)) {
   return FUNC_1(&VAR_8->node, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  }
 }
 return ((void*)0);
}
