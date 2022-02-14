
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra30_i2s {int regmap; TYPE_1__* soc_data; int clk_i2s; } ;
struct tegra30_ahub_cif_conf {int audio_channels; int client_channels; int direction; scalar_t__ mono_conv; scalar_t__ truncate; scalar_t__ replicate; scalar_t__ stereo_conv; scalar_t__ expand; void* client_bits; void* audio_bits; scalar_t__ threshold; } ;
struct snd_soc_dai {struct device* dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* set_audio_cif ) (int ,unsigned int,struct tegra30_ahub_cif_conf*) ;} ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 struct tegra30_i2s* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (int ,unsigned int,struct tegra30_ahub_cif_conf*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_17,
     struct snd_pcm_hw_params *VAR_18,
     struct snd_soc_dai *VAR_19)
{
 struct device *VAR_20 = VAR_19->dev;
 struct tegra30_i2s *VAR_21 = FUNC_7(VAR_19);
 unsigned int VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 struct tegra30_ahub_cif_conf VAR_30;

 if (FUNC_2(VAR_18) != 2)
  return -VAR_0;

 VAR_22 = VAR_9;
 switch (FUNC_3(VAR_18)) {
 case 128:
  VAR_23 = VAR_8;
  VAR_26 = 16;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_21->regmap, VAR_7, VAR_22, VAR_23);

 VAR_27 = FUNC_4(VAR_18);


 VAR_28 = VAR_27 * FUNC_2(VAR_18) * VAR_26 * 2;

 VAR_29 = (VAR_28 / (2 * VAR_27)) - 1;
 if (VAR_29 < 0 || VAR_29 > VAR_14)
  return -VAR_0;

 VAR_25 = FUNC_0(VAR_21->clk_i2s, VAR_28);
 if (VAR_25) {
  FUNC_1(VAR_20, "Can't set I2S clock rate: %d\n", VAR_25);
  return VAR_25;
 }

 VAR_23 = VAR_29 << VAR_15;

 if (VAR_28 % (2 * VAR_27))
  VAR_23 |= VAR_16;

 FUNC_6(VAR_21->regmap, VAR_13, VAR_23);

 VAR_30.threshold = 0;
 VAR_30.audio_channels = 2;
 VAR_30.client_channels = 2;
 VAR_30.audio_bits = VAR_2;
 VAR_30.client_bits = VAR_2;
 VAR_30.expand = 0;
 VAR_30.stereo_conv = 0;
 VAR_30.replicate = 0;
 VAR_30.truncate = 0;
 VAR_30.mono_conv = 0;

 if (VAR_17->stream == VAR_1) {
  VAR_30.direction = VAR_3;
  VAR_24 = VAR_5;
 } else {
  VAR_30.direction = VAR_4;
  VAR_24 = VAR_6;
 }

 VAR_21->soc_data->set_audio_cif(VAR_21->regmap, VAR_24, &VAR_30);

 VAR_23 = (1 << VAR_11) |
       (1 << VAR_12);
 FUNC_6(VAR_21->regmap, VAR_10, VAR_23);

 return 0;
}
