
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat_device {int keyboard; } ;
struct sway_seat {int dummy; } ;
struct sway_input_device {TYPE_1__* wlr_device; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;






 struct sway_seat_device* FUNC_0 (struct sway_seat*,struct sway_input_device*) ;
 int FUNC_1 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct sway_seat *VAR_1,
  struct sway_input_device *VAR_2) {
 struct sway_seat_device *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  return;
 }

 switch (VAR_2->wlr_device->type) {
  case 132:
   FUNC_1(VAR_1, VAR_3);
   break;
  case 133:
   FUNC_3(VAR_3->keyboard);
   FUNC_2(VAR_3->keyboard);
   break;
  case 128:
   FUNC_1(VAR_1, VAR_3);
   break;
  case 129:
   FUNC_1(VAR_1, VAR_3);
   break;
  case 130:
   FUNC_4(VAR_0, "TODO: reset tablet pad");
   break;
  case 131:
   FUNC_4(VAR_0, "TODO: reset switch device");
   break;
 }
}
