
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai_link; int dev; TYPE_2__* codec_dai; TYPE_2__* cpu_dai; } ;
struct snd_soc_dapm_widget_list {int dummy; } ;
struct TYPE_4__ {int capture_active; int playback_active; int active; } ;
struct TYPE_3__ {int name; int dynamic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int ,struct snd_soc_dapm_widget_list**) ;
 int FUNC_5 (struct snd_soc_dapm_widget_list**) ;
 int FUNC_6 (struct snd_soc_pcm_runtime*,int ,struct snd_soc_dapm_widget_list**,int) ;
 int FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_pcm_runtime *VAR_2, int VAR_3)
{
 struct snd_soc_dapm_widget_list *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_2->dai_link->dynamic)
  return 0;


 if (!VAR_2->cpu_dai->active)
  return 0;


 FUNC_0(VAR_2->dev, "ASoC: DPCM %s runtime update for FE %s\n",
  VAR_3 ? "new" : "old", VAR_2->dai_link->name);


 if (!FUNC_9(VAR_2->cpu_dai, VAR_1) ||
     !FUNC_9(VAR_2->codec_dai, VAR_1))
  goto capture;


 if (!VAR_2->cpu_dai->playback_active || !VAR_2->codec_dai->playback_active)
  goto capture;

 VAR_6 = FUNC_4(VAR_2, VAR_1, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2->dev, "ASoC: %s no valid %s path\n",
    VAR_2->dai_link->name, "playback");
  return VAR_6;
 }


 VAR_5 = FUNC_6(VAR_2, VAR_1, &VAR_4, VAR_3);
 if (VAR_5) {
  if (VAR_3)
   FUNC_7(VAR_2, VAR_1);
  else
   FUNC_8(VAR_2, VAR_1);

  FUNC_3(VAR_2, VAR_1);
  FUNC_2(VAR_2, VAR_1);
 }

 FUNC_5(&VAR_4);

capture:

 if (!FUNC_9(VAR_2->cpu_dai, VAR_0) ||
     !FUNC_9(VAR_2->codec_dai, VAR_0))
  return 0;


 if (!VAR_2->cpu_dai->capture_active || !VAR_2->codec_dai->capture_active)
  return 0;

 VAR_6 = FUNC_4(VAR_2, VAR_0, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2->dev, "ASoC: %s no valid %s path\n",
    VAR_2->dai_link->name, "capture");
  return VAR_6;
 }


 VAR_5 = FUNC_6(VAR_2, VAR_0, &VAR_4, VAR_3);
 if (VAR_5) {
  if (VAR_3)
   FUNC_7(VAR_2, VAR_0);
  else
   FUNC_8(VAR_2, VAR_0);

  FUNC_3(VAR_2, VAR_0);
  FUNC_2(VAR_2, VAR_0);
 }

 FUNC_5(&VAR_4);

 return 0;
}
