
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* properties; } ;
struct usb_line6_podhd {TYPE_2__ line6; } ;
struct usb_line6 {int usbdev; } ;
struct usb_interface {int dummy; } ;
struct TYPE_3__ {int capabilities; int ctrl_if; } ;


 int VAR_0 ;
 struct usb_line6_podhd* FUNC_0 (struct usb_line6*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct usb_interface*) ;
 struct usb_interface* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_line6 *VAR_2)
{
 struct usb_line6_podhd *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->line6.properties->capabilities & VAR_0) {
  struct usb_interface *VAR_4;

  VAR_4 = FUNC_2(VAR_2->usbdev,
     VAR_3->line6.properties->ctrl_if);
  if (VAR_4)
   FUNC_1(&VAR_1, VAR_4);
 }
}
