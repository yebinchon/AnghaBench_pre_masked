
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_ipc_panic_info {int dummy; } ;
struct sof_ipc_dsp_oops_xtensa {int dummy; } ;
struct snd_sof_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_sof_dev*,struct sof_ipc_dsp_oops_xtensa*,struct sof_ipc_panic_info*,int *,int) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ,struct sof_ipc_dsp_oops_xtensa*,struct sof_ipc_panic_info*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct snd_sof_dev *VAR_4, u32 VAR_5)
{
 struct sof_ipc_dsp_oops_xtensa VAR_6;
 struct sof_ipc_panic_info VAR_7;
 u32 VAR_8[VAR_1];
 u32 VAR_9, VAR_10;


 VAR_9 = FUNC_1(VAR_4, VAR_0, VAR_2);
 VAR_10 = FUNC_1(VAR_4, VAR_0, VAR_3);
 FUNC_0(VAR_4, &VAR_6, &VAR_7, VAR_8,
     VAR_1);
 FUNC_2(VAR_4, VAR_9, VAR_10, &VAR_6, &VAR_7, VAR_8,
      VAR_1);
}
