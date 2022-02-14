
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int val_type; TYPE_2__ head; } ;
struct snd_usb_audio {int dev; } ;
typedef int buf ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_3__ {struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int ) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int,unsigned char*,int) ;
 int FUNC_4 (struct snd_usb_audio*) ;
 scalar_t__ FUNC_5 (struct snd_usb_audio*) ;
 int FUNC_6 (struct snd_usb_audio*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_usb_audio*,char*,int,int,int,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_mixer_elem_info *VAR_7, int VAR_8,
       int VAR_9, int *VAR_10)
{
 struct snd_usb_audio *VAR_11 = VAR_7->head.mixer->chip;

 unsigned char VAR_12[sizeof(__u16) + 3 * sizeof(__u32)];
 unsigned char *VAR_13;
 int VAR_14 = 0, VAR_15, VAR_16, VAR_17;
 __u8 VAR_18;

 VAR_16 = FUNC_7(VAR_7->val_type);

 if (VAR_8 == 131) {
  VAR_18 = VAR_2;
  VAR_17 = VAR_16;
 } else {
  VAR_18 = VAR_3;
  VAR_17 = sizeof(__u16) + 3 * VAR_16;
 }

 FUNC_1(VAR_12, 0, sizeof(VAR_12));

 VAR_15 = FUNC_5(VAR_11) ? -VAR_1 : 0;
 if (VAR_15)
  goto error;

 VAR_14 = FUNC_4(VAR_11) | (VAR_7->head.id << 8);
 VAR_15 = FUNC_3(VAR_11->dev, FUNC_9(VAR_11->dev, 0), VAR_18,
         VAR_5 | VAR_6 | VAR_4,
         VAR_9, VAR_14, VAR_12, VAR_17);
 FUNC_6(VAR_11);

 if (VAR_15 < 0) {
error:
  FUNC_8(VAR_11,
   "cannot get ctl value: req = %#x, wValue = %#x, wIndex = %#x, type = %d\n",
   VAR_8, VAR_9, VAR_14, VAR_7->val_type);
  return VAR_15;
 }



 switch (VAR_8) {
 case 131:
  VAR_13 = VAR_12;
  break;
 case 129:
  VAR_13 = VAR_12 + sizeof(__u16);
  break;
 case 130:
  VAR_13 = VAR_12 + sizeof(__u16) + VAR_16;
  break;
 case 128:
  VAR_13 = VAR_12 + sizeof(__u16) + VAR_16 * 2;
  break;
 default:
  return -VAR_0;
 }

 *VAR_10 = FUNC_0(VAR_7,
       FUNC_2(VAR_13, VAR_16));

 return 0;
}
