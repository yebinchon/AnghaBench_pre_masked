
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat_device {int tablet_pad; int tablet; } ;
struct sway_seat {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sway_seat*,struct sway_seat_device*) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0,
  struct sway_seat_device *VAR_1) {
 if (!VAR_1->tablet) {
  VAR_1->tablet_pad = FUNC_1(VAR_0, VAR_1);
 }
 FUNC_0(VAR_1->tablet_pad);
}
