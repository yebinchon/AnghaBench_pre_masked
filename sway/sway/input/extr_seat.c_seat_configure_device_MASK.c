
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat_device {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_input_device {TYPE_1__* wlr_device; } ;
struct TYPE_2__ {int type; } ;
 int FUNC_0 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_1 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_2 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_3 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_4 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_5 (struct sway_seat*,struct sway_seat_device*) ;
 struct sway_seat_device* FUNC_6 (struct sway_seat*,struct sway_input_device*) ;

void FUNC_7(struct sway_seat *VAR_0,
  struct sway_input_device *VAR_1) {
 struct sway_seat_device *VAR_2 = FUNC_6(VAR_0, VAR_1);
 if (!VAR_2) {
  return;
 }

 switch (VAR_1->wlr_device->type) {
  case 132:
   FUNC_1(VAR_0, VAR_2);
   break;
  case 133:
   FUNC_0(VAR_0, VAR_2);
   break;
  case 131:
   FUNC_2(VAR_0, VAR_2);
   break;
  case 128:
   FUNC_5(VAR_0, VAR_2);
   break;
  case 129:
   FUNC_4(VAR_0, VAR_2);
   break;
  case 130:
   FUNC_3(VAR_0, VAR_2);
   break;
 }
}
