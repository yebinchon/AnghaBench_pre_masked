
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_box {int height; int width; int y; int x; } ;
struct sway_workspace {TYPE_3__* floating; } ;
struct sway_output {TYPE_2__* workspaces; } ;
struct sway_container {int node; int height; int width; int y; int x; } ;
struct TYPE_8__ {TYPE_1__* outputs; } ;
struct TYPE_7__ {int length; struct sway_container** items; } ;
struct TYPE_6__ {int length; struct sway_workspace** items; } ;
struct TYPE_5__ {int length; struct sway_output** items; } ;


 TYPE_4__* VAR_0 ;
 struct sway_container* FUNC_0 (int *,double,double,struct wlr_surface**,double*,double*) ;
 scalar_t__ FUNC_1 (struct wlr_box*,double,double) ;
 int FUNC_2 (struct sway_workspace*) ;

__attribute__((used)) static struct sway_container *FUNC_3(double VAR_1, double VAR_2,
  struct wlr_surface **VAR_3, double *VAR_4, double *VAR_5) {
 for (int VAR_6 = 0; VAR_6 < VAR_0->outputs->length; ++VAR_6) {
  struct sway_output *VAR_7 = VAR_0->outputs->items[VAR_6];
  for (int VAR_8 = 0; VAR_8 < VAR_7->workspaces->length; ++VAR_8) {
   struct sway_workspace *VAR_9 = VAR_7->workspaces->items[VAR_8];
   if (!FUNC_2(VAR_9)) {
    continue;
   }


   for (int VAR_10 = VAR_9->floating->length - 1; VAR_10 >= 0; --VAR_10) {
    struct sway_container *VAR_11 = VAR_9->floating->items[VAR_10];
    struct wlr_box VAR_12 = {
     .x = VAR_11->x,
     .y = VAR_11->y,
     .width = VAR_11->width,
     .height = VAR_11->height,
    };
    if (FUNC_1(&VAR_12, VAR_1, VAR_2)) {
     return FUNC_0(&VAR_11->node, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
    }
   }
  }
 }
 return ((void*)0);
}
