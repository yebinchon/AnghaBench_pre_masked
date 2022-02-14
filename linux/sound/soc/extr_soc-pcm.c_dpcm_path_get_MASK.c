
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dapm_widget_list {int dummy; } ;
struct snd_soc_dai {int dummy; } ;


 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_dai*,int,struct snd_soc_dapm_widget_list**,int ) ;

int FUNC_2(struct snd_soc_pcm_runtime *VAR_1,
 int VAR_2, struct snd_soc_dapm_widget_list **VAR_3)
{
 struct snd_soc_dai *VAR_4 = VAR_1->cpu_dai;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3,
   VAR_0);

 FUNC_0(VAR_1->dev, "ASoC: found %d audio %s paths\n", VAR_5,
   VAR_2 ? "capture" : "playback");

 return VAR_5;
}
