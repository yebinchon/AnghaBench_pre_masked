
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;







__attribute__((used)) static char *FUNC_0 (enum usb_device_speed VAR_0)
{
 switch (VAR_0) {
 case 128: return "unknown";
 case 129: return "low";
 case 131: return "full";
 case 130: return "high";
 default: return "??";
 }
}
