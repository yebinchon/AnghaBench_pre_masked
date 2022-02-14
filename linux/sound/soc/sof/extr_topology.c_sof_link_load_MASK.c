
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct sof_ipc_dai_config {int type; scalar_t__ format; TYPE_2__ hdr; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_tplg_private {int size; int array; } ;
struct snd_soc_tplg_link_config {struct snd_soc_tplg_hw_config* hw_config; int default_hw_config_id; int num_hw_configs; struct snd_soc_tplg_private priv; } ;
struct snd_soc_tplg_hw_config {int fmt; int id; } ;
struct snd_soc_dai_link {int nonatomic; int no_pcm; TYPE_1__* platforms; } ;
struct snd_soc_component {int dummy; } ;
typedef int config ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sof_ipc_dai_config*,int ,int) ;
 struct snd_sof_dev* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_8 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_9 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_10 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_11 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_12 (struct snd_soc_component*,int,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_hw_config*,struct sof_ipc_dai_config*) ;
 int FUNC_13 (struct snd_soc_component*,struct sof_ipc_dai_config*,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct snd_soc_component *VAR_4, int VAR_5,
    struct snd_soc_dai_link *VAR_6,
    struct snd_soc_tplg_link_config *VAR_7)
{
 struct snd_sof_dev *VAR_8 = FUNC_6(VAR_4);
 struct snd_soc_tplg_private *VAR_9 = &VAR_7->priv;
 struct sof_ipc_dai_config VAR_10;
 struct snd_soc_tplg_hw_config *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (!VAR_6->platforms) {
  FUNC_2(VAR_8->dev, "error: no platforms\n");
  return -VAR_0;
 }
 VAR_6->platforms->name = FUNC_3(VAR_8->dev);





 if (!VAR_6->no_pcm) {
  VAR_6->nonatomic = 1;


  return 0;
 }


 if (FUNC_4(VAR_9->size) == 0) {
  FUNC_2(VAR_8->dev, "error: expected tokens for DAI, none found\n");
  return -VAR_0;
 }


 FUNC_5(&VAR_10, 0, sizeof(VAR_10));


 VAR_13 = FUNC_13(VAR_4, &VAR_10, VAR_3,
          FUNC_0(VAR_3), VAR_9->array,
          FUNC_4(VAR_9->size));
 if (VAR_13 != 0) {
  FUNC_2(VAR_8->dev, "error: parse link tokens failed %d\n",
   FUNC_4(VAR_9->size));
  return VAR_13;
 }





 VAR_12 = FUNC_4(VAR_7->num_hw_configs);
 if (!VAR_12) {
  if (VAR_10.type != 129) {
   FUNC_2(VAR_8->dev, "error: unexpected DAI config count %d!\n",
    FUNC_4(VAR_7->num_hw_configs));
   return -VAR_0;
  }
 } else {
  FUNC_1(VAR_8->dev, "tplg: %d hw_configs found, default id: %d!\n",
   VAR_7->num_hw_configs, FUNC_4(VAR_7->default_hw_config_id));

  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
   if (VAR_7->hw_config[VAR_14].id == VAR_7->default_hw_config_id)
    break;
  }

  if (VAR_14 == VAR_12) {
   FUNC_2(VAR_8->dev, "error: default hw_config id: %d not found!\n",
    FUNC_4(VAR_7->default_hw_config_id));
   return -VAR_0;
  }
 }


 VAR_11 = &VAR_7->hw_config[VAR_14];

 VAR_10.hdr.cmd = VAR_2 | VAR_1;
 VAR_10.format = FUNC_4(VAR_11->fmt);


 switch (VAR_10.type) {
 case 128:
  VAR_13 = FUNC_12(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
     &VAR_10);
  break;
 case 130:
  VAR_13 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
      &VAR_10);
  break;
 case 129:
  VAR_13 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
     &VAR_10);
  break;
 case 131:
  VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
     &VAR_10);
  break;
 case 132:
  VAR_13 = FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
     &VAR_10);
  break;
 case 133:
  VAR_13 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11,
      &VAR_10);
  break;
 default:
  FUNC_2(VAR_8->dev, "error: invalid DAI type %d\n", VAR_10.type);
  VAR_13 = -VAR_0;
  break;
 }
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
