
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct uac_clock_source_descriptor {int bmControls; } ;
struct uac3_clock_source_descriptor {int bmControls; } ;
struct snd_usb_audio {int ctrl_intf; struct usb_device* dev; } ;
struct audioformat {scalar_t__ protocol; int altsetting; int clock; } ;
typedef int data ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_usb_audio*,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_usb_audio*,scalar_t__,int ,int) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int,int,int *,int) ;
 int FUNC_5 (struct snd_usb_audio*) ;
 struct uac_clock_source_descriptor* FUNC_6 (int ,int) ;
 struct uac3_clock_source_descriptor* FUNC_7 (int ,int) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct snd_usb_audio*,scalar_t__,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct snd_usb_audio*,char*,int,int) ;
 int FUNC_12 (struct snd_usb_audio*,char*,int,int ,int,int) ;
 int FUNC_13 (struct snd_usb_audio*,char*,int,int ,int,int) ;
 int FUNC_14 (struct usb_device*,int,int ) ;
 int FUNC_15 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct snd_usb_audio *VAR_7, int VAR_8,
         struct usb_host_interface *VAR_9,
         struct audioformat *VAR_10, int VAR_11)
{
 struct usb_device *VAR_12 = VAR_7->dev;
 __le32 VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 bool VAR_18;
 u32 VAR_19;





 VAR_17 = FUNC_3(VAR_7, VAR_10->protocol,
       VAR_10->clock, 1);
 if (VAR_17 < 0) {






  VAR_17 = FUNC_3(VAR_7, VAR_10->protocol,
        VAR_10->clock, 0);
  if (VAR_17 < 0)
   return VAR_17;
 }

 VAR_16 = FUNC_1(VAR_7, VAR_8, VAR_10->altsetting, VAR_17);
 if (VAR_16 == VAR_11)
  goto validation;

 if (VAR_10->protocol == VAR_3) {
  struct uac3_clock_source_descriptor *VAR_20;

  VAR_20 = FUNC_7(VAR_7->ctrl_intf, VAR_17);
  VAR_19 = FUNC_2(VAR_20->bmControls);
 } else {
  struct uac_clock_source_descriptor *VAR_21;

  VAR_21 = FUNC_6(VAR_7->ctrl_intf, VAR_17);
  VAR_19 = VAR_21->bmControls;
 }

 VAR_18 = FUNC_10(VAR_19,
        VAR_1);
 if (VAR_18) {
  VAR_13 = FUNC_0(VAR_11);
  VAR_14 = FUNC_4(VAR_12, FUNC_15(VAR_12, 0), VAR_2,
          VAR_6 | VAR_5 | VAR_4,
          VAR_1 << 8,
          FUNC_5(VAR_7) | (VAR_17 << 8),
          &VAR_13, sizeof(VAR_13));
  if (VAR_14 < 0) {
   FUNC_12(VAR_7,
    "%d:%d: cannot set freq %d (v2/v3): err %d\n",
    VAR_8, VAR_10->altsetting, VAR_11, VAR_14);
   return VAR_14;
  }

  VAR_15 = FUNC_1(VAR_7, VAR_8,
      VAR_10->altsetting, VAR_17);
 } else {
  VAR_15 = VAR_16;
 }

 if (VAR_15 != VAR_11) {
  if (!VAR_18) {
   FUNC_13(VAR_7,
     "%d:%d: freq mismatch (RO clock): req %d, clock runs @%d\n",
     VAR_8, VAR_10->altsetting, VAR_11, VAR_15);
   return -VAR_0;
  }
  FUNC_11(VAR_7,
   "current rate %d is different from the runtime rate %d\n",
   VAR_15, VAR_11);
 }



 if (VAR_11 != VAR_16) {
  FUNC_14(VAR_12, VAR_8, 0);
  FUNC_8(VAR_12);
  FUNC_14(VAR_12, VAR_8, VAR_10->altsetting);
  FUNC_8(VAR_12);
 }

validation:

 if (!FUNC_9(VAR_7, VAR_10->protocol, VAR_17))
  return -VAR_0;
 return 0;
}
