
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_list {int dummy; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct usb_mixer_elem_list* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct usb_mixer_elem_list*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_list *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_4 = VAR_0->private_value;
 VAR_3 &= 0xfffff0f0;
 VAR_3 |= (VAR_1->value.iec958.status[1] & 0x0f) << 8;
 VAR_3 |= (VAR_1->value.iec958.status[0] & 0x0f);

 VAR_3 &= 0xffff0fff;
 VAR_3 |= (VAR_1->value.iec958.status[1] & 0xf0) << 8;





 if (VAR_3 == VAR_4)
  return 0;

 VAR_0->private_value = VAR_3;
 VAR_5 = FUNC_1(VAR_2);
 return VAR_5 < 0 ? VAR_5 : 1;
}
