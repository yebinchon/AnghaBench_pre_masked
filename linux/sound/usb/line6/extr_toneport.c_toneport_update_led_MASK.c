
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int usbdev; } ;
struct usb_line6_toneport {TYPE_3__* leds; TYPE_1__ line6; } ;
struct TYPE_5__ {int brightness; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct usb_line6_toneport *VAR_0)
{
 FUNC_0(VAR_0->line6.usbdev,
     (VAR_0->leds[0].dev.brightness << 8) | 0x0002,
     VAR_0->leds[1].dev.brightness);
}
