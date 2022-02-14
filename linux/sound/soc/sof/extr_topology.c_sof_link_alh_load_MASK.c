
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_reply {int dummy; } ;
struct TYPE_2__ {int size; int cmd; } ;
struct sof_ipc_dai_config {int dai_index; TYPE_1__ hdr; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_soc_tplg_link_config {int dummy; } ;
struct snd_soc_tplg_hw_config {int dummy; } ;
struct snd_soc_dai_link {int dummy; } ;
struct snd_soc_component {int dummy; } ;
typedef int reply ;


 int FUNC_0 (int ,char*,int ) ;
 struct snd_sof_dev* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,int ,struct sof_ipc_dai_config*,int,struct sof_ipc_reply*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int,struct snd_soc_dai_link*,struct sof_ipc_dai_config*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0, int VAR_1,
        struct snd_soc_dai_link *VAR_2,
        struct snd_soc_tplg_link_config *VAR_3,
        struct snd_soc_tplg_hw_config *VAR_4,
        struct sof_ipc_dai_config *VAR_5)
{
 struct snd_sof_dev *VAR_6 = FUNC_1(VAR_0);
 struct sof_ipc_reply VAR_7;
 u32 VAR_8 = sizeof(*VAR_5);
 int VAR_9;


 VAR_5->hdr.size = VAR_8;


 VAR_9 = FUNC_2(VAR_6->ipc,
     VAR_5->hdr.cmd, VAR_5, VAR_8, &VAR_7,
     sizeof(VAR_7));

 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "error: failed to set DAI config for ALH %d\n",
   VAR_5->dai_index);
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_2, VAR_5);
 if (VAR_9 < 0)
  FUNC_0(VAR_6->dev, "error: failed to save DAI config for ALH %d\n",
   VAR_5->dai_index);

 return VAR_9;
}
