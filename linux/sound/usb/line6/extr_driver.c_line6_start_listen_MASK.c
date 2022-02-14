
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_line6 {TYPE_2__* urb_listen; int ifcdev; int buffer_listen; TYPE_1__* properties; int usbdev; int interval; } ;
struct TYPE_7__ {scalar_t__ actual_length; } ;
struct TYPE_6__ {int capabilities; int ep_ctrl_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int ,struct usb_line6*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,struct usb_line6*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct usb_line6 *VAR_5)
{
 int VAR_6;

 if (VAR_5->properties->capabilities & VAR_3) {
  FUNC_2(VAR_5->urb_listen, VAR_5->usbdev,
   FUNC_4(VAR_5->usbdev, VAR_5->properties->ep_ctrl_r),
   VAR_5->buffer_listen, VAR_2,
   VAR_4, VAR_5, VAR_5->interval);
 } else {
  FUNC_1(VAR_5->urb_listen, VAR_5->usbdev,
   FUNC_3(VAR_5->usbdev, VAR_5->properties->ep_ctrl_r),
   VAR_5->buffer_listen, VAR_2,
   VAR_4, VAR_5);
 }


 if (FUNC_6(VAR_5->urb_listen)) {
  FUNC_0(VAR_5->ifcdev, "invalid control EP\n");
  return -VAR_0;
 }

 VAR_5->urb_listen->actual_length = 0;
 VAR_6 = FUNC_5(VAR_5->urb_listen, VAR_1);
 return VAR_6;
}
