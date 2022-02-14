
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_3__* chip; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int keep_iface; } ;


 struct usb_mixer_interface* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_interface *VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = !!VAR_1->value.integer.value[0];

 if (VAR_2->chip->keep_iface == VAR_3)
  return 0;
 VAR_2->chip->keep_iface = VAR_3;
 return 1;
}
