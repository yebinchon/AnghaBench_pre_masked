
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_xdg_popup {int dummy; } ;
struct wlr_box {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {struct sway_view* view; } ;
struct sway_xdg_popup {TYPE_4__* wlr_xdg_surface; TYPE_3__ child; } ;
struct sway_view {TYPE_2__* container; } ;
struct sway_output {int height; int width; scalar_t__ ly; scalar_t__ lx; } ;
struct TYPE_8__ {struct wlr_xdg_popup* popup; } ;
struct TYPE_6__ {scalar_t__ content_y; scalar_t__ content_x; TYPE_1__* workspace; } ;
struct TYPE_5__ {struct sway_output* output; } ;


 int FUNC_0 (struct wlr_xdg_popup*,struct wlr_box*) ;

__attribute__((used)) static void FUNC_1(struct sway_xdg_popup *VAR_0) {
 struct sway_view *VAR_1 = VAR_0->child.view;
 struct wlr_xdg_popup *VAR_2 = VAR_0->wlr_xdg_surface->popup;

 struct sway_output *VAR_3 = VAR_1->container->workspace->output;



 struct wlr_box VAR_4 = {
  .x = VAR_3->lx - VAR_1->container->content_x,
  .y = VAR_3->ly - VAR_1->container->content_y,
  .width = VAR_3->width,
  .height = VAR_3->height,
 };

 FUNC_0(VAR_2, &VAR_4);
}
