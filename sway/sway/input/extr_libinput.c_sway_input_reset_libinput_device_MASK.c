
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_input_device {int identifier; TYPE_1__* wlr_device; } ;
struct libinput_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,struct sway_input_device*) ;
 int FUNC_1 (struct libinput_device*,int ) ;
 int FUNC_2 (struct libinput_device*,int ) ;
 int FUNC_3 (struct libinput_device*,int ) ;
 int FUNC_4 (struct libinput_device*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct libinput_device* FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct sway_input_device *VAR_5) {
 if (!FUNC_5(VAR_5->wlr_device)) {
  return;
 }
 bool VAR_6 = 0;
 struct libinput_device *VAR_7 =
  FUNC_6(VAR_5->wlr_device);
 if (VAR_5->wlr_device->type == VAR_1 ||
   VAR_5->wlr_device->type == VAR_3) {
  VAR_6 = FUNC_2(VAR_7, VAR_5->identifier);
 } else if (VAR_5->wlr_device->type == VAR_0) {
  VAR_6 = FUNC_1(VAR_7, VAR_5->identifier);
 } else if (VAR_5->wlr_device->type == VAR_2) {
  VAR_6 = FUNC_3(VAR_7, VAR_5->identifier);
 } else if (VAR_5->wlr_device->type == VAR_4) {
  VAR_6 = FUNC_4(VAR_7, VAR_5->identifier);
 }
 if (VAR_6) {
  FUNC_0("libinput_config", VAR_5);
 }
}
