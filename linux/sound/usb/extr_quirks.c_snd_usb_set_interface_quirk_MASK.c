
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct snd_usb_audio {int usb_id; } ;


 int FUNC_0 (int ) ;
 struct snd_usb_audio* FUNC_1 (int *) ;
 int FUNC_2 (int) ;

void FUNC_3(struct usb_device *VAR_0)
{
 struct snd_usb_audio *VAR_1 = FUNC_1(&VAR_0->dev);

 if (!VAR_1)
  return;




 switch (FUNC_0(VAR_1->usb_id)) {
 case 0x23ba:
 case 0x0644:
  FUNC_2(50);
  break;
 }
}
