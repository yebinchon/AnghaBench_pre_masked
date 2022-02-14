
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {int control; int min; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct usb_mixer_elem_info*,int) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int,int*) ;
 int FUNC_2 (struct usb_mixer_elem_info*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_2->control << 8, &VAR_4);
 if (VAR_3 < 0) {
  VAR_1->value.integer.value[0] = VAR_2->min;
  return FUNC_0(VAR_2, VAR_3);
 }
 VAR_4 = FUNC_2(VAR_2, VAR_4);
 VAR_1->value.integer.value[0] = VAR_4;
 return 0;
}
