
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_mixer_elem_list {TYPE_1__* mixer; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int dev; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {int* status; } ;
struct TYPE_8__ {TYPE_2__ iec958; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
typedef int data ;
struct TYPE_10__ {unsigned int bEndpointAddress; } ;
struct TYPE_9__ {int bNumEndpoints; } ;
struct TYPE_6__ {struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_0 (struct usb_host_interface*,int ) ;
 TYPE_4__* FUNC_1 (struct usb_host_interface*) ;
 struct usb_mixer_elem_list* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int ,int ,int ,int,int,unsigned int,unsigned char*,int) ;
 int FUNC_4 (struct snd_usb_audio*) ;
 int FUNC_5 (struct snd_usb_audio*) ;
 struct usb_interface* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_8,
 struct snd_ctl_elem_value *VAR_9)
{
 struct usb_mixer_elem_list *VAR_10 = FUNC_2(VAR_8);
 struct snd_usb_audio *VAR_11 = VAR_10->mixer->chip;
 int VAR_12;
 struct usb_interface *VAR_13;
 struct usb_host_interface *VAR_14;
 unsigned int VAR_15;
 unsigned char VAR_16[3];
 int VAR_17;

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9->value.iec958.status[0] = VAR_8->private_value & 0xff;
 VAR_9->value.iec958.status[1] = (VAR_8->private_value >> 8) & 0xff;
 VAR_9->value.iec958.status[2] = 0x00;


 VAR_13 = FUNC_6(VAR_11->dev, 1);
 if (!VAR_13 || VAR_13->num_altsetting < 2)
  return -VAR_0;
 VAR_14 = &VAR_13->altsetting[1];
 if (FUNC_1(VAR_14)->bNumEndpoints < 1)
  return -VAR_0;
 VAR_15 = FUNC_0(VAR_14, 0)->bEndpointAddress;

 VAR_12 = FUNC_3(VAR_11->dev,
   FUNC_7(VAR_11->dev, 0),
   VAR_4,
   VAR_7 | VAR_6 | VAR_5,
   VAR_3 << 8,
   VAR_15,
   VAR_16,
   sizeof(VAR_16));
 if (VAR_12 < 0)
  goto end;

 VAR_17 = VAR_16[0] | (VAR_16[1] << 8) | (VAR_16[2] << 16);
 VAR_9->value.iec958.status[3] = (VAR_17 == 48000) ?
   VAR_2 : VAR_1;

 VAR_12 = 0;
 end:
 FUNC_5(VAR_11);
 return VAR_12;
}
