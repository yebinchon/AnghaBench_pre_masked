
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct TYPE_6__ {struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {TYPE_3__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct scarlett2_mixer_data {int master_vol; int data_mutex; scalar_t__ vol_updated; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct usb_mixer_interface *VAR_3 = VAR_2->head.mixer;
 struct scarlett2_mixer_data *VAR_4 = VAR_3->private_data;

 if (VAR_4->vol_updated) {
  FUNC_0(&VAR_4->data_mutex);
  FUNC_2(VAR_3);
  FUNC_1(&VAR_4->data_mutex);
 }

 VAR_1->value.integer.value[0] = VAR_4->master_vol;
 return 0;
}
