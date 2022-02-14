
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sof_ipc_comp_reply {int dummy; } ;
struct TYPE_4__ {int size; int cmd; } ;
struct TYPE_5__ {int pipeline_id; TYPE_1__ hdr; int type; int id; } ;
struct sof_ipc_buffer {TYPE_2__ comp; int caps; int size; } ;
struct snd_sof_widget {TYPE_3__* widget; struct sof_ipc_buffer* private; int comp_id; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_soc_tplg_private {int size; int array; } ;
struct snd_soc_tplg_dapm_widget {struct snd_soc_tplg_private priv; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct sof_ipc_buffer*) ;
 struct sof_ipc_buffer* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 struct snd_sof_dev* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (int ,int,struct sof_ipc_buffer*,int,struct sof_ipc_comp_reply*,int) ;
 int FUNC_8 (struct snd_soc_component*,struct sof_ipc_buffer*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_6, int VAR_7,
      struct snd_sof_widget *VAR_8,
      struct snd_soc_tplg_dapm_widget *VAR_9,
      struct sof_ipc_comp_reply *VAR_10)
{
 struct snd_sof_dev *VAR_11 = FUNC_6(VAR_6);
 struct snd_soc_tplg_private *VAR_12 = &VAR_9->priv;
 struct sof_ipc_buffer *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;


 VAR_13->comp.hdr.size = sizeof(*VAR_13);
 VAR_13->comp.hdr.cmd = VAR_3 | VAR_4;
 VAR_13->comp.id = VAR_8->comp_id;
 VAR_13->comp.type = VAR_2;
 VAR_13->comp.pipeline_id = VAR_7;

 VAR_14 = FUNC_8(VAR_6, VAR_13, VAR_5,
          FUNC_0(VAR_5), VAR_12->array,
          FUNC_5(VAR_12->size));
 if (VAR_14 != 0) {
  FUNC_2(VAR_11->dev, "error: parse buffer tokens failed %d\n",
   VAR_12->size);
  FUNC_3(VAR_13);
  return VAR_14;
 }

 FUNC_1(VAR_11->dev, "buffer %s: size %d caps 0x%x\n",
  VAR_8->widget->name, VAR_13->size, VAR_13->caps);

 VAR_8->private = VAR_13;

 VAR_14 = FUNC_7(VAR_11->ipc, VAR_13->comp.hdr.cmd, VAR_13,
     sizeof(*VAR_13), VAR_10, sizeof(*VAR_10));
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "error: buffer %s load failed\n",
   VAR_8->widget->name);
  FUNC_3(VAR_13);
 }

 return VAR_14;
}
