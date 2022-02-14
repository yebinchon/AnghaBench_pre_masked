
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat_device {int dummy; } ;
struct sway_seat {TYPE_1__* wlr_seat; } ;
struct sway_input_device {int identifier; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_seat_device*) ;
 struct sway_seat_device* FUNC_1 (struct sway_seat*,struct sway_input_device*) ;
 int FUNC_2 (struct sway_seat*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

void FUNC_4(struct sway_seat *VAR_1,
  struct sway_input_device *VAR_2) {
 struct sway_seat_device *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3) {
  return;
 }

 FUNC_3(VAR_0, "removing device %s from seat %s",
  VAR_2->identifier, VAR_1->wlr_seat->name);

 FUNC_0(VAR_3);

 FUNC_2(VAR_1);
}
