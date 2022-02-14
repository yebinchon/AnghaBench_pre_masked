
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uac3_conn ;
typedef int uac2_conn ;
struct TYPE_6__ {int id; TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int control; int val_type; TYPE_2__ head; } ;
struct uac3_insertion_ctl_blk {int bmConInserted; int bNrChannels; } ;
struct uac2_connectors_ctl_blk {int bmConInserted; int bNrChannels; } ;
struct snd_usb_audio {int dev; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_7__ {int* value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_5__ {scalar_t__ protocol; struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int,int,int,struct uac3_insertion_ctl_blk*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 scalar_t__ FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (struct snd_usb_audio*,char*,int ,int,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_7,
       struct snd_ctl_elem_value *VAR_8)
{
 struct usb_mixer_elem_info *VAR_9 = VAR_7->private_data;
 struct snd_usb_audio *VAR_10 = VAR_9->head.mixer->chip;
 int VAR_11 = 0, VAR_12, VAR_13, VAR_14;

 VAR_12 = VAR_9->control << 8 | 0;

 VAR_13 = FUNC_2(VAR_10) ? -VAR_0 : 0;
 if (VAR_13)
  goto error;

 VAR_11 = FUNC_1(VAR_10) | (VAR_9->head.id << 8);
 if (VAR_9->head.mixer->protocol == VAR_3) {
  struct uac2_connectors_ctl_blk VAR_15;

  VAR_13 = FUNC_0(VAR_10->dev, FUNC_5(VAR_10->dev, 0), VAR_1,
          VAR_5 | VAR_6 | VAR_4,
          VAR_12, VAR_11, &VAR_15, sizeof(VAR_15));
  VAR_14 = !!VAR_15.bNrChannels;
 } else {
  struct uac3_insertion_ctl_blk VAR_16;

  VAR_13 = FUNC_0(VAR_10->dev, FUNC_5(VAR_10->dev, 0), VAR_1,
          VAR_5 | VAR_6 | VAR_4,
          VAR_12, VAR_11, &VAR_16, sizeof(VAR_16));
  VAR_14 = !!VAR_16.bmConInserted;
 }

 FUNC_3(VAR_10);

 if (VAR_13 < 0) {
error:
  FUNC_4(VAR_10,
   "cannot get connectors status: req = %#x, wValue = %#x, wIndex = %#x, type = %d\n",
   VAR_2, VAR_12, VAR_11, VAR_9->val_type);
  return VAR_13;
 }

 VAR_8->value.integer.value[0] = VAR_14;
 return 0;
}
