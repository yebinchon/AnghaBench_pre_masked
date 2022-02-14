
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct wlr_box {scalar_t__ y; scalar_t__ x; } ;
struct sway_output {int wlr_output; } ;
struct TYPE_4__ {int output_layout; TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_output*,scalar_t__,scalar_t__,struct wlr_surface*,int) ;
 TYPE_2__* VAR_0 ;
 struct wlr_box* FUNC_1 (int ,int ) ;

void FUNC_2(struct wlr_surface *VAR_1, double VAR_2, double VAR_3,
  bool VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->outputs->length; ++VAR_5) {
  struct sway_output *VAR_6 = VAR_0->outputs->items[VAR_5];
  struct wlr_box *VAR_7 = FUNC_1(
   VAR_0->output_layout, VAR_6->wlr_output);
  FUNC_0(VAR_6, VAR_2 - VAR_7->x,
   VAR_3 - VAR_7->y, VAR_1, VAR_4);
 }
}
