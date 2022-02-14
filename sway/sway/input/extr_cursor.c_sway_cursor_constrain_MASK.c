
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int region; } ;
struct wlr_pointer_constraint_v1 {TYPE_3__* surface; int region; TYPE_1__ current; } ;
struct TYPE_8__ {int notify; int link; } ;
struct sway_cursor {TYPE_4__ constraint_commit; struct wlr_pointer_constraint_v1* active_constraint; int seat; } ;
struct seat_config {scalar_t__ allow_constrain; } ;
struct TYPE_6__ {int commit; } ;
struct TYPE_7__ {TYPE_2__ events; int input_region; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_cursor*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct seat_config* FUNC_4 (int ) ;
 struct seat_config* FUNC_5 (char*) ;
 int FUNC_6 (struct sway_cursor*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (struct wlr_pointer_constraint_v1*) ;
 int FUNC_11 (struct wlr_pointer_constraint_v1*) ;

void FUNC_12(struct sway_cursor *VAR_2,
  struct wlr_pointer_constraint_v1 *VAR_3) {
 struct seat_config *VAR_4 = FUNC_4(VAR_2->seat);
 if (!VAR_4) {
  VAR_4 = FUNC_5("*");
 }

 if (!VAR_4 || VAR_4->allow_constrain == VAR_0) {
  return;
 }

 if (VAR_2->active_constraint == VAR_3) {
  return;
 }

 FUNC_8(&VAR_2->constraint_commit.link);
 if (VAR_2->active_constraint) {
  if (VAR_3 == ((void*)0)) {
   FUNC_6(VAR_2);
  }
  FUNC_11(
   VAR_2->active_constraint);
 }

 VAR_2->active_constraint = VAR_3;

 if (VAR_3 == ((void*)0)) {
  FUNC_7(&VAR_2->constraint_commit.link);
  return;
 }






 if (FUNC_3(&VAR_3->current.region)) {
  FUNC_2(&VAR_3->region,
   &VAR_3->surface->input_region, &VAR_3->current.region);
 } else {
  FUNC_1(&VAR_3->region,
   &VAR_3->surface->input_region);
 }

 FUNC_0(VAR_2);

 FUNC_10(VAR_3);

 VAR_2->constraint_commit.notify = VAR_1;
 FUNC_9(&VAR_3->surface->events.commit,
  &VAR_2->constraint_commit);
}
