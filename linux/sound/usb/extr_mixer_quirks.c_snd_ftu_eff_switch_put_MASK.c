
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_elem_list {TYPE_2__* kctl; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int* item; } ;
struct TYPE_4__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct TYPE_5__ {unsigned int private_value; } ;


 int FUNC_0 (struct usb_mixer_elem_list*) ;
 struct usb_mixer_elem_list* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_list *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = VAR_2->kctl->private_value;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3 >> 24;
 VAR_6 = VAR_1->value.enumerated.item[0];
 if (VAR_4 == VAR_6)
  return 0;

 VAR_0->private_value &= ~(0xff << 24);
 VAR_0->private_value |= VAR_6 << 24;
 VAR_5 = FUNC_0(VAR_2);
 return VAR_5 < 0 ? VAR_5 : 1;
}
