
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_box {int height; int width; int y; int x; } ;
struct sway_workspace {int dummy; } ;
struct sway_output {TYPE_1__* workspaces; int height; int width; int ly; int lx; int wlr_output; } ;
struct TYPE_6__ {scalar_t__ reloading; } ;
struct TYPE_5__ {int output_layout; } ;
struct TYPE_4__ {int length; struct sway_workspace** items; } ;


 int FUNC_0 (struct sway_workspace*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct wlr_box* FUNC_1 (int ,int ) ;

void FUNC_2(struct sway_output *VAR_2) {
 if (VAR_0->reloading) {
  return;
 }
 const struct wlr_box *VAR_3 = FUNC_1(
   VAR_1->output_layout, VAR_2->wlr_output);
 VAR_2->lx = VAR_3->x;
 VAR_2->ly = VAR_3->y;
 VAR_2->width = VAR_3->width;
 VAR_2->height = VAR_3->height;

 for (int VAR_4 = 0; VAR_4 < VAR_2->workspaces->length; ++VAR_4) {
  struct sway_workspace *VAR_5 = VAR_2->workspaces->items[VAR_4];
  FUNC_0(VAR_5);
 }
}
