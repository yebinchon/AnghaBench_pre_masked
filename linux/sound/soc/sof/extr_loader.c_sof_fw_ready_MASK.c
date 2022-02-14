
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_ipc_fw_ready {int dummy; } ;
struct snd_sof_dev {int first_boot; int dev; struct sof_ipc_fw_ready fw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_sof_dev*,int ) ;
 int FUNC_3 (struct snd_sof_dev*) ;
 int FUNC_4 (struct snd_sof_dev*,int,int) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*,int,int,struct sof_ipc_fw_ready*,int) ;
 int FUNC_7 (struct snd_sof_dev*) ;

int FUNC_8(struct snd_sof_dev *VAR_2, u32 VAR_3)
{
 struct sof_ipc_fw_ready *VAR_4 = &VAR_2->fw_ready;
 int VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2->dev, "error: have no mailbox offset\n");
  return VAR_5;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2->dev, "error: have no bar mapping\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2->dev, "ipc: DSP is ready 0x%8.8x offset 0x%x\n",
  VAR_3, VAR_5);


 if (!VAR_2->first_boot)
  return 0;


 FUNC_6(VAR_2, VAR_6, VAR_5, VAR_4, sizeof(*VAR_4));


 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_4(VAR_2, VAR_6, VAR_5 +
      sizeof(struct sof_ipc_fw_ready));

 FUNC_7(VAR_2);

 return 0;
}
