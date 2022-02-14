
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ifcdev; struct usb_device* usbdev; } ;
struct usb_line6_podhd {int firmware_version; TYPE_1__ line6; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int,int*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_line6_podhd *VAR_10)
{
 int VAR_11;
 u8 *VAR_12;
 int VAR_13;
 struct usb_device *VAR_14 = VAR_10->line6.usbdev;

 VAR_12 = FUNC_2(8, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_14, FUNC_6(VAR_14, 0),
     0x67, VAR_9 | VAR_6 | VAR_5,
     0x11, 0,
     ((void*)0), 0, VAR_3 * VAR_2);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->line6.ifcdev, "read request failed (error %d)\n", VAR_11);
  goto exit;
 }


 VAR_11 = FUNC_4(VAR_14, FUNC_5(VAR_14, 0), 0x67,
     VAR_9 | VAR_6 | VAR_4,
     0x11, 0x0,
     VAR_12, 3, VAR_3 * VAR_2);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->line6.ifcdev,
   "receive length failed (error %d)\n", VAR_11);
  goto exit;
 }

 VAR_10->firmware_version =
  (VAR_12[0] << 16) | (VAR_12[1] << 8) | (VAR_12[2] << 0);

 for (VAR_13 = 0; VAR_13 <= 16; VAR_13++) {
  VAR_11 = FUNC_3(&VAR_10->line6, 0xf000 + 0x08 * VAR_13, VAR_12, 8);
  if (VAR_11 < 0)
   goto exit;
 }

 VAR_11 = FUNC_4(VAR_14, FUNC_6(VAR_14, 0),
     VAR_7,
     VAR_8 | VAR_6 | VAR_5,
     1, 0,
     ((void*)0), 0, VAR_3 * VAR_2);
exit:
 FUNC_1(VAR_12);
 return VAR_11;
}
