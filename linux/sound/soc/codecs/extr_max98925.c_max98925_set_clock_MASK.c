
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98925_priv {int ch_size; int sysclk; int regmap; struct snd_soc_component* component; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct snd_soc_component*,int,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct max98925_priv *VAR_17,
  struct snd_pcm_hw_params *VAR_18)
{
 unsigned int VAR_19 = 0, VAR_20, VAR_21, VAR_22, VAR_23;
 struct snd_soc_component *VAR_24 = VAR_17->component;
 int VAR_25 = FUNC_3(VAR_18);

 int VAR_26 = FUNC_2(VAR_18) * VAR_17->ch_size;

 switch (VAR_26) {
 case 32:
  FUNC_4(VAR_17->regmap,
   VAR_16,
   VAR_4, VAR_1);
  break;
 case 48:
  FUNC_4(VAR_17->regmap,
   VAR_16,
   VAR_4, VAR_2);
  break;
 case 64:
  FUNC_4(VAR_17->regmap,
   VAR_16,
   VAR_4, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17->sysclk) {
 case 6000000:
  VAR_20 = 0;
  VAR_21 = VAR_8;
  break;
 case 11289600:
  VAR_20 = 1;
  VAR_21 = VAR_9;
  break;
 case 12000000:
  VAR_20 = 0;
  VAR_21 = VAR_9;
  break;
 case 12288000:
  VAR_20 = 2;
  VAR_21 = VAR_9;
  break;
 default:
  FUNC_0(VAR_17->component->dev, "unsupported sysclk %d\n",
     VAR_17->sysclk);
  return -VAR_0;
 }

 if (FUNC_1(VAR_24, VAR_25, VAR_20, &VAR_19, &VAR_22, &VAR_23))
  return -VAR_0;


 FUNC_4(VAR_17->regmap,
   VAR_16,
   VAR_5, VAR_19 << VAR_6);

 FUNC_5(VAR_17->regmap,
  VAR_12, VAR_23 >> 8);
 FUNC_5(VAR_17->regmap,
  VAR_11, VAR_23 & 0xFF);

 FUNC_5(VAR_17->regmap,
  VAR_14, VAR_22 >> 8);
 FUNC_5(VAR_17->regmap,
  VAR_13, VAR_22 & 0xFF);

 FUNC_4(VAR_17->regmap, VAR_15,
   VAR_7, VAR_21 << VAR_10);
 return 0;
}
