
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2518 {int regmap; scalar_t__ right_j; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,unsigned int,int) ;
 struct ssm2518* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct ssm2518*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_14,
 struct snd_pcm_hw_params *VAR_15, struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct ssm2518 *VAR_18 = FUNC_3(VAR_17);
 unsigned int VAR_19 = FUNC_0(VAR_15);
 unsigned int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_22 = FUNC_4(VAR_18, VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_21 = VAR_13;

 if (VAR_19 >= 8000 && VAR_19 <= 12000)
  VAR_20 = VAR_12;
 else if (VAR_19 >= 16000 && VAR_19 <= 24000)
  VAR_20 = VAR_9;
 else if (VAR_19 >= 32000 && VAR_19 <= 48000)
  VAR_20 = VAR_10;
 else if (VAR_19 >= 64000 && VAR_19 <= 96000)
  VAR_20 = VAR_11;
 else
  return -VAR_0;

 if (VAR_18->right_j) {
  switch (FUNC_1(VAR_15)) {
  case 16:
   VAR_20 |= VAR_7;
   break;
  case 24:
   VAR_20 |= VAR_8;
   break;
  default:
   return -VAR_0;
  }
  VAR_21 |= VAR_6;
 }


 VAR_23 = FUNC_2(VAR_18->regmap, VAR_3,
    VAR_1, VAR_1);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_23 = FUNC_2(VAR_18->regmap, VAR_5,
    VAR_21, VAR_20);
 if (VAR_23 < 0)
  return VAR_23;

 return FUNC_2(VAR_18->regmap, VAR_4,
    VAR_2, VAR_22 << 1);
}
