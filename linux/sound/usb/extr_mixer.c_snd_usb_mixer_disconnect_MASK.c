
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int disconnected; int (* private_free ) (struct usb_mixer_interface*) ;scalar_t__ rc_urb; scalar_t__ urb; } ;


 int FUNC_0 (struct usb_mixer_interface*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct usb_mixer_interface *VAR_0)
{
 if (VAR_0->disconnected)
  return;
 if (VAR_0->urb)
  FUNC_1(VAR_0->urb);
 if (VAR_0->rc_urb)
  FUNC_1(VAR_0->rc_urb);
 if (VAR_0->private_free)
  VAR_0->private_free(VAR_0);
 VAR_0->disconnected = 1;
}
