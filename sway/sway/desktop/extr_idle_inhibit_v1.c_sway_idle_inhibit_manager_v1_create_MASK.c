
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_idle {int dummy; } ;
struct wl_display {int dummy; } ;
struct TYPE_6__ {int notify; } ;
struct sway_idle_inhibit_manager_v1 {int inhibitors; TYPE_3__ new_idle_inhibitor_v1; TYPE_2__* wlr_manager; struct wlr_idle* idle; } ;
struct TYPE_4__ {int new_inhibitor; } ;
struct TYPE_5__ {TYPE_1__ events; } ;


 struct sway_idle_inhibit_manager_v1* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_idle_inhibit_manager_v1*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (struct wl_display*) ;

struct sway_idle_inhibit_manager_v1 *FUNC_5(
  struct wl_display *VAR_1, struct wlr_idle *VAR_2) {
 struct sway_idle_inhibit_manager_v1 *VAR_3 =
  FUNC_0(1, sizeof(struct sway_idle_inhibit_manager_v1));
 if (!VAR_3) {
  return ((void*)0);
 }

 VAR_3->wlr_manager = FUNC_4(VAR_1);
 if (!VAR_3->wlr_manager) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->idle = VAR_2;
 FUNC_3(&VAR_3->wlr_manager->events.new_inhibitor,
  &VAR_3->new_idle_inhibitor_v1);
 VAR_3->new_idle_inhibitor_v1.notify = VAR_0;
 FUNC_2(&VAR_3->inhibitors);

 return VAR_3;
}
