
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
struct scarlett2_mixer_data {int* pad_switch; int data_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_mixer_interface*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;
 struct usb_mixer_interface *VAR_4 = VAR_3->head.mixer;
 struct scarlett2_mixer_data *VAR_5 = VAR_4->private_data;

 int VAR_6 = VAR_3->control;
 int VAR_7, VAR_8, VAR_9 = 0;

 FUNC_0(&VAR_5->data_mutex);

 VAR_7 = VAR_5->pad_switch[VAR_6];
 VAR_8 = !!VAR_2->value.integer.value[0];

 if (VAR_7 == VAR_8)
  goto unlock;

 VAR_5->pad_switch[VAR_6] = VAR_8;


 VAR_9 = FUNC_2(VAR_4, VAR_0,
           VAR_6, VAR_8);

unlock:
 FUNC_1(&VAR_5->data_mutex);
 return VAR_9;
}
