
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct sway_container {double x; double width; double y; double height; } ;
struct TYPE_2__ {int y; int x; } ;


 int FUNC_0 (struct sway_container*,struct wlr_box*) ;
 scalar_t__ FUNC_1 (struct wlr_box*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,double,double) ;

void FUNC_3(struct sway_cursor *VAR_0,
  struct sway_container *VAR_1) {
 if (!VAR_1) {
  return;
 }

 struct wlr_box VAR_2;
 FUNC_0(VAR_1, &VAR_2);
 if (FUNC_1(&VAR_2, VAR_0->cursor->x, VAR_0->cursor->y)) {
  return;
 }

 double VAR_3 = VAR_1->x + VAR_1->width / 2.0;
 double VAR_4 = VAR_1->y + VAR_1->height / 2.0;

 FUNC_2(VAR_0->cursor, ((void*)0), VAR_3, VAR_4);
}
