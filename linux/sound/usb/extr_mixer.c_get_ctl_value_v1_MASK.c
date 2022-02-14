
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int val_type; TYPE_2__ head; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_3__ {struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,int ,int,int,int,int,unsigned char*,int) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (struct snd_usb_audio*) ;
 int FUNC_5 (struct snd_usb_audio*) ;
 int FUNC_6 (struct snd_usb_audio*,char*,int,int,int,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_mixer_elem_info *VAR_7, int VAR_8,
       int VAR_9, int *VAR_10)
{
 struct snd_usb_audio *VAR_11 = VAR_7->head.mixer->chip;
 unsigned char VAR_12[2];
 int VAR_13 = VAR_7->val_type >= VAR_4 ? 2 : 1;
 int VAR_14 = 10;
 int VAR_15 = 0, VAR_16;

 VAR_16 = FUNC_4(VAR_11);
 if (VAR_16 < 0)
  return -VAR_1;

 while (VAR_14-- > 0) {
  VAR_15 = FUNC_3(VAR_11) | (VAR_7->head.id << 8);
  VAR_16 = FUNC_2(VAR_11->dev, FUNC_7(VAR_11->dev, 0), VAR_8,
          VAR_5 | VAR_6 | VAR_3,
          VAR_9, VAR_15, VAR_12, VAR_13);
  if (VAR_16 >= VAR_13) {
   *VAR_10 = FUNC_0(VAR_7, FUNC_1(VAR_12, VAR_13));
   VAR_16 = 0;
   goto out;
  } else if (VAR_16 == -VAR_2) {
   goto out;
  }
 }
 FUNC_6(VAR_11,
  "cannot get ctl value: req = %#x, wValue = %#x, wIndex = %#x, type = %d\n",
  VAR_8, VAR_9, VAR_15, VAR_7->val_type);
 VAR_16 = -VAR_0;

 out:
 FUNC_5(VAR_11);
 return VAR_16;
}
