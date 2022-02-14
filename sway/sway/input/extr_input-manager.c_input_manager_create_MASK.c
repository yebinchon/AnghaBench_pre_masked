
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sway_server {int wl_display; TYPE_2__* backend; } ;
struct TYPE_14__ {int notify; } ;
struct sway_input_manager {TYPE_7__ inhibit_deactivate; TYPE_6__* inhibit; TYPE_7__ inhibit_activate; TYPE_7__ virtual_keyboard_new; TYPE_5__* virtual_keyboard; TYPE_7__ new_input; int seats; int devices; } ;
struct TYPE_11__ {int deactivate; int activate; } ;
struct TYPE_13__ {TYPE_4__ events; } ;
struct TYPE_10__ {int new_virtual_keyboard; } ;
struct TYPE_12__ {TYPE_3__ events; } ;
struct TYPE_8__ {int new_input; } ;
struct TYPE_9__ {TYPE_1__ events; } ;


 struct sway_input_manager* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_7__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;

struct sway_input_manager *FUNC_5(struct sway_server *VAR_4) {
 struct sway_input_manager *VAR_5 =
  FUNC_0(1, sizeof(struct sway_input_manager));
 if (!VAR_5) {
  return ((void*)0);
 }

 FUNC_1(&VAR_5->devices);
 FUNC_1(&VAR_5->seats);

 VAR_5->new_input.notify = VAR_2;
 FUNC_2(&VAR_4->backend->events.new_input, &VAR_5->new_input);

 VAR_5->virtual_keyboard = FUNC_4(
  VAR_4->wl_display);
 FUNC_2(&VAR_5->virtual_keyboard->events.new_virtual_keyboard,
  &VAR_5->virtual_keyboard_new);
 VAR_5->virtual_keyboard_new.notify = VAR_3;

 VAR_5->inhibit = FUNC_3(VAR_4->wl_display);
 VAR_5->inhibit_activate.notify = VAR_0;
 FUNC_2(&VAR_5->inhibit->events.activate,
   &VAR_5->inhibit_activate);
 VAR_5->inhibit_deactivate.notify = VAR_1;
 FUNC_2(&VAR_5->inhibit->events.deactivate,
   &VAR_5->inhibit_deactivate);

 return VAR_5;
}
