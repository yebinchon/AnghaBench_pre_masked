
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_pointer_constraint_v1 {TYPE_3__* seat; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {struct sway_cursor* cursor; } ;
struct TYPE_9__ {int * next; } ;
struct TYPE_6__ {TYPE_4__ link; } ;
struct sway_pointer_constraint {TYPE_1__ destroy; } ;
struct TYPE_7__ {TYPE_4__ link; } ;
struct sway_cursor {struct wlr_pointer_constraint_v1* active_constraint; TYPE_2__ constraint_commit; } ;
struct TYPE_8__ {struct sway_seat* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_pointer_constraint*) ;
 struct sway_pointer_constraint* VAR_1 ;
 int FUNC_1 (struct sway_cursor*) ;
 struct sway_pointer_constraint* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_pointer_constraint *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct wlr_pointer_constraint_v1 *VAR_5 = VAR_3;
 struct sway_seat *VAR_6 = VAR_5->seat->data;
 struct sway_cursor *VAR_7 = VAR_6->cursor;

 FUNC_4(&VAR_4->destroy.link);

 if (VAR_7->active_constraint == VAR_5) {
  FUNC_1(VAR_7);

  if (VAR_7->constraint_commit.link.next != ((void*)0)) {
   FUNC_4(&VAR_7->constraint_commit.link);
  }
  FUNC_3(&VAR_7->constraint_commit.link);
  VAR_7->active_constraint = ((void*)0);
 }

 FUNC_0(VAR_4);
}
