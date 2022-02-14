
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_box {int height; int width; int y; int x; } ;
struct sway_output {int dummy; } ;
struct sway_container {int height; int width; int y; int x; } ;
struct TYPE_6__ {scalar_t__ reloading; } ;
struct TYPE_5__ {TYPE_1__* outputs; int height; int width; int y; int x; struct sway_container* fullscreen_global; int output_layout; } ;
struct TYPE_4__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_output*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct wlr_box* FUNC_2 (int ,int *) ;

void FUNC_3(void) {
 if (VAR_0->reloading) {
  return;
 }
 const struct wlr_box *VAR_2 =
  FUNC_2(VAR_1->output_layout, ((void*)0));
 VAR_1->x = VAR_2->x;
 VAR_1->y = VAR_2->y;
 VAR_1->width = VAR_2->width;
 VAR_1->height = VAR_2->height;

 if (VAR_1->fullscreen_global) {
  struct sway_container *VAR_3 = VAR_1->fullscreen_global;
  VAR_3->x = VAR_1->x;
  VAR_3->y = VAR_1->y;
  VAR_3->width = VAR_1->width;
  VAR_3->height = VAR_1->height;
  FUNC_0(VAR_3);
 } else {
  for (int VAR_4 = 0; VAR_4 < VAR_1->outputs->length; ++VAR_4) {
   struct sway_output *VAR_5 = VAR_1->outputs->items[VAR_4];
   FUNC_1(VAR_5);
  }
 }
}
