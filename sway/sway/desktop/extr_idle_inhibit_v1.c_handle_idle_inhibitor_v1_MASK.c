
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int destroy; } ;
struct wlr_idle_inhibitor_v1 {TYPE_1__ events; int surface; } ;
struct wl_listener {int dummy; } ;
struct TYPE_4__ {int notify; } ;
struct sway_idle_inhibitor_v1 {TYPE_2__ destroy; int link; int view; int mode; struct sway_idle_inhibit_manager_v1* manager; } ;
struct sway_idle_inhibit_manager_v1 {int inhibitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sway_idle_inhibitor_v1* FUNC_0 (int,int) ;
 int VAR_2 ;
 struct sway_idle_inhibit_manager_v1* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sway_idle_inhibit_manager_v1*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct sway_idle_inhibit_manager_v1* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;

void FUNC_7(struct wl_listener *VAR_5, void *VAR_6) {
 struct wlr_idle_inhibitor_v1 *VAR_7 = VAR_6;
 struct sway_idle_inhibit_manager_v1 *VAR_8 =
  FUNC_4(VAR_5, VAR_8, VAR_4);
 FUNC_2(VAR_1, "New sway idle inhibitor");

 struct sway_idle_inhibitor_v1 *VAR_9 =
  FUNC_0(1, sizeof(struct sway_idle_inhibitor_v1));
 if (!VAR_9) {
  return;
 }

 VAR_9->manager = VAR_8;
 VAR_9->mode = VAR_0;
 VAR_9->view = FUNC_3(VAR_7->surface);
 FUNC_5(&VAR_8->inhibitors, &VAR_9->link);

 VAR_9->destroy.notify = VAR_2;
 FUNC_6(&VAR_7->events.destroy, &VAR_9->destroy);

 FUNC_1(VAR_8);
}
