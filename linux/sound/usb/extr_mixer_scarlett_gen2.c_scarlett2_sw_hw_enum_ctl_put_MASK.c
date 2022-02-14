
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_5__* chip; struct scarlett2_mixer_data* private_data; } ;
struct TYPE_7__ {struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {int control; TYPE_1__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_8__ {int * value; } ;
struct TYPE_9__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct scarlett2_mixer_data {int* vol_sw_hw_switch; int* vol; int master_vol; int data_mutex; TYPE_6__** vol_ctls; } ;
struct TYPE_12__ {int id; TYPE_4__* vd; } ;
struct TYPE_11__ {int card; } ;
struct TYPE_10__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_mixer_interface*,int ,int,int) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5,
     struct snd_ctl_elem_value *VAR_6)
{
 struct usb_mixer_elem_info *VAR_7 = VAR_5->private_data;
 struct usb_mixer_interface *VAR_8 = VAR_7->head.mixer;
 struct scarlett2_mixer_data *VAR_9 = VAR_8->private_data;

 int VAR_10 = VAR_7->control;
 int VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0(&VAR_9->data_mutex);

 VAR_11 = VAR_9->vol_sw_hw_switch[VAR_10];
 VAR_12 = !!VAR_6->value.integer.value[0];

 if (VAR_11 == VAR_12)
  goto unlock;

 VAR_9->vol_sw_hw_switch[VAR_10] = VAR_12;




 if (VAR_12)
  VAR_9->vol_ctls[VAR_10]->vd[0].access &=
   ~VAR_3;
 else
  VAR_9->vol_ctls[VAR_10]->vd[0].access |=
   VAR_3;


 VAR_9->vol[VAR_10] = VAR_9->master_vol;


 VAR_13 = FUNC_2(
  VAR_8, VAR_0,
  VAR_10, VAR_9->master_vol - VAR_2);
 if (VAR_13 < 0)
  goto unlock;


 FUNC_3(VAR_8->chip->card, VAR_4,
         &VAR_9->vol_ctls[VAR_10]->id);


 VAR_13 = FUNC_2(VAR_8, VAR_1,
           VAR_10, VAR_12);

unlock:
 FUNC_1(&VAR_9->data_mutex);
 return VAR_13;
}
