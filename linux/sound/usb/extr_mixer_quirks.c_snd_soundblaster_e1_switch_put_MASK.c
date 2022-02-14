
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_list {int mixer; } ;
struct snd_kcontrol {unsigned char private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct usb_mixer_elem_list* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_list *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3 = !!VAR_1->value.integer.value[0];
 int VAR_4;

 if (VAR_0->private_value == VAR_3)
  return 0;
 VAR_0->private_value = VAR_3;
 VAR_4 = FUNC_1(VAR_2->mixer, VAR_3);
 return VAR_4 < 0 ? VAR_4 : 1;
}
