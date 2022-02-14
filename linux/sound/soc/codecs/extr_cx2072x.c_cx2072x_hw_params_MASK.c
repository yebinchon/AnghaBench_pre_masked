
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ id; struct snd_soc_component* component; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;
struct cx2072x_priv {scalar_t__ mclk_rate; int bclk_ratio; int frame_size; int sample_size; unsigned int sample_rate; int en_aec_ref; int pll_changed; int i2spcm_changed; int regmap; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx2072x_priv*) ;
 int FUNC_1 (struct cx2072x_priv*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int) ;
 struct cx2072x_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct cx2072x_priv *VAR_7 = FUNC_7(VAR_6);
 struct device *VAR_8 = VAR_6->dev;
 const unsigned int VAR_9 = FUNC_4(VAR_4);
 int VAR_10, VAR_11;


 VAR_10 = FUNC_5(VAR_4);

 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_8(VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_7->mclk_rate == 0) {
  FUNC_3(VAR_8, "Master clock rate is not configured\n");
  return -VAR_2;
 }

 if (VAR_7->bclk_ratio)
  VAR_11 = VAR_7->bclk_ratio;

 switch (VAR_9) {
 case 48000:
 case 32000:
 case 24000:
 case 16000:
 case 96000:
 case 192000:
  break;

 default:
  FUNC_3(VAR_8, "Unsupported sample rate %d\n", VAR_9);
  return -VAR_2;
 }

 FUNC_2(VAR_8, "Sample size %d bits, frame = %d bits, rate = %d Hz\n",
  VAR_10, VAR_11, VAR_9);

 VAR_7->frame_size = VAR_11;
 VAR_7->sample_size = VAR_10;
 VAR_7->sample_rate = VAR_9;

 if (VAR_5->id == VAR_1) {
  VAR_7->en_aec_ref = 1;
  FUNC_2(VAR_7->dev, "enables aec reference\n");
  FUNC_6(VAR_7->regmap,
        VAR_0, 3);
 }

 if (VAR_7->pll_changed) {
  FUNC_1(VAR_7);
  VAR_7->pll_changed = 0;
 }

 if (VAR_7->i2spcm_changed) {
  FUNC_0(VAR_7);
  VAR_7->i2spcm_changed = 0;
 }

 return 0;
}
