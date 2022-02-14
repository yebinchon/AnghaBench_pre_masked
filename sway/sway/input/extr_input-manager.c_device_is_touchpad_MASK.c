
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_input_device {TYPE_1__* wlr_device; } ;
struct libinput_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct libinput_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct libinput_device* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(struct sway_input_device *VAR_1) {
 if (VAR_1->wlr_device->type != VAR_0 ||
   !FUNC_1(VAR_1->wlr_device)) {
  return 0;
 }

 struct libinput_device *VAR_2 =
  FUNC_2(VAR_1->wlr_device);

 return FUNC_0(VAR_2) > 0;
}
