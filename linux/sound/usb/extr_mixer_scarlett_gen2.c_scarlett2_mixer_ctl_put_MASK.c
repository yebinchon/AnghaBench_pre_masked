
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct TYPE_4__ {struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {size_t control; TYPE_1__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {int* mix; int data_mutex; struct scarlett2_device_info* info; } ;
struct scarlett2_device_info {struct scarlett2_ports* ports; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_mixer_interface*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct usb_mixer_elem_info *VAR_4 = VAR_2->private_data;
 struct usb_mixer_interface *VAR_5 = VAR_4->head.mixer;
 struct scarlett2_mixer_data *VAR_6 = VAR_5->private_data;
 const struct scarlett2_device_info *VAR_7 = VAR_6->info;
 const struct scarlett2_ports *VAR_8 = VAR_7->ports;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0(&VAR_6->data_mutex);

 VAR_9 = VAR_6->mix[VAR_4->control];
 VAR_10 = VAR_3->value.integer.value[0];
 VAR_11 = VAR_8[VAR_1].num[VAR_0];
 VAR_12 = VAR_4->control / VAR_11;

 if (VAR_9 == VAR_10)
  goto unlock;

 VAR_6->mix[VAR_4->control] = VAR_10;
 VAR_13 = FUNC_2(VAR_5, VAR_12);
 if (VAR_13 == 0)
  VAR_13 = 1;

unlock:
 FUNC_1(&VAR_6->data_mutex);
 return VAR_13;
}
