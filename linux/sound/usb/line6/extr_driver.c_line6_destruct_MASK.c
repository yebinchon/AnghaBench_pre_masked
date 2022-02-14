
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int * urb_listen; int buffer_listen; int buffer_message; struct usb_device* usbdev; } ;
struct usb_device {int dummy; } ;
struct snd_card {struct usb_line6* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_device*) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0)
{
 struct usb_line6 *VAR_1 = VAR_0->private_data;
 struct usb_device *VAR_2 = VAR_1->usbdev;




 FUNC_0(VAR_1->buffer_message);

 FUNC_0(VAR_1->buffer_listen);


 FUNC_1(VAR_1->urb_listen);
 VAR_1->urb_listen = ((void*)0);


 FUNC_2(VAR_2);
}
