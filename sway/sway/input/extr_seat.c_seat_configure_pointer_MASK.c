
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_seat_device {TYPE_3__* input_device; } ;
struct sway_seat {TYPE_2__* cursor; TYPE_1__* wlr_seat; } ;
struct TYPE_6__ {int wlr_device; } ;
struct TYPE_5__ {int cursor; } ;
struct TYPE_4__ {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_1 (struct sway_seat*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sway_seat *VAR_1,
  struct sway_seat_device *VAR_2) {
 if ((VAR_1->wlr_seat->capabilities & VAR_0) == 0) {
  FUNC_1(VAR_1);
 }
 FUNC_2(VAR_1->cursor->cursor,
  VAR_2->input_device->wlr_device);
 FUNC_0(VAR_1, VAR_2);
}
