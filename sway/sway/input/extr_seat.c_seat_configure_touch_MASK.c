
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat_device {TYPE_2__* input_device; } ;
struct sway_seat {TYPE_1__* cursor; } ;
struct TYPE_4__ {int wlr_device; } ;
struct TYPE_3__ {int cursor; } ;


 int FUNC_0 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0,
  struct sway_seat_device *VAR_1) {
 FUNC_1(VAR_0->cursor->cursor,
  VAR_1->input_device->wlr_device);
 FUNC_0(VAR_0, VAR_1);
}
