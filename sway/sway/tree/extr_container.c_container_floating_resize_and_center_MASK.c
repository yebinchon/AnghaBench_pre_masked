
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct sway_workspace {scalar_t__ width; scalar_t__ height; scalar_t__ y; scalar_t__ x; TYPE_1__* output; } ;
struct sway_container {scalar_t__ width; scalar_t__ height; scalar_t__ content_width; scalar_t__ content_height; int border_top; int border_bottom; int border_left; int border_right; scalar_t__ content_y; scalar_t__ content_x; scalar_t__ y; scalar_t__ x; int view; struct sway_workspace* workspace; } ;
struct TYPE_4__ {int output_layout; } ;
struct TYPE_3__ {int wlr_output; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 TYPE_2__* VAR_0 ;
 struct wlr_box* FUNC_2 (int ,int ) ;

void FUNC_3(struct sway_container *VAR_1) {
 struct sway_workspace *VAR_2 = VAR_1->workspace;
 if (!VAR_2) {

  FUNC_1(VAR_1);
  return;
 }

 struct wlr_box *VAR_3 = FUNC_2(VAR_0->output_layout,
   VAR_2->output->wlr_output);
 if (!VAR_3) {

  VAR_1->x = 0;
  VAR_1->y = 0;
  VAR_1->width = 0;
  VAR_1->height = 0;
  return;
 }

 FUNC_1(VAR_1);
 if (!VAR_1->view) {
  if (VAR_1->width > VAR_2->width || VAR_1->height > VAR_2->height) {
   VAR_1->x = VAR_3->x + (VAR_3->width - VAR_1->width) / 2;
   VAR_1->y = VAR_3->y + (VAR_3->height - VAR_1->height) / 2;
  } else {
   VAR_1->x = VAR_2->x + (VAR_2->width - VAR_1->width) / 2;
   VAR_1->y = VAR_2->y + (VAR_2->height - VAR_1->height) / 2;
  }
 } else {
  if (VAR_1->content_width > VAR_2->width
    || VAR_1->content_height > VAR_2->height) {
   VAR_1->content_x = VAR_3->x + (VAR_3->width - VAR_1->content_width) / 2;
   VAR_1->content_y = VAR_3->y + (VAR_3->height - VAR_1->content_height) / 2;
  } else {
   VAR_1->content_x = VAR_2->x + (VAR_2->width - VAR_1->content_width) / 2;
   VAR_1->content_y = VAR_2->y + (VAR_2->height - VAR_1->content_height) / 2;
  }


  VAR_1->border_top = VAR_1->border_bottom = 1;
  VAR_1->border_left = VAR_1->border_right = 1;

  FUNC_0(VAR_1);
 }
}
