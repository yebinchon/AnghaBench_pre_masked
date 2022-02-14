
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xwayland_surface {int pid; } ;
struct wl_client {int dummy; } ;
struct sway_view {int type; int pid; TYPE_1__* surface; } ;
typedef int pid_t ;
struct TYPE_2__ {int resource; } ;




 int FUNC_0 (struct wl_client*,int *,int *,int *) ;
 struct wl_client* FUNC_1 (int ) ;
 struct wlr_xwayland_surface* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct sway_view *VAR_0) {
 pid_t VAR_1;
 switch (VAR_0->type) {







 case 129:;
  struct wl_client *VAR_2 =
   FUNC_1(VAR_0->surface->resource);
  FUNC_0(VAR_2, &VAR_1, ((void*)0), ((void*)0));
  break;
 }
 VAR_0->pid = VAR_1;
}
