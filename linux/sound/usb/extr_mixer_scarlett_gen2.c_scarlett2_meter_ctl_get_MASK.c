
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int mixer; } ;
struct usb_mixer_elem_info {int channels; TYPE_3__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;
 u16 VAR_4[VAR_0];
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_3->head.mixer, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->channels; VAR_5++)
  VAR_2->value.integer.value[VAR_5] = VAR_4[VAR_5];

 return 0;
}
