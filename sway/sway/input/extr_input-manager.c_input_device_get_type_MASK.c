
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_input_device {TYPE_1__* wlr_device; } ;
struct TYPE_2__ {int type; } ;
 int FUNC_0 (struct sway_input_device*) ;

const char *FUNC_1(struct sway_input_device *VAR_0) {
 switch (VAR_0->wlr_device->type) {
 case 132:
  if (FUNC_0(VAR_0)) {
   return "touchpad";
  } else {
   return "pointer";
  }
 case 133:
  return "keyboard";
 case 128:
  return "touch";
 case 129:
  return "tablet_tool";
 case 130:
  return "tablet_pad";
 case 131:
  return "switch";
 }
 return "unknown";
}
