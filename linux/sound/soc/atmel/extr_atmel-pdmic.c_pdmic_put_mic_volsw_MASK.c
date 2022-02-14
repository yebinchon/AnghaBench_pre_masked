
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_mixer_control {int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int dgain; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_8,
 struct snd_ctl_elem_value *VAR_9)
{
 struct soc_mixer_control *VAR_10 =
  (struct soc_mixer_control *)VAR_8->private_value;
 struct snd_soc_component *VAR_11 = FUNC_1(VAR_8);
 int VAR_12 = VAR_10->max;
 unsigned int VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->value.integer.value[0];

 if (VAR_13 > VAR_12)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_11, VAR_4, VAR_5,
    VAR_7[VAR_13].dgain << VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_11, VAR_1, VAR_2,
    VAR_7[VAR_13].scale << VAR_3);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
