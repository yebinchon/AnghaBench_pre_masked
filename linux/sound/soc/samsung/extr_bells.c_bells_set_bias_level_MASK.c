
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; int bias_level; } ;
struct snd_soc_dai {scalar_t__ dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {TYPE_1__* dai_link; struct bells_drvdata* drvdata; } ;
struct bells_drvdata {int asyncclk_rate; int sysclk_rate; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ,int ) ;
 struct snd_soc_pcm_runtime* FUNC_2 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_card *VAR_8,
    struct snd_soc_dapm_context *VAR_9,
    enum snd_soc_bias_level VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11;
 struct snd_soc_dai *VAR_12;
 struct snd_soc_component *VAR_13;
 struct bells_drvdata *VAR_14 = VAR_8->drvdata;
 int VAR_15;

 VAR_11 = FUNC_2(VAR_8, VAR_8->dai_link[VAR_3].name);
 VAR_12 = VAR_11->codec_dai;
 VAR_13 = VAR_12->component;

 if (VAR_9->dev != VAR_12->dev)
  return 0;

 switch (VAR_10) {
 case 128:
  if (VAR_9->bias_level != VAR_5)
   break;

  VAR_15 = FUNC_1(VAR_13, VAR_6,
         VAR_1,
         VAR_4,
         VAR_14->sysclk_rate);
  if (VAR_15 < 0)
   FUNC_0("Failed to start FLL: %d\n", VAR_15);

  if (VAR_14->asyncclk_rate) {
   VAR_15 = FUNC_1(VAR_13, VAR_7,
          VAR_0,
          VAR_2,
          VAR_14->asyncclk_rate);
   if (VAR_15 < 0)
    FUNC_0("Failed to start FLL: %d\n", VAR_15);
  }
  break;

 default:
  break;
 }

 return 0;
}
