
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {struct usb_mixer_interface* rc_setup_packet; TYPE_1__* rc_urb; TYPE_1__* urb; struct usb_mixer_interface* id_elems; } ;
struct TYPE_2__ {struct usb_mixer_interface* transfer_buffer; } ;


 int FUNC_0 (struct usb_mixer_interface*) ;
 int FUNC_1 (struct usb_mixer_interface*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct usb_mixer_interface *VAR_0)
{

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->id_elems);
 if (VAR_0->urb) {
  FUNC_0(VAR_0->urb->transfer_buffer);
  FUNC_2(VAR_0->urb);
 }
 FUNC_2(VAR_0->rc_urb);
 FUNC_0(VAR_0->rc_setup_packet);
 FUNC_0(VAR_0);
}
