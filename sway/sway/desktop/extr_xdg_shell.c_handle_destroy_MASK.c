
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_7__ {int link; } ;
struct TYPE_6__ {int link; } ;
struct TYPE_5__ {int link; } ;
struct sway_view {TYPE_4__* xdg_decoration; int * wlr_xdg_surface; int * surface; } ;
struct sway_xdg_shell_view {TYPE_3__ unmap; TYPE_2__ map; TYPE_1__ destroy; struct sway_view view; } ;
struct TYPE_8__ {int * view; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sway_view*) ;
 struct sway_xdg_shell_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct sway_xdg_shell_view* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_shell_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;
 if (!FUNC_0(VAR_5->surface == ((void*)0), "Tried to destroy a mapped view")) {
  return;
 }
 FUNC_3(&VAR_4->destroy.link);
 FUNC_3(&VAR_4->map.link);
 FUNC_3(&VAR_4->unmap.link);
 VAR_5->wlr_xdg_surface = ((void*)0);
 if (VAR_5->xdg_decoration) {
  VAR_5->xdg_decoration->view = ((void*)0);
 }
 FUNC_1(VAR_5);
}
