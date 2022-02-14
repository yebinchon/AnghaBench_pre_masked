
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_box {int height; int width; int y; int x; } ;
struct sway_output {TYPE_3__* wlr_output; scalar_t__ enabled; } ;
struct TYPE_5__ {int height; int width; int y; int x; } ;
struct sway_container {int outputs; scalar_t__ view; TYPE_1__ current; } ;
struct TYPE_8__ {TYPE_2__* outputs; } ;
struct TYPE_7__ {int scale; } ;
struct TYPE_6__ {int length; struct sway_output** items; } ;


 int VAR_0 ;
 struct sway_output* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int ,struct sway_output*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct sway_output*) ;
 int FUNC_6 (struct sway_output*,struct wlr_box*) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,struct sway_container*,struct sway_output*) ;
 int FUNC_8 (scalar_t__,int ,TYPE_3__*) ;
 int FUNC_9 (struct wlr_box*,struct wlr_box*,struct wlr_box*) ;

void FUNC_10(struct sway_container *VAR_4) {
 struct wlr_box VAR_5 = {
  .x = VAR_4->current.x,
  .y = VAR_4->current.y,
  .width = VAR_4->current.width,
  .height = VAR_4->current.height,
 };
 struct sway_output *VAR_6 = FUNC_0(VAR_4);

 for (int VAR_7 = 0; VAR_7 < VAR_1->outputs->length; ++VAR_7) {
  struct sway_output *VAR_8 = VAR_1->outputs->items[VAR_7];
  struct wlr_box VAR_9;
  FUNC_6(VAR_8, &VAR_9);
  struct wlr_box VAR_10;
  bool VAR_11 =
   FUNC_9(&VAR_10, &VAR_5, &VAR_9);
  int VAR_12 = FUNC_5(VAR_4->outputs, VAR_8);

  if (VAR_11 && VAR_12 == -1) {

   FUNC_7(VAR_0, "Container %p entered output %p", VAR_4, VAR_8);
   if (VAR_4->view) {
    FUNC_8(VAR_4->view,
      VAR_2, VAR_8->wlr_output);
   }
   FUNC_3(VAR_4->outputs, VAR_8);
  } else if (!VAR_11 && VAR_12 != -1) {

   FUNC_7(VAR_0, "Container %p left output %p", VAR_4, VAR_8);
   if (VAR_4->view) {
    FUNC_8(VAR_4->view,
     VAR_3, VAR_8->wlr_output);
   }
   FUNC_4(VAR_4->outputs, VAR_12);
  }
 }
 struct sway_output *VAR_13 = FUNC_0(VAR_4);
 double VAR_14 = VAR_6 && VAR_6->enabled ?
  VAR_6->wlr_output->scale : -1;
 double VAR_15 = VAR_13 ? VAR_13->wlr_output->scale : -1;
 if (VAR_14 != VAR_15) {
  FUNC_2(VAR_4);
  FUNC_1(VAR_4);
 }
}
