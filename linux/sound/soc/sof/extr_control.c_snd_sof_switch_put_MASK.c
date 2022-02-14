
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sof_ipc_ctrl_data {TYPE_4__* chanv; } ;
struct TYPE_5__ {struct snd_sof_control* private; } ;
struct soc_mixer_control {TYPE_1__ dobj; } ;
struct snd_sof_dev {int ipc; int dev; } ;
struct snd_sof_control {unsigned int num_channels; struct sof_ipc_ctrl_data* control_data; struct snd_sof_dev* sdev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_6__ {scalar_t__* value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_8__ {scalar_t__ value; unsigned int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct snd_sof_control*,int ,int ,int ,int) ;

int FUNC_2(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_3->private_value;
 struct snd_sof_control *VAR_6 = VAR_5->dobj.private;
 struct snd_sof_dev *VAR_7 = VAR_6->sdev;
 struct sof_ipc_ctrl_data *VAR_8 = VAR_6->control_data;
 unsigned int VAR_9, VAR_10 = VAR_6->num_channels;
 bool VAR_11 = 0;
 u32 VAR_12;


 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_12 = VAR_4->value.integer.value[VAR_9];
  VAR_11 = VAR_11 || (VAR_12 != VAR_8->chanv[VAR_9].value);
  VAR_8->chanv[VAR_9].channel = VAR_9;
  VAR_8->chanv[VAR_9].value = VAR_12;
 }


 if (FUNC_0(VAR_7->dev))
  FUNC_1(VAR_7->ipc, VAR_6,
           VAR_2,
           VAR_1,
           VAR_0,
           1);

 return VAR_11;
}
