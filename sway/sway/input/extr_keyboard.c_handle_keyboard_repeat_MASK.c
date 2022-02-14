
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rate; } ;
struct wlr_keyboard {TYPE_4__ repeat_info; } ;
struct sway_keyboard {scalar_t__ repeat_binding; TYPE_3__* seat_device; int key_repeat_source; } ;
struct TYPE_7__ {int sway_seat; TYPE_2__* input_device; } ;
struct TYPE_6__ {TYPE_1__* wlr_device; } ;
struct TYPE_5__ {struct wlr_keyboard* keyboard; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1) {
 struct sway_keyboard *VAR_2 = (struct sway_keyboard *)VAR_1;
 struct wlr_keyboard *VAR_3 =
   VAR_2->seat_device->input_device->wlr_device->keyboard;
 if (VAR_2->repeat_binding) {
  if (VAR_3->repeat_info.rate > 0) {

   if (FUNC_3(VAR_2->key_repeat_source,
     1000 / VAR_3->repeat_info.rate) < 0) {
    FUNC_1(VAR_0, "failed to update key repeat timer");
   }
  }

  FUNC_0(VAR_2->seat_device->sway_seat,
    VAR_2->repeat_binding);
  FUNC_2();
 }
 return 0;
}
