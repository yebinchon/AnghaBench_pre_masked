
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct usb_mixer_elem_info {int * cache_val; TYPE_3__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;






__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;

 switch (VAR_2->head.id) {
 case 130:
  VAR_1->value.integer.value[0] = VAR_2->cache_val[0];
  break;
 case 129:
  VAR_1->value.integer.value[0] = VAR_2->cache_val[0];
  break;
 case 128:
  VAR_1->value.integer.value[0] = VAR_2->cache_val[0];
  break;
 }

 return 0;
}
