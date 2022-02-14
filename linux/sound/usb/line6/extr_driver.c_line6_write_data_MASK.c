
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int ifcdev; struct usb_device* usbdev; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int,unsigned char*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int FUNC_7(struct usb_line6 *VAR_12, unsigned VAR_13, void *VAR_14,
       unsigned VAR_15)
{
 struct usb_device *VAR_16 = VAR_12->usbdev;
 int VAR_17;
 unsigned char *VAR_18;
 int VAR_19;

 if (VAR_13 > 0xffff || VAR_15 > 0xffff)
  return -VAR_0;

 VAR_18 = FUNC_2(1, VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_17 = FUNC_4(VAR_16, FUNC_6(VAR_16, 0), 0x67,
         VAR_11 | VAR_10 | VAR_9,
         0x0022, VAR_13, VAR_14, VAR_15,
         VAR_7 * VAR_4);

 if (VAR_17 < 0) {
  FUNC_0(VAR_12->ifcdev,
   "write request failed (error %d)\n", VAR_17);
  goto exit;
 }

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  FUNC_3(VAR_6);

  VAR_17 = FUNC_4(VAR_16, FUNC_5(VAR_16, 0),
          0x67,
          VAR_11 | VAR_10 |
          VAR_8,
          0x0012, 0x0000,
          VAR_18, 1, VAR_7 * VAR_4);

  if (VAR_17 < 0) {
   FUNC_0(VAR_12->ifcdev,
    "receiving status failed (error %d)\n", VAR_17);
   goto exit;
  }

  if (*VAR_18 != 0xff)
   break;
 }

 if (*VAR_18 == 0xff) {
  FUNC_0(VAR_12->ifcdev, "write failed after %d retries\n",
   VAR_19);
  VAR_17 = -VAR_1;
 } else if (*VAR_18 != 0) {
  FUNC_0(VAR_12->ifcdev, "write failed (error %d)\n", VAR_17);
  VAR_17 = -VAR_1;
 }
exit:
 FUNC_1(VAR_18);
 return VAR_17;
}
