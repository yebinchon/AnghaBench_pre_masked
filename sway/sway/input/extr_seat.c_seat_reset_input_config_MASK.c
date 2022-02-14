
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat_device {TYPE_2__* input_device; } ;
struct sway_seat {TYPE_1__* cursor; } ;
struct TYPE_4__ {int wlr_device; int identifier; } ;
struct TYPE_3__ {int cursor; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_1,
  struct sway_seat_device *VAR_2) {
 FUNC_0(VAR_0, "Resetting output mapping for input device %s",
  VAR_2->input_device->identifier);
 FUNC_1(VAR_1->cursor->cursor,
  VAR_2->input_device->wlr_device, ((void*)0));
}
