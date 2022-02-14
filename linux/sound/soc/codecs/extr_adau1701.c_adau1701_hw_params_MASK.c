
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau1701 {int sysclk; unsigned int pll_clkdiv; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int,int) ;
 int FUNC_1 (struct snd_soc_component*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 struct adau1701* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
  struct snd_pcm_hw_params *VAR_8, struct snd_soc_dai *VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_9->component;
 struct adau1701 *VAR_11 = FUNC_5(VAR_10);
 unsigned int VAR_12 = VAR_11->sysclk / FUNC_3(VAR_8);
 unsigned int VAR_13;
 int VAR_14;






 if (VAR_12 != VAR_11->pll_clkdiv) {
  VAR_14 = FUNC_0(VAR_10, VAR_12, FUNC_3(VAR_8));
  if (VAR_14 < 0)
   return VAR_14;
 }

 switch (FUNC_3(VAR_8)) {
 case 192000:
  VAR_13 = VAR_1;
  break;
 case 96000:
  VAR_13 = VAR_3;
  break;
 case 48000:
  VAR_13 = VAR_2;
  break;
 default:
  return -VAR_5;
 }

 FUNC_4(VAR_11->regmap, VAR_0,
  VAR_4, VAR_13);

 if (VAR_7->stream == VAR_6)
  return FUNC_2(VAR_10, VAR_8);
 else
  return FUNC_1(VAR_10, VAR_8);
}
