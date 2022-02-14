
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* usbdev; } ;
struct usb_line6_toneport {struct toneport_led* leds; TYPE_2__ line6; } ;
struct led_classdev {int max_brightness; int brightness_set; int brightness; int name; } ;
struct toneport_led {int registered; int name; struct usb_line6_toneport* toneport; struct led_classdev dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct led_classdev*) ;
 int FUNC_2 (int ,int,char*,char*,char*) ;
 int VAR_0 ;
 char** VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_3(struct usb_line6_toneport *VAR_3)
{
 struct device *VAR_4 = &VAR_3->line6.usbdev->dev;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  struct toneport_led *VAR_7 = &VAR_3->leds[VAR_5];
  struct led_classdev *VAR_8 = &VAR_7->dev;

  VAR_7->toneport = VAR_3;
  FUNC_2(VAR_7->name, sizeof(VAR_7->name), "%s::%s",
    FUNC_0(VAR_4), VAR_1[VAR_5]);
  VAR_8->name = VAR_7->name;
  VAR_8->brightness = VAR_2[VAR_5];
  VAR_8->max_brightness = 0x26;
  VAR_8->brightness_set = VAR_0;
  VAR_6 = FUNC_1(VAR_4, VAR_8);
  if (VAR_6)
   return VAR_6;
  VAR_7->registered = 1;
 }

 return 0;
}
