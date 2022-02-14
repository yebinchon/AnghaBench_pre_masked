
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_seat_device {struct sway_keyboard* keyboard; } ;
struct sway_seat {int dummy; } ;
struct TYPE_5__ {int link; } ;
struct TYPE_4__ {int link; } ;
struct sway_keyboard {int key_repeat_source; TYPE_2__ keyboard_modifiers; TYPE_1__ keyboard_key; struct sway_seat_device* seat_device; } ;
struct TYPE_6__ {int wl_event_loop; } ;


 struct sway_keyboard* FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct sway_keyboard*,char*) ;
 int FUNC_2 (int ,int ,struct sway_keyboard*) ;
 int FUNC_3 (int *) ;

struct sway_keyboard *FUNC_4(struct sway_seat *VAR_2,
  struct sway_seat_device *VAR_3) {
 struct sway_keyboard *VAR_4 =
  FUNC_0(1, sizeof(struct sway_keyboard));
 if (!FUNC_1(VAR_4, "could not allocate sway keyboard")) {
  return ((void*)0);
 }

 VAR_4->seat_device = VAR_3;
 VAR_3->keyboard = VAR_4;

 FUNC_3(&VAR_4->keyboard_key.link);
 FUNC_3(&VAR_4->keyboard_modifiers.link);

 VAR_4->key_repeat_source = FUNC_2(VAR_1.wl_event_loop,
   VAR_0, VAR_4);

 return VAR_4;
}
