
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {struct snd_us16x08_meter_store* private_data; } ;
struct snd_us16x08_meter_store {int comp_active_index; int comp_index; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct usb_mixer_elem_info *VAR_4 = VAR_2->private_data;
 struct snd_us16x08_meter_store *VAR_5 = VAR_4->private_data;
 int VAR_6;

 VAR_6 = VAR_3->value.integer.value[0];


 if (VAR_6 < 0 || VAR_6 >= VAR_1)
  return -VAR_0;

 VAR_5->comp_active_index = VAR_6;
 VAR_5->comp_index = VAR_6;

 return 1;
}
