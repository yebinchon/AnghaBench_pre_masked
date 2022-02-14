
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sof_ipc_pipe_new {int id; int core; int list; struct sof_ipc_pipe_new* private; struct sof_ipc_pipe_new* control_data; struct sof_ipc_pipe_new* volume_table; struct sof_ipc_pipe_new* dai_config; struct snd_soc_dapm_widget* widget; } ;
struct TYPE_6__ {struct sof_ipc_pipe_new* private; } ;
struct soc_mixer_control {int max; TYPE_2__ dobj; } ;
struct TYPE_7__ {struct sof_ipc_pipe_new* private; } ;
struct soc_enum {TYPE_3__ dobj; } ;
struct TYPE_8__ {struct sof_ipc_pipe_new* private; } ;
struct soc_bytes_ext {TYPE_4__ dobj; } ;
struct snd_sof_widget {int id; int core; int list; struct snd_sof_widget* private; struct snd_sof_widget* control_data; struct snd_sof_widget* volume_table; struct snd_sof_widget* dai_config; struct snd_soc_dapm_widget* widget; } ;
struct snd_sof_dev {int enabled_cores_mask; int dev; } ;
struct snd_sof_dai {int id; int core; int list; struct snd_sof_dai* private; struct snd_sof_dai* control_data; struct snd_sof_dai* volume_table; struct snd_sof_dai* dai_config; struct snd_soc_dapm_widget* widget; } ;
struct snd_sof_control {int id; int core; int list; struct snd_sof_control* private; struct snd_sof_control* control_data; struct snd_sof_control* volume_table; struct snd_sof_control* dai_config; struct snd_soc_dapm_widget* widget; } ;
struct TYPE_5__ {int kcontrol_type; } ;
struct snd_soc_dobj {TYPE_1__ widget; struct sof_ipc_pipe_new* private; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol_new* kcontrol_news; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sof_ipc_pipe_new*) ;
 int FUNC_3 (int *) ;
 struct snd_sof_dev* FUNC_4 (struct snd_soc_component*) ;



 int FUNC_5 (struct snd_sof_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0,
        struct snd_soc_dobj *VAR_1)
{
 struct snd_sof_dev *VAR_2 = FUNC_4(VAR_0);
 const struct snd_kcontrol_new *VAR_3;
 struct snd_soc_dapm_widget *VAR_4;
 struct sof_ipc_pipe_new *VAR_5;
 struct snd_sof_control *VAR_6;
 struct snd_sof_widget *VAR_7;
 struct soc_mixer_control *VAR_8;
 struct soc_bytes_ext *VAR_9;
 struct snd_sof_dai *VAR_10;
 struct soc_enum *VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 VAR_7 = VAR_1->private;
 if (!VAR_7)
  return 0;

 VAR_4 = VAR_7->widget;

 switch (VAR_7->id) {
 case 130:
 case 129:
  VAR_10 = VAR_7->private;

  if (VAR_10) {

   FUNC_2(VAR_10->dai_config);
   FUNC_3(&VAR_10->list);
  }
  break;
 case 128:


  VAR_5 = VAR_7->private;
  VAR_12 = FUNC_5(VAR_2, 1 << VAR_5->core);
  if (VAR_12 < 0)
   FUNC_0(VAR_2->dev, "error: powering down pipeline schedule core %d\n",
    VAR_5->core);


  VAR_2->enabled_cores_mask &= ~(1 << VAR_5->core);

  break;
 default:
  break;
 }
 for (VAR_13 = 0; VAR_13 < VAR_4->num_kcontrols; VAR_13++) {
  VAR_3 = &VAR_4->kcontrol_news[VAR_13];
  switch (VAR_1->widget.kcontrol_type) {
  case 131:
   VAR_8 = (struct soc_mixer_control *)VAR_3->private_value;
   VAR_6 = VAR_8->dobj.private;
   if (VAR_8->max > 1)
    FUNC_2(VAR_6->volume_table);
   break;
  case 132:
   VAR_11 = (struct soc_enum *)VAR_3->private_value;
   VAR_6 = VAR_11->dobj.private;
   break;
  case 133:
   VAR_9 = (struct soc_bytes_ext *)VAR_3->private_value;
   VAR_6 = VAR_9->dobj.private;
   break;
  default:
   FUNC_1(VAR_2->dev, "unsupported kcontrol_type\n");
   goto out;
  }
  FUNC_2(VAR_6->control_data);
  FUNC_3(&VAR_6->list);
  FUNC_2(VAR_6);
 }

out:

 FUNC_2(VAR_7->private);


 FUNC_3(&VAR_7->list);
 FUNC_2(VAR_7);

 return VAR_12;
}
