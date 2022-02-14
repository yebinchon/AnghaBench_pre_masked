
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_fw_version {scalar_t__ abi_version; } ;
struct sof_ipc_fw_ready {struct sof_ipc_fw_version version; } ;
struct sof_ipc_ctrl_value_comp {int dummy; } ;
struct sof_ipc_ctrl_value_chan {int dummy; } ;
struct sof_ipc_ctrl_data_params {int msg_bytes; int hdr_bytes; int elems; } ;
struct TYPE_5__ {int cmd; int size; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct sof_ipc_ctrl_data {int num_elems; int cmd; int type; int comp_id; TYPE_3__ rhdr; scalar_t__ elems_remaining; TYPE_1__* data; scalar_t__ msg_index; int chanv; } ;
struct sof_abi_hdr {int dummy; } ;
struct snd_sof_ipc {struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; int ipc; int mmio_bar; struct sof_ipc_fw_ready fw_ready; } ;
struct snd_sof_control {int num_channels; int size; int comp_id; int readback_offset; struct sof_ipc_ctrl_data* control_data; } ;
typedef enum sof_ipc_ctrl_type { ____Placeholder_sof_ipc_ctrl_type } sof_ipc_ctrl_type ;
typedef enum sof_ipc_ctrl_cmd { ____Placeholder_sof_ipc_ctrl_cmd } sof_ipc_ctrl_cmd ;
struct TYPE_4__ {int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;






 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_sof_dev*,int ,int ,int ,size_t) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int ,int ,size_t) ;
 int FUNC_5 (int ,int,struct sof_ipc_ctrl_data*,scalar_t__,struct sof_ipc_ctrl_data*,scalar_t__) ;
 int FUNC_6 (struct snd_sof_dev*,struct sof_ipc_ctrl_data*,struct sof_ipc_ctrl_data_params*,int) ;

int FUNC_7(struct snd_sof_ipc *VAR_3,
      struct snd_sof_control *VAR_4,
      u32 VAR_5,
      enum sof_ipc_ctrl_type VAR_6,
      enum sof_ipc_ctrl_cmd VAR_7,
      bool VAR_8)
{
 struct sof_ipc_ctrl_data *VAR_9 = VAR_4->control_data;
 struct snd_sof_dev *VAR_10 = VAR_3->sdev;
 struct sof_ipc_fw_ready *VAR_11 = &VAR_10->fw_ready;
 struct sof_ipc_fw_version *VAR_12 = &VAR_11->version;
 struct sof_ipc_ctrl_data_params VAR_13;
 size_t VAR_14;
 int VAR_15;


 if (VAR_4->readback_offset != 0) {

  VAR_14 = sizeof(struct sof_ipc_ctrl_value_chan) *
  VAR_9->num_elems;
  if (VAR_8)
   FUNC_4(VAR_10, VAR_10->mmio_bar,
      VAR_4->readback_offset,
      VAR_9->chanv, VAR_14);

  else
   FUNC_3(VAR_10, VAR_10->mmio_bar,
            VAR_4->readback_offset,
            VAR_9->chanv, VAR_14);
  return 0;
 }

 VAR_9->rhdr.hdr.cmd = VAR_1 | VAR_5;
 VAR_9->cmd = VAR_7;
 VAR_9->type = VAR_6;
 VAR_9->comp_id = VAR_4->comp_id;
 VAR_9->msg_index = 0;


 switch (VAR_9->type) {
 case 131:
 case 130:
  VAR_13.msg_bytes = VAR_4->num_channels *
   sizeof(struct sof_ipc_ctrl_value_chan);
  VAR_13.hdr_bytes = sizeof(struct sof_ipc_ctrl_data);
  VAR_13.elems = VAR_4->num_channels;
  break;
 case 129:
 case 128:
  VAR_13.msg_bytes = VAR_4->num_channels *
   sizeof(struct sof_ipc_ctrl_value_comp);
  VAR_13.hdr_bytes = sizeof(struct sof_ipc_ctrl_data);
  VAR_13.elems = VAR_4->num_channels;
  break;
 case 133:
 case 132:
  VAR_13.msg_bytes = VAR_9->data->size;
  VAR_13.hdr_bytes = sizeof(struct sof_ipc_ctrl_data) +
   sizeof(struct sof_abi_hdr);
  VAR_13.elems = VAR_9->data->size;
  break;
 default:
  return -VAR_0;
 }

 VAR_9->rhdr.hdr.size = VAR_13.msg_bytes + VAR_13.hdr_bytes;
 VAR_9->num_elems = VAR_13.elems;
 VAR_9->elems_remaining = 0;


 if (VAR_9->rhdr.hdr.size <= VAR_2) {
  VAR_15 = FUNC_5(VAR_10->ipc, VAR_9->rhdr.hdr.cmd, VAR_9,
      VAR_9->rhdr.hdr.size, VAR_9,
      VAR_9->rhdr.hdr.size);

  if (VAR_15 < 0)
   FUNC_2(VAR_10->dev, "error: set/get ctrl ipc comp %d\n",
    VAR_9->comp_id);

  return VAR_15;
 }


 FUNC_1(VAR_10->dev, "large ipc size %u, control size %u\n",
  VAR_9->rhdr.hdr.size, VAR_4->size);


 if (VAR_12->abi_version < FUNC_0(3, 3, 0)) {
  FUNC_2(VAR_10->dev, "error: incompatible FW ABI version\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_6(VAR_10, VAR_9, &VAR_13, VAR_8);

 if (VAR_15 < 0)
  FUNC_2(VAR_10->dev, "error: set/get large ctrl ipc comp %d\n",
   VAR_9->comp_id);

 return VAR_15;
}
