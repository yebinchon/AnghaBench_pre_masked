
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcd2000 {int * intf; int midi_in_urb; int midi_out_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct bcd2000 *VAR_0,
      struct usb_interface *VAR_1)
{


 FUNC_0(VAR_0->midi_out_urb);
 FUNC_0(VAR_0->midi_in_urb);

 if (VAR_0->intf) {
  FUNC_1(VAR_0->intf, ((void*)0));
  VAR_0->intf = ((void*)0);
 }
}
