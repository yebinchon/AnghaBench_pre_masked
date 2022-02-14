
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_list {struct usb_mixer_interface* mixer; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,unsigned int) ;
 struct usb_mixer_elem_list* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct usb_mixer_elem_list *VAR_3 = FUNC_1(VAR_1);
 struct usb_mixer_interface *VAR_4 = VAR_3->mixer;
 unsigned int VAR_5 = VAR_2->value.enumerated.item[0];
 int VAR_6;

 if (VAR_5 > 1)
  return -VAR_0;

 if (VAR_5 == VAR_1->private_value)
  return 0;

 VAR_1->private_value = VAR_5;
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 return VAR_6 < 0 ? VAR_6 : 1;
}
