
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct nau8810 {scalar_t__ clk_id; int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nau8810*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 struct nau8810* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_20,
 struct snd_pcm_hw_params *VAR_21, struct snd_soc_dai *VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_22->component;
 struct nau8810 *VAR_24 = FUNC_6(VAR_23);
 int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 unsigned int VAR_28, VAR_29, VAR_30;


 FUNC_4(VAR_24->regmap, VAR_6, &VAR_28);
 if (VAR_28 & VAR_5) {

  VAR_29 = FUNC_7(VAR_21) / FUNC_2(VAR_21);
  if (VAR_29 <= 32)
   VAR_30 = VAR_3;
  else if (VAR_29 <= 64)
   VAR_30 = VAR_2;
  else if (VAR_29 <= 128)
   VAR_30 = VAR_1;
  else
   return -VAR_0;
  FUNC_5(VAR_24->regmap, VAR_6,
   VAR_4, VAR_30);
 }

 switch (FUNC_3(VAR_21)) {
 case 16:
  break;
 case 20:
  VAR_25 |= VAR_16;
  break;
 case 24:
  VAR_25 |= VAR_17;
  break;
 case 32:
  VAR_25 |= VAR_18;
  break;
 }

 switch (FUNC_2(VAR_21)) {
 case 8000:
  VAR_26 |= VAR_14;
  break;
 case 11025:
  VAR_26 |= VAR_10;
  break;
 case 16000:
  VAR_26 |= VAR_11;
  break;
 case 22050:
  VAR_26 |= VAR_12;
  break;
 case 32000:
  VAR_26 |= VAR_13;
  break;
 case 44100:
 case 48000:
  break;
 }

 FUNC_5(VAR_24->regmap, VAR_7,
  VAR_19, VAR_25);
 FUNC_5(VAR_24->regmap, VAR_8,
  VAR_15, VAR_26);




 if (VAR_24->clk_id == VAR_9) {
  VAR_27 = FUNC_1(VAR_24, FUNC_2(VAR_21));
  if (VAR_27 < 0)
   FUNC_0(VAR_24->dev, "MCLK div configuration fail\n");
 }

 return VAR_27;
}
