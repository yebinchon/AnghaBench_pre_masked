
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {scalar_t__ height; int width; scalar_t__ y; int x; } ;
struct sway_container {scalar_t__ height; int width; scalar_t__ y; int x; scalar_t__ view; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(list_t *VAR_0, struct wlr_box *VAR_1) {
 if (!VAR_0->length) {
  return;
 }
 for (int VAR_2 = 0; VAR_2 < VAR_0->length; ++VAR_2) {
  struct sway_container *VAR_3 = VAR_0->items[VAR_2];
  int VAR_4 = VAR_3->view ? 0 : FUNC_0();
  VAR_3->x = VAR_1->x;
  VAR_3->y = VAR_1->y + VAR_4;
  VAR_3->width = VAR_1->width;
  VAR_3->height = VAR_1->height - VAR_4;
 }
}
