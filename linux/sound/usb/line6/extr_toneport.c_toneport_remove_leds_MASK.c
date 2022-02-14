
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_toneport {struct toneport_led* leds; } ;
struct toneport_led {int registered; int dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usb_line6_toneport *VAR_0)
{
 struct toneport_led *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_1 = &VAR_0->leds[VAR_2];
  if (!VAR_1->registered)
   break;
  FUNC_0(&VAR_1->dev);
  VAR_1->registered = 0;
 }
}
