
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sof_widget_data {int ctrl_type; int ipc_cmd; TYPE_8__* control; TYPE_7__* pdata; } ;
struct TYPE_9__ {TYPE_8__* private; } ;
struct soc_mixer_control {TYPE_1__ dobj; } ;
struct TYPE_11__ {TYPE_8__* private; } ;
struct soc_enum {TYPE_3__ dobj; } ;
struct TYPE_10__ {TYPE_8__* private; } ;
struct soc_bytes_ext {TYPE_2__ dobj; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_12__ {int kcontrol_type; } ;
struct TYPE_13__ {TYPE_4__ widget; } ;
struct snd_soc_dapm_widget {int num_kcontrols; int name; TYPE_5__ dobj; struct snd_kcontrol_new* kcontrol_news; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;
struct TYPE_16__ {int cmd; TYPE_6__* control_data; } ;
struct TYPE_15__ {scalar_t__ magic; scalar_t__ size; } ;
struct TYPE_14__ {TYPE_7__* data; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct snd_sof_dev *VAR_6,
    struct snd_soc_dapm_widget *VAR_7,
    struct sof_widget_data *VAR_8,
    size_t *VAR_9)
{
 const struct snd_kcontrol_new *VAR_10;
 struct soc_mixer_control *VAR_11;
 struct soc_bytes_ext *VAR_12;
 struct soc_enum *VAR_13;
 int VAR_14;

 *VAR_9 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_7->num_kcontrols; VAR_14++) {
  VAR_10 = &VAR_7->kcontrol_news[VAR_14];

  switch (VAR_7->dobj.widget.kcontrol_type) {
  case 132:
   VAR_11 = (struct soc_mixer_control *)VAR_10->private_value;
   VAR_8[VAR_14].control = VAR_11->dobj.private;
   break;
  case 134:
   VAR_12 = (struct soc_bytes_ext *)VAR_10->private_value;
   VAR_8[VAR_14].control = VAR_12->dobj.private;
   break;
  case 133:
   VAR_13 = (struct soc_enum *)VAR_10->private_value;
   VAR_8[VAR_14].control = VAR_13->dobj.private;
   break;
  default:
   FUNC_0(VAR_6->dev, "error: unknown kcontrol type %d in widget %s\n",
    VAR_7->dobj.widget.kcontrol_type,
    VAR_7->name);
   return -VAR_0;
  }

  if (!VAR_8[VAR_14].control) {
   FUNC_0(VAR_6->dev, "error: no scontrol for widget %s\n",
    VAR_7->name);
   return -VAR_0;
  }

  VAR_8[VAR_14].pdata = VAR_8[VAR_14].control->control_data->data;
  if (!VAR_8[VAR_14].pdata)
   return -VAR_0;


  if (VAR_8[VAR_14].pdata->magic != VAR_1)
   return -VAR_0;

  *VAR_9 += VAR_8[VAR_14].pdata->size;


  switch (VAR_8[VAR_14].control->cmd) {
  case 128:
  case 130:
  case 129:
   VAR_8[VAR_14].ipc_cmd = VAR_5;
   VAR_8[VAR_14].ctrl_type = VAR_3;
   break;
  case 131:
   VAR_8[VAR_14].ipc_cmd = VAR_4;
   VAR_8[VAR_14].ctrl_type = VAR_2;
   break;
  default:
   break;
  }
 }

 return 0;
}
