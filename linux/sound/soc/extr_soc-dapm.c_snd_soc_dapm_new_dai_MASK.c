
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int template ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_dapm_widget {char* name; int event_flags; int num_kcontrols; int * kcontrol_news; struct snd_pcm_substream* priv; int event; int id; int reg; } ;
struct snd_soc_card {int dev; int dapm; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {int num_params; int params; int name; } ;


 int VAR_0 ;
 struct snd_soc_dapm_widget* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,char*) ;
 char* FUNC_4 (int ,int ,char*,int ,char*) ;
 char** FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct snd_soc_dapm_widget*,int ,int) ;
 int VAR_7 ;
 int * FUNC_8 (struct snd_soc_card*,char*,int ,int,char const**,unsigned long*) ;
 int VAR_8 ;
 int FUNC_9 (struct snd_soc_card*,unsigned long*,int,char const**) ;
 struct snd_soc_dapm_widget* FUNC_10 (int *,struct snd_soc_dapm_widget*) ;

__attribute__((used)) static struct snd_soc_dapm_widget *
FUNC_11(struct snd_soc_card *VAR_9,
       struct snd_pcm_substream *VAR_10,
       char *VAR_11)
{
 struct snd_soc_pcm_runtime *VAR_12 = VAR_10->private_data;
 struct snd_soc_dapm_widget VAR_13;
 struct snd_soc_dapm_widget *VAR_14;
 const char **VAR_15;
 unsigned long VAR_16 = 0;
 char *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(VAR_9->dev, VAR_1, "%s-%s",
       VAR_12->dai_link->name, VAR_11);
 if (!VAR_17)
  return FUNC_0(-VAR_0);

 FUNC_7(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.reg = VAR_6;
 VAR_13.id = VAR_8;
 VAR_13.name = VAR_17;
 VAR_13.event = VAR_7;
 VAR_13.event_flags = VAR_5 | VAR_3 |
  VAR_4 | VAR_2;
 VAR_13.kcontrol_news = ((void*)0);


 if (VAR_12->dai_link->num_params > 1) {
  VAR_15 = FUNC_5(VAR_9->dev,
         VAR_12->dai_link->num_params,
         sizeof(char *), VAR_1);
  if (!VAR_15) {
   VAR_18 = -VAR_0;
   goto param_fail;
  }

  VAR_13.num_kcontrols = 1;
  VAR_13.kcontrol_news =
     FUNC_8(VAR_9,
      VAR_17,
      VAR_12->dai_link->params,
      VAR_12->dai_link->num_params,
      VAR_15, &VAR_16);
  if (!VAR_13.kcontrol_news) {
   VAR_18 = -VAR_0;
   goto param_fail;
  }
 } else {
  VAR_15 = ((void*)0);
 }
 FUNC_3(VAR_9->dev, "ASoC: adding %s widget\n", VAR_17);

 VAR_14 = FUNC_10(&VAR_9->dapm, &VAR_13);
 if (FUNC_1(VAR_14)) {
  VAR_18 = FUNC_2(VAR_14);
  goto outfree_kcontrol_news;
 }

 VAR_14->priv = VAR_10;

 return VAR_14;

outfree_kcontrol_news:
 FUNC_6(VAR_9->dev, (void *)VAR_13.kcontrol_news);
 FUNC_9(VAR_9, &VAR_16,
       VAR_12->dai_link->num_params, VAR_15);
param_fail:
 FUNC_6(VAR_9->dev, VAR_17);
 return FUNC_0(VAR_18);
}
