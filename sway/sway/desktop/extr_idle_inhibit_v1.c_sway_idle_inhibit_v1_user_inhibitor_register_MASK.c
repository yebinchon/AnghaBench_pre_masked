
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unmap; } ;
struct sway_view {TYPE_1__ events; } ;
struct TYPE_6__ {int notify; } ;
struct sway_idle_inhibitor_v1 {int mode; TYPE_3__* manager; TYPE_2__ destroy; int link; struct sway_view* view; } ;
typedef enum sway_idle_inhibit_mode { ____Placeholder_sway_idle_inhibit_mode } sway_idle_inhibit_mode ;
struct TYPE_8__ {TYPE_3__* idle_inhibit_manager_v1; } ;
struct TYPE_7__ {int inhibitors; } ;


 struct sway_idle_inhibitor_v1* FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;

void FUNC_4(struct sway_view *VAR_2,
  enum sway_idle_inhibit_mode VAR_3) {
 struct sway_idle_inhibitor_v1 *VAR_4 =
  FUNC_0(1, sizeof(struct sway_idle_inhibitor_v1));
 if (!VAR_4) {
  return;
 }

 VAR_4->manager = VAR_1.idle_inhibit_manager_v1;
 VAR_4->mode = VAR_3;
 VAR_4->view = VAR_2;
 FUNC_2(&VAR_4->manager->inhibitors, &VAR_4->link);

 VAR_4->destroy.notify = VAR_0;
 FUNC_3(&VAR_2->events.unmap, &VAR_4->destroy);

 FUNC_1(VAR_4->manager);
}
