
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int val_type; TYPE_2__ head; scalar_t__ idx_off; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_3__ {scalar_t__ protocol; struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int) ;
 int FUNC_1 (int ,int ,int,int,int,int,unsigned char*,int) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (struct snd_usb_audio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_usb_audio*,char*,...) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct usb_mixer_elem_info *VAR_10,
    int VAR_11, int VAR_12, int VAR_13)
{
 struct snd_usb_audio *VAR_14 = VAR_10->head.mixer->chip;
 unsigned char VAR_15[4];
 int VAR_16 = 0, VAR_17, VAR_18, VAR_19 = 10;

 VAR_12 += VAR_10->idx_off;


 if (VAR_10->head.mixer->protocol == VAR_5) {
  VAR_17 = VAR_10->val_type >= VAR_7 ? 2 : 1;
 } else {
  VAR_17 = FUNC_5(VAR_10->val_type);


  if (VAR_11 != VAR_4) {
   FUNC_6(VAR_14, "RANGE setting not yet supported\n");
   return -VAR_0;
  }

  VAR_11 = VAR_3;
 }

 VAR_13 = FUNC_0(VAR_10, VAR_13);
 VAR_15[0] = VAR_13 & 0xff;
 VAR_15[1] = (VAR_13 >> 8) & 0xff;
 VAR_15[2] = (VAR_13 >> 16) & 0xff;
 VAR_15[3] = (VAR_13 >> 24) & 0xff;

 VAR_18 = FUNC_3(VAR_14);
 if (VAR_18 < 0)
  return -VAR_1;

 while (VAR_19-- > 0) {
  VAR_16 = FUNC_2(VAR_14) | (VAR_10->head.id << 8);
  VAR_18 = FUNC_1(VAR_14->dev,
          FUNC_7(VAR_14->dev, 0), VAR_11,
          VAR_8 | VAR_9 | VAR_6,
          VAR_12, VAR_16, VAR_15, VAR_17);
  if (VAR_18 >= 0) {
   VAR_18 = 0;
   goto out;
  } else if (VAR_18 == -VAR_2) {
   goto out;
  }
 }
 FUNC_6(VAR_14, "cannot set ctl value: req = %#x, wValue = %#x, wIndex = %#x, type = %d, data = %#x/%#x\n",
        VAR_11, VAR_12, VAR_16, VAR_10->val_type, VAR_15[0], VAR_15[1]);
 VAR_18 = -VAR_0;

 out:
 FUNC_4(VAR_14);
 return VAR_18;
}
