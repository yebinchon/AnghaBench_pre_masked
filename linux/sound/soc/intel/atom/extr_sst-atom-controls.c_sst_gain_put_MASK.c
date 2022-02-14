
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_gain_value {int l_gain; int r_gain; int mute; int ramp_duration; } ;
struct sst_gain_mixer_control {int type; int pipe_id; int instance_id; int module_id; int task_id; TYPE_3__* w; int pname; struct sst_gain_value* gain_val; } ;
struct sst_data {int lock; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {scalar_t__ power; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int ,int,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sst_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (struct sst_data*,struct sst_gain_value*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 int VAR_3 = 0;
 struct snd_soc_component *VAR_4 = FUNC_5(VAR_1);
 struct sst_data *VAR_5 = FUNC_4(VAR_4);
 struct sst_gain_mixer_control *VAR_6 = (void *)VAR_1->private_value;
 struct sst_gain_value *VAR_7 = VAR_6->gain_val;

 FUNC_2(&VAR_5->lock);

 switch (VAR_6->type) {
 case 128:
  VAR_7->l_gain = VAR_2->value.integer.value[0];
  VAR_7->r_gain = VAR_2->value.integer.value[1];
  FUNC_0(VAR_4->dev, "%s: Volume %d, %d\n",
    VAR_6->pname, VAR_7->l_gain, VAR_7->r_gain);
  break;

 case 130:
  VAR_7->mute = !VAR_2->value.integer.value[0];
  FUNC_0(VAR_4->dev, "%s: Mute %d\n", VAR_6->pname, VAR_7->mute);
  break;

 case 129:
  VAR_7->ramp_duration = VAR_2->value.integer.value[0];
  FUNC_0(VAR_4->dev, "%s: Ramp Delay%d\n",
     VAR_6->pname, VAR_7->ramp_duration);
  break;

 default:
  FUNC_3(&VAR_5->lock);
  FUNC_1(VAR_4->dev, "Invalid Input- gain type:%d\n",
    VAR_6->type);
  return -VAR_0;
 }

 if (VAR_6->w && VAR_6->w->power)
  VAR_3 = FUNC_6(VAR_5, VAR_7, VAR_6->task_id,
   VAR_6->pipe_id | VAR_6->instance_id, VAR_6->module_id, 0);
 FUNC_3(&VAR_5->lock);

 return VAR_3;
}
