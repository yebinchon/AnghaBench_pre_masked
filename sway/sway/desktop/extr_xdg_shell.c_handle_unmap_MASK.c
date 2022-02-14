
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_14__ {int link; } ;
struct TYPE_13__ {int link; } ;
struct TYPE_12__ {int link; } ;
struct TYPE_11__ {int link; } ;
struct TYPE_10__ {int link; } ;
struct TYPE_9__ {int link; } ;
struct TYPE_8__ {int link; } ;
struct sway_view {int surface; } ;
struct sway_xdg_shell_view {TYPE_7__ set_app_id; TYPE_6__ set_title; TYPE_5__ request_resize; TYPE_4__ request_move; TYPE_3__ request_fullscreen; TYPE_2__ new_popup; TYPE_1__ commit; struct sway_view view; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sway_view*) ;
 struct sway_xdg_shell_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct sway_xdg_shell_view* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xdg_shell_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;

 if (!FUNC_0(VAR_5->surface, "Cannot unmap unmapped view")) {
  return;
 }

 FUNC_1(VAR_5);

 FUNC_3(&VAR_4->commit.link);
 FUNC_3(&VAR_4->new_popup.link);
 FUNC_3(&VAR_4->request_fullscreen.link);
 FUNC_3(&VAR_4->request_move.link);
 FUNC_3(&VAR_4->request_resize.link);
 FUNC_3(&VAR_4->set_title.link);
 FUNC_3(&VAR_4->set_app_id.link);
}
