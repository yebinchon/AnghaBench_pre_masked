
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int request_mode; int destroy; } ;
struct wlr_xdg_toplevel_decoration_v1 {TYPE_3__ events; TYPE_1__* surface; } ;
struct wl_listener {int dummy; } ;
struct TYPE_9__ {struct sway_xdg_decoration* xdg_decoration; } ;
struct sway_xdg_shell_view {TYPE_2__ view; } ;
struct TYPE_11__ {int (* notify ) (TYPE_4__*,struct wlr_xdg_toplevel_decoration_v1*) ;} ;
struct sway_xdg_decoration {TYPE_4__ request_mode; int link; TYPE_4__ destroy; struct wlr_xdg_toplevel_decoration_v1* wlr_xdg_decoration; TYPE_2__* view; } ;
struct TYPE_12__ {int xdg_decorations; } ;
struct TYPE_8__ {struct sway_xdg_shell_view* data; } ;


 struct sway_xdg_decoration* FUNC_0 (int,int) ;
 TYPE_7__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,struct wlr_xdg_toplevel_decoration_v1*) ;
 int FUNC_4 (TYPE_4__*,struct wlr_xdg_toplevel_decoration_v1*) ;

void FUNC_5(struct wl_listener *VAR_1, void *VAR_2) {
 struct wlr_xdg_toplevel_decoration_v1 *VAR_3 = VAR_2;
 struct sway_xdg_shell_view *VAR_4 = VAR_3->surface->data;

 struct sway_xdg_decoration *VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  return;
 }

 VAR_5->view = &VAR_4->view;
 VAR_5->view->xdg_decoration = VAR_5;
 VAR_5->wlr_xdg_decoration = VAR_3;

 FUNC_2(&VAR_3->events.destroy, &VAR_5->destroy);
 VAR_5->destroy.notify = FUNC_3;

 FUNC_2(&VAR_3->events.request_mode, &VAR_5->request_mode);
 VAR_5->request_mode.notify = FUNC_4;

 FUNC_1(&VAR_0.xdg_decorations, &VAR_5->link);

 FUNC_4(&VAR_5->request_mode, VAR_3);
}
