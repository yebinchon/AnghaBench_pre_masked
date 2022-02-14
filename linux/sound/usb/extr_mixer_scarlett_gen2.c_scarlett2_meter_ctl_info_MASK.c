
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {int channels; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_4__ {int max; int step; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {TYPE_1__ value; int count; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_info *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->channels;
 VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = 4095;
 VAR_2->value.integer.step = 1;
 return 0;
}
