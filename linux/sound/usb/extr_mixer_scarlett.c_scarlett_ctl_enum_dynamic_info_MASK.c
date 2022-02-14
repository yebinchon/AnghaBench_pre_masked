
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {int channels; struct scarlett_mixer_elem_enum_info* private_data; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct scarlett_mixer_elem_enum_info {unsigned int len; int offsets; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;
 struct scarlett_mixer_elem_enum_info *VAR_4 = VAR_3->private_data;
 unsigned int VAR_5 = VAR_4->len;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->channels;
 VAR_2->value.enumerated.items = VAR_5;

 if (VAR_2->value.enumerated.item >= VAR_5)
  VAR_2->value.enumerated.item = VAR_5 - 1;


 FUNC_0(VAR_2->value.enumerated.item,
          VAR_2->value.enumerated.name,
          VAR_4->offsets);

 return 0;
}
