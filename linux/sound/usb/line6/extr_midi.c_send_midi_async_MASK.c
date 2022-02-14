
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {int ifcdev; TYPE_2__* line6midi; int interval; TYPE_1__* properties; int usbdev; } ;
struct urb {scalar_t__ actual_length; } ;
struct TYPE_4__ {int num_active_send_urbs; } ;
struct TYPE_3__ {int ep_ctrl_w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned char* FUNC_1 (unsigned char*,int,int ) ;
 int VAR_2 ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,int ,unsigned char*,int,int ,struct usb_line6*,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static int FUNC_8(struct usb_line6 *VAR_3, unsigned char *VAR_4,
      int VAR_5)
{
 struct urb *VAR_6;
 int VAR_7;
 unsigned char *VAR_8;

 VAR_6 = FUNC_2(0, VAR_1);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_1);

 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_3->usbdev,
    FUNC_5(VAR_3->usbdev,
      VAR_3->properties->ep_ctrl_w),
    VAR_8, VAR_5, VAR_2, VAR_3,
    VAR_3->interval);
 VAR_6->actual_length = 0;
 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 < 0)
  goto error;

 VAR_7 = FUNC_6(VAR_6, VAR_1);
 if (VAR_7 < 0)
  goto error;

 ++VAR_3->line6midi->num_active_send_urbs;
 return 0;

 error:
 FUNC_0(VAR_3->ifcdev, "usb_submit_urb failed\n");
 FUNC_4(VAR_6);
 return VAR_7;
}
