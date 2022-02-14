
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct sway_switch {TYPE_1__ switch_toggle; int state; struct sway_seat_device* seat_device; } ;
struct sway_seat_device {struct sway_switch* switch_device; } ;
struct sway_seat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sway_switch* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_switch*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

struct sway_switch *FUNC_4(struct sway_seat *VAR_2,
  struct sway_seat_device *VAR_3) {
 struct sway_switch *VAR_4 =
  FUNC_0(1, sizeof(struct sway_switch));
 if (!FUNC_1(VAR_4, "could not allocate switch")) {
  return ((void*)0);
 }
 VAR_3->switch_device = VAR_4;
 VAR_4->seat_device = VAR_3;
 VAR_4->state = VAR_1;
 FUNC_3(&VAR_4->switch_toggle.link);
 FUNC_2(VAR_0, "Allocated switch for device");

 return VAR_4;
}
