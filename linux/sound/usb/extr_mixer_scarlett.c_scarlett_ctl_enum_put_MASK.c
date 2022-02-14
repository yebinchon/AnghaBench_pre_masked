
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {struct scarlett_mixer_elem_enum_info* private_data; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct scarlett_mixer_elem_enum_info {int start; } ;


 int FUNC_0 (struct usb_mixer_elem_info*,int ,int ,int*) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct scarlett_mixer_elem_enum_info *VAR_3 = VAR_2->private_data;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2, 0, 0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = VAR_1->value.integer.value[0];
 VAR_6 = VAR_6 + VAR_3->start;
 if (VAR_6 != VAR_5) {
  FUNC_1(VAR_2, 0, 0, VAR_6);
  return 1;
 }
 return 0;
}
