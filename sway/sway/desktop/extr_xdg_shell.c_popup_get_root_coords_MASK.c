
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct wlr_xdg_surface {TYPE_5__* popup; TYPE_3__ geometry; } ;
struct sway_xdg_popup {struct wlr_xdg_surface* wlr_xdg_surface; } ;
struct sway_view_child {TYPE_2__* view; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_10__ {TYPE_4__ geometry; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_7__ {TYPE_1__ geometry; } ;


 int FUNC_0 (TYPE_5__*,scalar_t__,scalar_t__,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct sway_view_child *VAR_0,
  int *VAR_1, int *VAR_2) {
 struct sway_xdg_popup *VAR_3 = (struct sway_xdg_popup *)VAR_0;
 struct wlr_xdg_surface *VAR_4 = VAR_3->wlr_xdg_surface;

 int VAR_5 = -VAR_0->view->geometry.x - VAR_4->geometry.x;
 int VAR_6 = -VAR_0->view->geometry.y - VAR_4->geometry.y;

 FUNC_0(VAR_4->popup,
  VAR_5 + VAR_4->popup->geometry.x,
  VAR_6 + VAR_4->popup->geometry.y,
  VAR_1, VAR_2);
}
