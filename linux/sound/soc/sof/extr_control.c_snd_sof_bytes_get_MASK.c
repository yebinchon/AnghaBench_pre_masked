
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sof_ipc_ctrl_data {struct sof_abi_hdr* data; } ;
struct sof_abi_hdr {int size; } ;
struct TYPE_4__ {struct snd_sof_control* private; } ;
struct soc_bytes_ext {int max; TYPE_1__ dobj; } ;
struct snd_sof_dev {int dev; } ;
struct snd_sof_control {struct sof_ipc_ctrl_data* control_data; struct snd_sof_dev* sdev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (int ,struct sof_abi_hdr*,size_t) ;

int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct soc_bytes_ext *VAR_3 =
  (struct soc_bytes_ext *)VAR_1->private_value;
 struct snd_sof_control *VAR_4 = VAR_3->dobj.private;
 struct snd_sof_dev *VAR_5 = VAR_4->sdev;
 struct sof_ipc_ctrl_data *VAR_6 = VAR_4->control_data;
 struct sof_abi_hdr *VAR_7 = VAR_6->data;
 size_t VAR_8;
 int VAR_9 = 0;

 if (VAR_3->max > sizeof(VAR_2->value.bytes.data)) {
  FUNC_0(VAR_5->dev,
        "error: data max %d exceeds ucontrol data array size\n",
        VAR_3->max);
  return -VAR_0;
 }

 VAR_8 = VAR_7->size + sizeof(*VAR_7);
 if (VAR_8 > VAR_3->max) {
  FUNC_0(VAR_5->dev,
        "error: DSP sent %zu bytes max is %d\n",
        VAR_8, VAR_3->max);
  VAR_9 = -VAR_0;
  goto out;
 }


 FUNC_1(VAR_2->value.bytes.data, VAR_7, VAR_8);

out:
 return VAR_9;
}
