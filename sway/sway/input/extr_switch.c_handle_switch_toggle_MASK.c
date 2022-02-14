
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_seat {int dummy; } ;
struct wlr_input_device {int dummy; } ;
struct wlr_event_switch_toggle {int switch_state; int switch_type; } ;
struct wl_listener {int dummy; } ;
struct sway_switch {int state; int type; TYPE_2__* seat_device; } ;
struct TYPE_8__ {int idle; } ;
struct TYPE_7__ {struct wlr_seat* wlr_seat; } ;
struct TYPE_6__ {TYPE_1__* input_device; TYPE_3__* sway_seat; } ;
struct TYPE_5__ {struct wlr_input_device* wlr_device; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_switch*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct wlr_input_device*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (int ,char*,char*,int ,int ) ;
 struct sway_switch* VAR_2 ;
 int VAR_3 ;
 struct sway_switch* FUNC_4 (struct wl_listener*,int ,int ) ;
 int FUNC_5 (int ,struct wlr_seat*) ;

__attribute__((used)) static void FUNC_6(struct wl_listener *VAR_4, void *VAR_5) {
 struct sway_switch *VAR_6 =
   FUNC_4(VAR_4, VAR_6, VAR_3);
 struct wlr_event_switch_toggle *VAR_7 = VAR_5;
 struct wlr_seat* VAR_8 = VAR_6->seat_device->sway_seat->wlr_seat;
 FUNC_5(VAR_1.idle, VAR_8);

 struct wlr_input_device *VAR_9 =
  VAR_6->seat_device->input_device->wlr_device;
 char *VAR_10 = FUNC_2(VAR_9);
 FUNC_3(VAR_0, "%s: type %d state %d", VAR_10,
   VAR_7->switch_type, VAR_7->switch_state);
 FUNC_1(VAR_10);

 VAR_6->type = VAR_7->switch_type;
 VAR_6->state = VAR_7->switch_state;
 FUNC_0(VAR_6);
}
