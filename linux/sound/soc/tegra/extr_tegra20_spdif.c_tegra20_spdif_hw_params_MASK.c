
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_spdif {int clk_spdif_out; int regmap; } ;
struct snd_soc_dai {struct device* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 struct tegra20_spdif* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5,
    struct snd_pcm_hw_params *VAR_6,
    struct snd_soc_dai *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 struct tegra20_spdif *VAR_9 = FUNC_5(VAR_7);
 unsigned int VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_10 |= VAR_4 |
  VAR_3;
 switch (FUNC_2(VAR_6)) {
 case 128:
  VAR_11 |= VAR_4 |
         VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_9->regmap, VAR_1, VAR_10, VAR_11);

 switch (FUNC_3(VAR_6)) {
 case 32000:
  VAR_13 = 4096000;
  break;
 case 44100:
  VAR_13 = 5644800;
  break;
 case 48000:
  VAR_13 = 6144000;
  break;
 case 88200:
  VAR_13 = 11289600;
  break;
 case 96000:
  VAR_13 = 12288000;
  break;
 case 176400:
  VAR_13 = 22579200;
  break;
 case 192000:
  VAR_13 = 24576000;
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_0(VAR_9->clk_spdif_out, VAR_13);
 if (VAR_12) {
  FUNC_1(VAR_8, "Can't set SPDIF clock rate: %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
