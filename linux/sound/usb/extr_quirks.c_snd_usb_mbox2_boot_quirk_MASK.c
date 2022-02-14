
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_host_config {int dummy; } ;
struct usb_device {int dev; struct usb_host_config* actconfig; int descriptor; } ;
struct TYPE_2__ {int wTotalLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (struct usb_host_config*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct usb_device*,int ,int,int,int,int,int**,int) ;
 int FUNC_8 (struct usb_device*,int ,int ,int *,int) ;
 int FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (struct usb_device*) ;

__attribute__((used)) static int FUNC_11(struct usb_device *VAR_5)
{
 struct usb_host_config *VAR_6 = VAR_5->actconfig;
 int VAR_7;
 u8 VAR_8[0x12];
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(FUNC_3(VAR_6)->wTotalLength);

 if (VAR_9 != VAR_3) {
  FUNC_1(&VAR_5->dev, "Invalid firmware size=%d.\n", VAR_9);
  return -VAR_0;
 }

 FUNC_0(&VAR_5->dev, "Sending Digidesign Mbox 2 boot sequence...\n");

 VAR_10 = 0;
 VAR_8[0] = VAR_1;
 while ((VAR_8[0] == VAR_1) && (VAR_10 < 10)) {
  FUNC_6(500);
  FUNC_7(VAR_5, FUNC_9(VAR_5, 0),

   0x85, 0xc0, 0x0001, 0x0000, &VAR_8, 0x0012);
  if (VAR_8[0] == VAR_2)
   break;
  FUNC_0(&VAR_5->dev, "device not ready, resending boot sequence...\n");
  VAR_10++;
 }

 if (VAR_8[0] != VAR_2) {
  FUNC_1(&VAR_5->dev, "Unknown bootresponse=%d, or timed out, ignoring device.\n", VAR_8[0]);
  return -VAR_0;
 }

 FUNC_0(&VAR_5->dev, "device initialised!\n");

 VAR_7 = FUNC_8(VAR_5, VAR_4, 0,
  &VAR_5->descriptor, sizeof(VAR_5->descriptor));
 VAR_6 = VAR_5->actconfig;
 if (VAR_7 < 0)
  FUNC_0(&VAR_5->dev, "error usb_get_descriptor: %d\n", VAR_7);

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7 < 0)
  FUNC_0(&VAR_5->dev, "error usb_reset_configuration: %d\n", VAR_7);
 FUNC_0(&VAR_5->dev, "mbox2_boot: new boot length = %d\n",
  FUNC_4(FUNC_3(VAR_6)->wTotalLength));

 FUNC_5(VAR_5);

 FUNC_2(&VAR_5->dev, "Digidesign Mbox 2: 24bit 48kHz");

 return 0;
}
