
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {size_t control; TYPE_2__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_7__ {int * item; } ;
struct TYPE_8__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct scarlett2_mixer_data {int * pad_switch; } ;
struct TYPE_5__ {struct scarlett2_mixer_data* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct scarlett2_mixer_data *VAR_3 = VAR_2->head.mixer->private_data;

 VAR_1->value.enumerated.item[0] =
  VAR_3->pad_switch[VAR_2->control];
 return 0;
}
