
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link {scalar_t__ dpcm_playback; TYPE_1__* cpus; int dai_fmt; int init; int * ops; } ;
struct snd_soc_card {int dev; struct snd_soc_dai_link* dai_link; } ;
struct device_node {int dummy; } ;
struct axg_dai_link_tdm_data {int mclk_fs; } ;
struct axg_card {struct axg_dai_link_tdm_data** link_data; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_card*,int*) ;
 int FUNC_1 (struct snd_soc_card*,struct snd_soc_dai_link*,struct device_node*,struct axg_dai_link_tdm_data*) ;
 int FUNC_2 (struct snd_soc_card*,struct snd_soc_dai_link*,struct device_node*,struct axg_dai_link_tdm_data*) ;
 int FUNC_3 (struct device_node*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 struct axg_dai_link_tdm_data* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 struct axg_card* FUNC_7 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_card *VAR_4,
         struct device_node *VAR_5,
         int *VAR_6)
{
 struct axg_card *VAR_7 = FUNC_7(VAR_4);
 struct snd_soc_dai_link *VAR_8 = &VAR_4->dai_link[*VAR_6];
 struct axg_dai_link_tdm_data *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_5(VAR_4->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_7->link_data[*VAR_6] = VAR_9;


 VAR_8->ops = &VAR_2;
 VAR_8->init = VAR_3;
 VAR_8->dai_fmt = FUNC_3(VAR_5, VAR_8->cpus->of_node);

 FUNC_6(VAR_5, "mclk-fs", &VAR_9->mclk_fs);

 VAR_10 = FUNC_2(VAR_4, VAR_8, VAR_5, VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_4->dev, "error parsing tdm link slots\n");
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_5, VAR_9);
 if (VAR_10)
  return VAR_10;


 if (VAR_8->dpcm_playback) {
  VAR_10 = FUNC_0(VAR_4, VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
