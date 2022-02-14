
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct wl_listener {int dummy; } ;
struct sway_view {scalar_t__ surface; } ;
struct TYPE_21__ {int link; } ;
struct TYPE_20__ {int link; } ;
struct TYPE_19__ {int link; } ;
struct TYPE_18__ {int link; } ;
struct TYPE_17__ {int link; } ;
struct TYPE_16__ {int link; } ;
struct TYPE_30__ {int link; } ;
struct TYPE_29__ {int link; } ;
struct TYPE_28__ {int link; } ;
struct TYPE_27__ {int link; } ;
struct TYPE_26__ {int link; } ;
struct TYPE_25__ {int link; } ;
struct TYPE_24__ {int link; } ;
struct TYPE_23__ {int link; } ;
struct TYPE_22__ {int link; } ;
struct sway_xwayland_view {struct sway_view view; TYPE_15__ unmap; TYPE_14__ map; TYPE_13__ set_decorations; TYPE_12__ set_hints; TYPE_11__ set_window_type; TYPE_10__ set_role; TYPE_9__ set_class; TYPE_8__ set_title; TYPE_7__ request_activate; TYPE_6__ request_resize; TYPE_5__ request_move; TYPE_4__ request_fullscreen; TYPE_3__ request_configure; TYPE_2__ destroy; TYPE_1__ commit; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*) ;
 int FUNC_1 (struct sway_view*) ;
 struct sway_xwayland_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct sway_xwayland_view* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;

 if (VAR_5->surface) {
  FUNC_1(VAR_5);
  FUNC_3(&VAR_4->commit.link);
 }

 FUNC_3(&VAR_4->destroy.link);
 FUNC_3(&VAR_4->request_configure.link);
 FUNC_3(&VAR_4->request_fullscreen.link);
 FUNC_3(&VAR_4->request_move.link);
 FUNC_3(&VAR_4->request_resize.link);
 FUNC_3(&VAR_4->request_activate.link);
 FUNC_3(&VAR_4->set_title.link);
 FUNC_3(&VAR_4->set_class.link);
 FUNC_3(&VAR_4->set_role.link);
 FUNC_3(&VAR_4->set_window_type.link);
 FUNC_3(&VAR_4->set_hints.link);
 FUNC_3(&VAR_4->set_decorations.link);
 FUNC_3(&VAR_4->map.link);
 FUNC_3(&VAR_4->unmap.link);
 FUNC_0(&VAR_4->view);
}
