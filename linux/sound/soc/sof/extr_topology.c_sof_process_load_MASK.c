
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; int cmd; } ;
struct TYPE_11__ {int type; int pipeline_id; TYPE_3__ hdr; int id; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;
struct sof_widget_data {size_t size; TYPE_7__* control; int ctrl_type; int ipc_cmd; TYPE_4__ comp; TYPE_2__* pdata; int data; TYPE_5__ config; } ;
struct sof_ipc_comp_reply {int dummy; } ;
struct sof_ipc_comp_process {size_t size; TYPE_7__* control; int ctrl_type; int ipc_cmd; TYPE_4__ comp; TYPE_2__* pdata; int data; TYPE_5__ config; } ;
struct snd_sof_widget {struct sof_widget_data* private; int comp_id; struct snd_soc_dapm_widget* widget; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_soc_tplg_private {int size; int array; } ;
struct snd_soc_tplg_dapm_widget {struct snd_soc_tplg_private priv; } ;
struct snd_soc_dapm_widget {int num_kcontrols; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_13__ {int cmd; scalar_t__ readback_offset; } ;
struct TYPE_9__ {scalar_t__ size; int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 struct sof_widget_data* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct sof_widget_data*) ;
 struct sof_widget_data* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 struct snd_sof_dev* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (int ,TYPE_7__*,int ,int ,int ,int) ;
 int FUNC_9 (struct snd_soc_component*,TYPE_5__*) ;
 int FUNC_10 (struct snd_sof_dev*,struct snd_soc_dapm_widget*,struct sof_widget_data*,size_t*) ;
 int FUNC_11 (int ,int,struct sof_widget_data*,size_t,struct sof_ipc_comp_reply*,int) ;
 int FUNC_12 (struct snd_soc_component*,TYPE_5__*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_8, int VAR_9,
       struct snd_sof_widget *VAR_10,
       struct snd_soc_tplg_dapm_widget *VAR_11,
       struct sof_ipc_comp_reply *VAR_12,
       int VAR_13)
{
 struct snd_sof_dev *VAR_14 = FUNC_7(VAR_8);
 struct snd_soc_dapm_widget *VAR_15 = VAR_10->widget;
 struct snd_soc_tplg_private *VAR_16 = &VAR_11->priv;
 struct sof_ipc_comp_process *VAR_17 = ((void*)0);
 struct sof_widget_data *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 size_t VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;

 if (VAR_13 == VAR_3) {
  FUNC_1(VAR_14->dev, "error: invalid process comp type %d\n",
   VAR_13);
  return -VAR_0;
 }


 if (VAR_15->num_kcontrols) {
  VAR_18 = FUNC_2(VAR_15->num_kcontrols,
    sizeof(*VAR_18),
    VAR_2);

  if (!VAR_18)
   return -VAR_1;


  VAR_22 = FUNC_10(VAR_14, VAR_15, VAR_18,
        &VAR_19);

  if (VAR_22 < 0)
   goto out;
 }

 VAR_20 = sizeof(struct sof_ipc_comp_process) +
  FUNC_5(VAR_16->size) +
  VAR_19;


 if (VAR_20 > VAR_5) {
  VAR_20 -= VAR_19;
  VAR_19 = 0;
 }

 VAR_17 = FUNC_4(VAR_20, VAR_2);
 if (!VAR_17) {
  VAR_22 = -VAR_1;
  goto out;
 }


 VAR_17->comp.hdr.size = VAR_20;
 VAR_17->comp.hdr.cmd = VAR_4 | VAR_6;
 VAR_17->comp.id = VAR_10->comp_id;
 VAR_17->comp.type = VAR_13;
 VAR_17->comp.pipeline_id = VAR_9;
 VAR_17->config.hdr.size = sizeof(VAR_17->config);

 VAR_22 = FUNC_12(VAR_8, &VAR_17->config, VAR_7,
          FUNC_0(VAR_7), VAR_16->array,
          FUNC_5(VAR_16->size));
 if (VAR_22 != 0) {
  FUNC_1(VAR_14->dev, "error: parse process.cfg tokens failed %d\n",
   FUNC_5(VAR_16->size));
  goto err;
 }

 FUNC_9(VAR_8, &VAR_17->config);






 if (VAR_19) {
  for (VAR_23 = 0; VAR_23 < VAR_15->num_kcontrols; VAR_23++) {
   FUNC_6(&VAR_17->data + VAR_21,
          VAR_18[VAR_23].pdata->data,
          VAR_18[VAR_23].pdata->size);
   VAR_21 += VAR_18[VAR_23].pdata->size;
  }
 }

 VAR_17->size = VAR_19;
 VAR_10->private = VAR_17;

 VAR_22 = FUNC_11(VAR_14->ipc, VAR_17->comp.hdr.cmd, VAR_17,
     VAR_20, VAR_12, sizeof(*VAR_12));

 if (VAR_22 < 0) {
  FUNC_1(VAR_14->dev, "error: create process failed\n");
  goto err;
 }


 if (VAR_19)
  goto out;


 for (VAR_23 = 0; VAR_23 < VAR_15->num_kcontrols; VAR_23++) {
  VAR_18[VAR_23].control->readback_offset = 0;
  VAR_22 = FUNC_8(VAR_14->ipc, VAR_18[VAR_23].control,
          VAR_18[VAR_23].ipc_cmd,
          VAR_18[VAR_23].ctrl_type,
          VAR_18[VAR_23].control->cmd,
          1);
  if (VAR_22 != 0) {
   FUNC_1(VAR_14->dev, "error: send control failed\n");
   break;
  }
 }

err:
 if (VAR_22 < 0)
  FUNC_3(VAR_17);
out:
 FUNC_3(VAR_18);
 return VAR_22;
}
