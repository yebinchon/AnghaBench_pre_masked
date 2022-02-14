
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_ipc_panic_info {int dummy; } ;
struct sof_ipc_dsp_oops_xtensa {int dummy; } ;
struct snd_sof_dev {int dev; scalar_t__ boot_complete; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*,struct sof_ipc_dsp_oops_xtensa*,struct sof_ipc_panic_info*,int *,int) ;
 int FUNC_2 (struct snd_sof_dev*) ;
 int FUNC_3 (struct snd_sof_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int ,struct sof_ipc_dsp_oops_xtensa*,struct sof_ipc_panic_info*,int *,int) ;

void FUNC_5(struct snd_sof_dev *VAR_3, u32 VAR_4)
{
 struct sof_ipc_dsp_oops_xtensa VAR_5;
 struct sof_ipc_panic_info VAR_6;
 u32 VAR_7[VAR_2];
 u32 VAR_8, VAR_9;


 FUNC_2(VAR_3);


 VAR_8 = FUNC_3(VAR_3, VAR_1,
      VAR_0);


 VAR_9 = FUNC_3(VAR_3, VAR_1,
     VAR_0 + 0x4);

 if (VAR_3->boot_complete) {
  FUNC_1(VAR_3, &VAR_5, &VAR_6, VAR_7,
          VAR_2);
  FUNC_4(VAR_3, VAR_8, VAR_9, &VAR_5, &VAR_6,
       VAR_7, VAR_2);
 } else {
  FUNC_0(VAR_3->dev, "error: status = 0x%8.8x panic = 0x%8.8x\n",
   VAR_8, VAR_9);
  FUNC_2(VAR_3);
 }
}
