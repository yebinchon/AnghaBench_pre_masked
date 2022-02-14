
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int card; TYPE_1__* properties; int (* disconnect ) (struct usb_line6*) ;scalar_t__ line6pcm; int * urb_listen; int startup_work; struct usb_device* usbdev; } ;
struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct usb_line6*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_line6*) ;
 struct usb_line6* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;

void FUNC_11(struct usb_interface *VAR_0)
{
 struct usb_line6 *VAR_1 = FUNC_9(VAR_0);
 struct usb_device *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_1)
  return;

 if (FUNC_0(VAR_2 != VAR_1->usbdev))
  return;

 FUNC_1(&VAR_1->startup_work);

 if (VAR_1->urb_listen != ((void*)0))
  FUNC_5(VAR_1);

 FUNC_6(VAR_1->card);
 if (VAR_1->line6pcm)
  FUNC_4(VAR_1->line6pcm);
 if (VAR_1->disconnect)
  VAR_1->disconnect(VAR_1);

 FUNC_2(&VAR_0->dev, "Line 6 %s now disconnected\n",
   VAR_1->properties->name);


 FUNC_10(VAR_0, ((void*)0));

 FUNC_7(VAR_1->card);
}
