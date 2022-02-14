
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct TYPE_4__ {struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {int control; TYPE_1__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct scarlett2_mixer_data {int* mux; int data_mutex; scalar_t__ num_mux_srcs; } ;


 int FUNC_0 (int ,long,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct usb_mixer_interface *VAR_3 = VAR_2->head.mixer;
 struct scarlett2_mixer_data *VAR_4 = VAR_3->private_data;
 int VAR_5 = VAR_2->control;
 int VAR_6, VAR_7, VAR_8 = 0;

 FUNC_1(&VAR_4->data_mutex);

 VAR_6 = VAR_4->mux[VAR_5];
 VAR_7 = FUNC_0(VAR_1->value.integer.value[0],
      0L, VAR_4->num_mux_srcs - 1L);

 if (VAR_6 == VAR_7)
  goto unlock;

 VAR_4->mux[VAR_5] = VAR_7;
 VAR_8 = FUNC_3(VAR_3);
 if (VAR_8 == 0)
  VAR_8 = 1;

unlock:
 FUNC_2(&VAR_4->data_mutex);
 return VAR_8;
}
