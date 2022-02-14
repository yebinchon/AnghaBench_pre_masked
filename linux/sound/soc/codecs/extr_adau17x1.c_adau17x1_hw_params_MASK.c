
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau {int clk_src; unsigned int pll_freq; unsigned int sysclk; scalar_t__ dai_fmt; int regmap; scalar_t__ sigmadsp; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_1 (struct adau*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 struct adau* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_11,
 struct snd_pcm_hw_params *VAR_12, struct snd_soc_dai *VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_13->component;
 struct adau *VAR_15 = FUNC_7(VAR_14);
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 switch (VAR_15->clk_src) {
 case 128:
  VAR_20 = FUNC_0(VAR_13, VAR_12);
  if (VAR_20)
   return VAR_20;

 case 129:
  VAR_19 = VAR_15->pll_freq;
  break;
 default:
  VAR_19 = VAR_15->sysclk;
  break;
 }

 if (VAR_19 % FUNC_3(VAR_12) != 0)
  return -VAR_9;

 switch (VAR_19 / FUNC_3(VAR_12)) {
 case 1024:
  VAR_17 = 0;
  VAR_18 = 1;
  break;
 case 6144:
  VAR_17 = 1;
  VAR_18 = 6;
  break;
 case 4096:
  VAR_17 = 2;
  VAR_18 = 5;
  break;
 case 3072:
  VAR_17 = 3;
  VAR_18 = 4;
  break;
 case 2048:
  VAR_17 = 4;
  VAR_18 = 3;
  break;
 case 1536:
  VAR_17 = 5;
  VAR_18 = 2;
  break;
 case 512:
  VAR_17 = 6;
  VAR_18 = 0;
  break;
 default:
  return -VAR_9;
 }

 FUNC_5(VAR_15->regmap, VAR_0,
  VAR_1, VAR_17);
 if (FUNC_1(VAR_15)) {
  FUNC_6(VAR_15->regmap, VAR_8, VAR_17);
  FUNC_6(VAR_15->regmap, VAR_2, VAR_18);
 }

 if (VAR_15->sigmadsp) {
  VAR_20 = FUNC_2(VAR_14, FUNC_3(VAR_12));
  if (VAR_20 < 0)
   return VAR_20;
 }

 if (VAR_15->dai_fmt != VAR_10)
  return 0;

 switch (FUNC_4(VAR_12)) {
 case 16:
  VAR_16 = VAR_5;
  break;
 case 24:
  VAR_16 = VAR_6;
  break;
 case 32:
  VAR_16 = VAR_4;
  break;
 default:
  return -VAR_9;
 }

 return FUNC_5(VAR_15->regmap, VAR_3,
   VAR_7, VAR_16);
}
