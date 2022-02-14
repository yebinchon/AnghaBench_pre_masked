
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_input_device {char* identifier; TYPE_1__* wlr_device; } ;
struct libinput_device {int dummy; } ;
struct input_config {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct libinput_device*,struct input_config*,char const*) ;
 int FUNC_1 (struct libinput_device*,struct input_config*,char const*) ;
 int FUNC_2 (struct libinput_device*,struct input_config*,char const*) ;
 int FUNC_3 (struct libinput_device*,struct input_config*,char const*) ;
 struct input_config* FUNC_4 (struct sway_input_device*) ;
 int FUNC_5 (char*,struct sway_input_device*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct libinput_device* FUNC_7 (TYPE_1__*) ;

void FUNC_8(struct sway_input_device *VAR_5) {
 struct input_config *VAR_6 = FUNC_4(VAR_5);
 if (!VAR_6 || !FUNC_6(VAR_5->wlr_device)) {
  return;
 }
 bool VAR_7 = 0;
 const char *VAR_8 = VAR_5->identifier;
 struct libinput_device *VAR_9 =
  FUNC_7(VAR_5->wlr_device);
 if (VAR_5->wlr_device->type == VAR_1 ||
   VAR_5->wlr_device->type == VAR_3) {
  VAR_7 = FUNC_1(VAR_9, VAR_6, VAR_8);
 } else if (VAR_5->wlr_device->type == VAR_0) {
  VAR_7 = FUNC_0(VAR_9, VAR_6, VAR_8);
 } else if (VAR_5->wlr_device->type == VAR_2) {
  VAR_7 = FUNC_2(VAR_9, VAR_6, VAR_8);
 } else if (VAR_5->wlr_device->type == VAR_4) {
  VAR_7 = FUNC_3(VAR_9, VAR_6, VAR_8);
 }
 if (VAR_7) {
  FUNC_5("libinput_config", VAR_5);
 }
}
