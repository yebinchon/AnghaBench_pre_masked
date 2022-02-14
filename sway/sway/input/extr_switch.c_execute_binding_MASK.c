
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_switch_binding {scalar_t__ type; scalar_t__ state; int flags; int command; } ;
struct sway_switch {scalar_t__ type; scalar_t__ state; TYPE_1__* seat_device; } ;
struct sway_seat {int * exclusive_client; } ;
struct sway_binding {int flags; int command; int type; } ;
struct TYPE_7__ {int length; struct sway_switch_binding** items; } ;
typedef TYPE_3__ list_t ;
struct TYPE_8__ {scalar_t__ reloading; TYPE_2__* current_mode; } ;
struct TYPE_6__ {TYPE_3__* switch_bindings; } ;
struct TYPE_5__ {struct sway_seat* sway_seat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sway_binding* FUNC_0 (int,int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (struct sway_binding*) ;
 int FUNC_2 (struct sway_seat*,struct sway_binding*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct sway_switch *VAR_5) {
 struct sway_seat* VAR_6 = VAR_5->seat_device->sway_seat;
 bool VAR_7 = VAR_6->exclusive_client != ((void*)0);

 list_t *VAR_8 = VAR_4->current_mode->switch_bindings;
 struct sway_switch_binding *VAR_9 = ((void*)0);
 for (int VAR_10 = 0; VAR_10 < VAR_8->length; ++VAR_10) {
  struct sway_switch_binding *VAR_11 = VAR_8->items[VAR_10];
  if (VAR_11->type != VAR_5->type) {
   continue;
  }
  if (VAR_11->state != VAR_3 &&
    VAR_11->state != VAR_5->state) {
   continue;
  }
  if (VAR_4->reloading && (VAR_11->state == VAR_3
    || (VAR_11->flags & VAR_1) == 0)) {
   continue;
  }
  bool VAR_12 = VAR_11->flags & VAR_0;
  if (!VAR_12 && VAR_7) {
   continue;
  }

  VAR_9 = VAR_11;

  if (VAR_12 == VAR_7) {
   break;
  }
 }

 if (VAR_9) {
  struct sway_binding *VAR_13 =
   FUNC_0(1, sizeof(struct sway_binding));
  VAR_13->type = VAR_2;
  VAR_13->flags = VAR_9->flags;
  VAR_13->command = VAR_9->command;

  FUNC_2(VAR_6, VAR_13);
  FUNC_1(VAR_13);
 }

 FUNC_3();

}
