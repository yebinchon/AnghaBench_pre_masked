
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sof_ipc_ctrl_data {TYPE_3__* chanv; } ;
struct TYPE_8__ {struct snd_sof_control* private; } ;
struct soc_mixer_control {scalar_t__ max; TYPE_4__ dobj; } ;
struct snd_sof_control {unsigned int num_channels; int volume_table; struct sof_ipc_ctrl_data* control_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {int value; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

int FUNC_1(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_sof_control *VAR_3 = VAR_2->dobj.private;
 struct sof_ipc_ctrl_data *VAR_4 = VAR_3->control_data;
 unsigned int VAR_5, VAR_6 = VAR_3->num_channels;


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_1->value.integer.value[VAR_5] =
   FUNC_0(VAR_4->chanv[VAR_5].value,
         VAR_3->volume_table, VAR_2->max + 1);

 return 0;
}
