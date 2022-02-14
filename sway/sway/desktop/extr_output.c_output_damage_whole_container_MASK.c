
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {int height; int width; int y; int x; } ;
struct sway_output {int damage; TYPE_1__* wlr_output; scalar_t__ ly; scalar_t__ lx; } ;
struct TYPE_4__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct sway_container {scalar_t__ view; TYPE_2__ current; } ;
struct TYPE_3__ {int scale; } ;


 int FUNC_0 (struct sway_container*,int (*) (struct sway_container*,struct sway_output*),struct sway_output*) ;
 int FUNC_1 (struct sway_container*,struct sway_output*) ;
 int FUNC_2 (struct wlr_box*,int ) ;
 int FUNC_3 (int ,struct wlr_box*) ;

void FUNC_4(struct sway_output *VAR_0,
  struct sway_container *VAR_1) {

 struct wlr_box VAR_2 = {
  .x = VAR_1->current.x - VAR_0->lx - 1,
  .y = VAR_1->current.y - VAR_0->ly - 1,
  .width = VAR_1->current.width + 2,
  .height = VAR_1->current.height + 2,
 };
 FUNC_2(&VAR_2, VAR_0->wlr_output->scale);
 FUNC_3(VAR_0->damage, &VAR_2);

 if (VAR_1->view) {
  FUNC_1(VAR_1, VAR_0);
 } else {
  FUNC_0(VAR_1, FUNC_1, VAR_0);
 }
}
