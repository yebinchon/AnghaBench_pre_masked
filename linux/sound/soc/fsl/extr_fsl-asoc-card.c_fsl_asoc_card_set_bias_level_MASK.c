
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; int bias_level; } ;
struct snd_soc_dai {scalar_t__ dev; } ;
struct snd_soc_card {TYPE_1__* dai_link; struct device* dev; } ;
struct codec_priv {unsigned int mclk_freq; int pll_id; int mclk_id; int fll_id; } ;
struct fsl_asoc_card_priv {int sample_rate; int sample_format; struct codec_priv codec_priv; } ;
struct device {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct fsl_asoc_card_priv* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_4 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_card *VAR_3,
     struct snd_soc_dapm_context *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct fsl_asoc_card_priv *VAR_6 = FUNC_1(VAR_3);
 struct snd_soc_pcm_runtime *VAR_7;
 struct snd_soc_dai *VAR_8;
 struct codec_priv *VAR_9 = &VAR_6->codec_priv;
 struct device *VAR_10 = VAR_3->dev;
 unsigned int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_4(VAR_3, VAR_3->dai_link[0].name);
 VAR_8 = VAR_7->codec_dai;
 if (VAR_4->dev != VAR_8->dev)
  return 0;

 switch (VAR_5) {
 case 129:
  if (VAR_4->bias_level != 128)
   break;

  if (VAR_6->sample_format == VAR_1)
   VAR_11 = VAR_6->sample_rate * 384;
  else
   VAR_11 = VAR_6->sample_rate * 256;

  VAR_12 = FUNC_2(VAR_8, VAR_9->pll_id,
       VAR_9->mclk_id,
       VAR_9->mclk_freq, VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_10, "failed to start FLL: %d\n", VAR_12);
   return VAR_12;
  }

  VAR_12 = FUNC_3(VAR_8, VAR_9->fll_id,
          VAR_11, VAR_2);
  if (VAR_12 && VAR_12 != -VAR_0) {
   FUNC_0(VAR_10, "failed to set SYSCLK: %d\n", VAR_12);
   return VAR_12;
  }
  break;

 case 128:
  if (VAR_4->bias_level != 129)
   break;

  VAR_12 = FUNC_3(VAR_8, VAR_9->mclk_id,
          VAR_9->mclk_freq,
          VAR_2);
  if (VAR_12 && VAR_12 != -VAR_0) {
   FUNC_0(VAR_10, "failed to switch away from FLL: %d\n", VAR_12);
   return VAR_12;
  }

  VAR_12 = FUNC_2(VAR_8, VAR_9->pll_id, 0, 0, 0);
  if (VAR_12) {
   FUNC_0(VAR_10, "failed to stop FLL: %d\n", VAR_12);
   return VAR_12;
  }
  break;

 default:
  break;
 }

 return 0;
}
