
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_gain_value {int l_gain; int r_gain; int ramp_duration; int mute; } ;
struct sst_gain_mixer_control {int type; struct sst_gain_value* gain_val; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct sst_gain_mixer_control *VAR_4 = (void *)VAR_1->private_value;
 struct sst_gain_value *VAR_5 = VAR_4->gain_val;

 switch (VAR_4->type) {
 case 128:
  VAR_2->value.integer.value[0] = VAR_5->l_gain;
  VAR_2->value.integer.value[1] = VAR_5->r_gain;
  break;

 case 130:
  VAR_2->value.integer.value[0] = VAR_5->mute ? 0 : 1;
  break;

 case 129:
  VAR_2->value.integer.value[0] = VAR_5->ramp_duration;
  break;

 default:
  FUNC_0(VAR_3->dev, "Invalid Input- gain type:%d\n",
    VAR_4->type);
  return -VAR_0;
 }

 return 0;
}
