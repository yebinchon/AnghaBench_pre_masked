
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_list {struct usb_mixer_interface* mixer; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int,int) ;
 struct usb_mixer_elem_list* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct usb_mixer_elem_list *VAR_3 = FUNC_1(VAR_1);
 struct usb_mixer_interface *VAR_4 = VAR_3->mixer;
 int VAR_5 = VAR_1->private_value & 0xff;
 unsigned int VAR_6 = VAR_2->value.integer.value[0];
 int VAR_7 = VAR_1->private_value >> 8;
 int VAR_8;

 if (VAR_6 > 1)
  return -VAR_0;
 if (VAR_6 == VAR_7)
  return 0;
 VAR_1->private_value = (VAR_6 << 8) | VAR_5;
 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_5);
 return VAR_8 < 0 ? VAR_8 : 1;
}
