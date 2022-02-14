
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int ifcdev; int usbdev; scalar_t__ max_packet_size; struct line6_properties* properties; } ;
struct line6_properties {int capabilities; int ep_ctrl_w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,char*,int,int*,int) ;
 int FUNC_3 (int ,int ,char*,int,int*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_line6 *VAR_3, const char *VAR_4,
      int VAR_5)
{
 int VAR_6, VAR_7 = 0;
 const struct line6_properties *VAR_8 = VAR_3->properties;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += VAR_3->max_packet_size) {
  int VAR_9;
  const char *VAR_10 = VAR_4 + VAR_6;
  int VAR_11 = FUNC_1(VAR_3->max_packet_size, VAR_5 - VAR_6);
  int VAR_12;

  if (VAR_8->capabilities & VAR_1) {
   VAR_12 = FUNC_3(VAR_3->usbdev,
      FUNC_5(VAR_3->usbdev, VAR_8->ep_ctrl_w),
      (char *)VAR_10, VAR_11,
      &VAR_9, VAR_2 * VAR_0);
  } else {
   VAR_12 = FUNC_2(VAR_3->usbdev,
      FUNC_4(VAR_3->usbdev, VAR_8->ep_ctrl_w),
      (char *)VAR_10, VAR_11,
      &VAR_9, VAR_2 * VAR_0);
  }

  if (VAR_12) {
   FUNC_0(VAR_3->ifcdev,
    "usb_bulk_msg failed (%d)\n", VAR_12);
   break;
  }

  VAR_7 += VAR_11;
 }

 return VAR_7;
}
