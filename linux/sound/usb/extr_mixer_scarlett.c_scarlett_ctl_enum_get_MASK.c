
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {struct scarlett_mixer_elem_enum_info* private_data; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct scarlett_mixer_elem_enum_info {scalar_t__ len; scalar_t__ start; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct scarlett_mixer_elem_enum_info *VAR_3 = VAR_2->private_data;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_2, 0, 0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_5 - VAR_3->start, 0, VAR_3->len-1);

 VAR_1->value.enumerated.item[0] = VAR_5;

 return 0;
}
