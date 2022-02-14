
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_8__ {int link; } ;
struct TYPE_7__ {int link; } ;
struct TYPE_6__ {int link; } ;
struct TYPE_10__ {int link; } ;
struct sway_drag_icon {TYPE_3__ destroy; TYPE_2__ map; TYPE_1__ unmap; TYPE_5__ surface_commit; int link; TYPE_4__* wlr_drag_icon; } ;
struct TYPE_9__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_drag_icon*) ;
 struct sway_drag_icon* VAR_1 ;
 struct sway_drag_icon* FUNC_1 (struct wl_listener*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_drag_icon *VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_0);
 VAR_4->wlr_drag_icon->data = ((void*)0);
 FUNC_2(&VAR_4->link);
 FUNC_2(&VAR_4->surface_commit.link);
 FUNC_2(&VAR_4->unmap.link);
 FUNC_2(&VAR_4->map.link);
 FUNC_2(&VAR_4->destroy.link);
 FUNC_0(VAR_4);
}
