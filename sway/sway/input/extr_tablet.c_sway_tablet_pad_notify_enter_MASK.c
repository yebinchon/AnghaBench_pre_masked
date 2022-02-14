
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int destroy; } ;
struct wlr_surface {TYPE_2__ events; } ;
struct TYPE_6__ {int notify; int link; } ;
struct sway_tablet_pad {TYPE_3__ surface_destroy; struct wlr_surface* current_surface; TYPE_1__* tablet; int tablet_v2_pad; } ;
struct TYPE_4__ {int tablet_v2; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ,struct wlr_surface*) ;
 int FUNC_4 (int ,int ,struct wlr_surface*) ;
 int FUNC_5 (int ,struct wlr_surface*) ;

void FUNC_6(struct sway_tablet_pad *VAR_1,
  struct wlr_surface *VAR_2) {
 if (!VAR_1 || !VAR_1->tablet) {
  return;
 }

 if (VAR_2 == VAR_1->current_surface) {
  return;
 }


 if (VAR_1->current_surface) {
  FUNC_5(VAR_1->tablet_v2_pad,
   VAR_1->current_surface);
  FUNC_1(&VAR_1->surface_destroy.link);
  FUNC_0(&VAR_1->surface_destroy.link);
  VAR_1->current_surface = ((void*)0);
 }

 if (!FUNC_3(VAR_1->tablet->tablet_v2, VAR_2)) {
  return;
 }

 FUNC_4(VAR_1->tablet_v2_pad,
  VAR_1->tablet->tablet_v2, VAR_2);

 VAR_1->current_surface = VAR_2;
 FUNC_1(&VAR_1->surface_destroy.link);
 VAR_1->surface_destroy.notify = VAR_0;
 FUNC_2(&VAR_2->events.destroy, &VAR_1->surface_destroy);
}
