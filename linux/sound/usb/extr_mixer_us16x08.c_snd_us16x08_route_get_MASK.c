
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_elem_info {int * cache_val; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct TYPE_4__ {int index; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_1__ id; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 int VAR_3 = VAR_1->id.index;


 VAR_1->value.enumerated.item[0] = VAR_2->cache_val[VAR_3];

 return 0;
}
