
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_comp_reply {int dummy; } ;
struct sof_ipc_comp_process {int type; } ;
struct snd_sof_widget {int dummy; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_tplg_private {int size; int array; } ;
struct snd_soc_tplg_dapm_widget {struct snd_soc_tplg_private priv; } ;
struct snd_soc_component {int dummy; } ;
typedef int config ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sof_ipc_comp_process*,int ,int) ;
 int VAR_1 ;
 struct snd_sof_dev* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,struct sof_ipc_comp_process*,int ,int ,int ,scalar_t__) ;
 int FUNC_7 (struct snd_soc_component*,int,struct snd_sof_widget*,struct snd_soc_tplg_dapm_widget*,struct sof_ipc_comp_reply*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_2, int VAR_3,
       struct snd_sof_widget *VAR_4,
       struct snd_soc_tplg_dapm_widget *VAR_5,
       struct sof_ipc_comp_reply *VAR_6)
{
 struct snd_sof_dev *VAR_7 = FUNC_5(VAR_2);
 struct snd_soc_tplg_private *VAR_8 = &VAR_5->priv;
 struct sof_ipc_comp_process VAR_9;
 int VAR_10;


 if (FUNC_3(VAR_8->size) == 0) {
  FUNC_1(VAR_7->dev, "error: process tokens not found\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));


 VAR_10 = FUNC_6(VAR_2, &VAR_9, VAR_1,
          FUNC_0(VAR_1), VAR_8->array,
          FUNC_3(VAR_8->size));
 if (VAR_10 != 0) {
  FUNC_1(VAR_7->dev, "error: parse process tokens failed %d\n",
   FUNC_3(VAR_8->size));
  return VAR_10;
 }


 VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          FUNC_2(VAR_9.type));
 if (VAR_10 < 0) {
  FUNC_1(VAR_7->dev, "error: process loading failed\n");
  return VAR_10;
 }

 return 0;
}
