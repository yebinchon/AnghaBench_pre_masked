
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_seat_device {int link; TYPE_3__* input_device; TYPE_2__* sway_seat; int tablet_pad; int tablet; int keyboard; } ;
struct TYPE_6__ {int wlr_device; } ;
struct TYPE_5__ {TYPE_1__* cursor; } ;
struct TYPE_4__ {int cursor; } ;


 int FUNC_0 (struct sway_seat_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sway_seat_device *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_1(VAR_0->keyboard);
 FUNC_2(VAR_0->tablet);
 FUNC_3(VAR_0->tablet_pad);
 FUNC_5(VAR_0->sway_seat->cursor->cursor,
  VAR_0->input_device->wlr_device);
 FUNC_4(&VAR_0->link);
 FUNC_0(VAR_0);
}
