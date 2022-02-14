
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat_device {int switch_device; } ;
struct sway_seat {int dummy; } ;


 int FUNC_0 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sway_seat*,struct sway_seat_device*) ;

__attribute__((used)) static void FUNC_3(struct sway_seat *VAR_0,
        struct sway_seat_device *VAR_1) {
 if (!VAR_1->switch_device) {
  FUNC_2(VAR_0, VAR_1);
 }
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1->switch_device);
}
