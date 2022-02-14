
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; int destroy; } ;
struct wlr_server_decoration {TYPE_1__ events; } ;
struct wl_listener {int dummy; } ;
struct TYPE_5__ {int notify; } ;
struct sway_server_decoration {int link; TYPE_2__ mode; TYPE_2__ destroy; struct wlr_server_decoration* wlr_server_decoration; } ;
struct TYPE_6__ {int decorations; } ;


 struct sway_server_decoration* FUNC_0 (int,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void FUNC_3(struct wl_listener *VAR_3, void *VAR_4) {
 struct wlr_server_decoration *VAR_5 = VAR_4;

 struct sway_server_decoration *VAR_6 = FUNC_0(1, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  return;
 }

 VAR_6->wlr_server_decoration = VAR_5;

 FUNC_2(&VAR_5->events.destroy, &VAR_6->destroy);
 VAR_6->destroy.notify = VAR_1;

 FUNC_2(&VAR_5->events.mode, &VAR_6->mode);
 VAR_6->mode.notify = VAR_2;

 FUNC_1(&VAR_0.decorations, &VAR_6->link);
}
