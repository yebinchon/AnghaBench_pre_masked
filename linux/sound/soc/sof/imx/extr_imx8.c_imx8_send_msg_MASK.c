
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_ipc_msg {int msg_size; int msg_data; } ;
struct TYPE_2__ {int offset; } ;
struct snd_sof_dev {TYPE_1__ host_box; scalar_t__ private; } ;
struct imx8_priv {int dsp_ipc; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_0, struct snd_sof_ipc_msg *VAR_1)
{
 struct imx8_priv *VAR_2 = (struct imx8_priv *)VAR_0->private;

 FUNC_1(VAR_0, VAR_0->host_box.offset, VAR_1->msg_data,
     VAR_1->msg_size);
 FUNC_0(VAR_2->dsp_ipc, 0);

 return 0;
}
