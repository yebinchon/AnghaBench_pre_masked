
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
struct snd_sof_dev {int ipc; int dev; } ;
struct snd_sof_control {int cmd; struct sof_ipc_ctrl_data* control_data; struct snd_sof_dev* sdev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (struct sof_abi_hdr*,int ,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct snd_sof_control*,int ,int ,int ,int) ;

int FUNC_4(struct snd_kcontrol *VAR_3,
        struct snd_ctl_elem_value *VAR_4)
{
 struct soc_bytes_ext *VAR_5 =
  (struct soc_bytes_ext *)VAR_3->private_value;
 struct snd_sof_control *VAR_6 = VAR_5->dobj.private;
 struct snd_sof_dev *VAR_7 = VAR_6->sdev;
 struct sof_ipc_ctrl_data *VAR_8 = VAR_6->control_data;
 struct sof_abi_hdr *VAR_9 = VAR_8->data;
 size_t VAR_10 = VAR_9->size + sizeof(*VAR_9);

 if (VAR_5->max > sizeof(VAR_4->value.bytes.data)) {
  FUNC_0(VAR_7->dev,
        "error: data max %d exceeds ucontrol data array size\n",
        VAR_5->max);
  return -VAR_0;
 }

 if (VAR_10 > VAR_5->max) {
  FUNC_0(VAR_7->dev,
        "error: size too big %zu bytes max is %d\n",
        VAR_10, VAR_5->max);
  return -VAR_0;
 }


 FUNC_1(VAR_9, VAR_4->value.bytes.data, VAR_10);


 if (FUNC_2(VAR_7->dev))
  FUNC_3(VAR_7->ipc, VAR_6,
           VAR_2,
           VAR_1,
           VAR_6->cmd,
           1);

 return 0;
}
