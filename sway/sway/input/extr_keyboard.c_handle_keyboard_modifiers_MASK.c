
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_seat {int dummy; } ;
struct wlr_input_device {TYPE_4__* keyboard; } ;
struct wl_listener {int dummy; } ;
struct sway_keyboard {scalar_t__ effective_layout; TYPE_2__* seat_device; } ;
struct TYPE_10__ {struct wlr_input_device* wlr_device; } ;
struct TYPE_8__ {scalar_t__ group; } ;
struct TYPE_9__ {TYPE_3__ modifiers; } ;
struct TYPE_7__ {TYPE_5__* input_device; TYPE_1__* sway_seat; } ;
struct TYPE_6__ {struct wlr_seat* wlr_seat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_5__*) ;
 struct sway_keyboard* VAR_0 ;
 int VAR_1 ;
 struct sway_keyboard* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct wlr_seat*,TYPE_3__*) ;
 int FUNC_5 (struct wlr_seat*,struct wlr_input_device*) ;

__attribute__((used)) static void FUNC_6(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_keyboard *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_1);
 struct wlr_seat *VAR_5 = VAR_4->seat_device->sway_seat->wlr_seat;
 struct wlr_input_device *VAR_6 =
  VAR_4->seat_device->input_device->wlr_device;
 FUNC_5(VAR_5, VAR_6);
 FUNC_4(VAR_5, &VAR_6->keyboard->modifiers);

 uint32_t VAR_7 = FUNC_3(VAR_6->keyboard);
 FUNC_0(VAR_7);

 if (VAR_6->keyboard->modifiers.group != VAR_4->effective_layout) {
  VAR_4->effective_layout = VAR_6->keyboard->modifiers.group;
  FUNC_1("xkb_layout", VAR_4->seat_device->input_device);
 }
}
