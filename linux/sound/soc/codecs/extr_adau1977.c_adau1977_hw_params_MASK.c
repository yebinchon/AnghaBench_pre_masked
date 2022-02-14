
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau1977 {scalar_t__ sysclk_src; int slot_width; int regmap; scalar_t__ master; scalar_t__ right_j; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct adau1977*,unsigned int,int) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,unsigned int,int) ;
 struct adau1977* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_16,
 struct snd_pcm_hw_params *VAR_17, struct snd_soc_dai *VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_18->component;
 struct adau1977 *VAR_20 = FUNC_5(VAR_19);
 unsigned int VAR_21 = FUNC_2(VAR_17);
 unsigned int VAR_22;
 unsigned int VAR_23, VAR_24;
 unsigned int VAR_25;
 int VAR_26, VAR_27;
 int VAR_28;

 VAR_27 = FUNC_0(VAR_21);
 if (VAR_27 < 0)
  return VAR_27;

 if (VAR_20->sysclk_src == VAR_14) {
  VAR_26 = FUNC_1(VAR_20, VAR_21, VAR_27);
  if (VAR_26 < 0)
   return VAR_26;
 } else {
  VAR_26 = 0;
 }

 VAR_24 = VAR_7;
 VAR_23 = VAR_27;

 if (VAR_20->right_j) {
  switch (FUNC_3(VAR_17)) {
  case 16:
   VAR_23 |= VAR_5;
   break;
  case 24:
   VAR_23 |= VAR_6;
   break;
  default:
   return -VAR_15;
  }
  VAR_24 |= VAR_4;
 }

 if (VAR_20->master) {
  switch (FUNC_3(VAR_17)) {
  case 16:
   VAR_25 = VAR_11;
   VAR_22 = 16;
   break;
  case 24:
  case 32:
   VAR_25 = VAR_12;
   VAR_22 = 32;
   break;
  default:
   return -VAR_15;
  }


  if (VAR_20->slot_width)
   VAR_22 = VAR_20->slot_width;

  if (VAR_22 == 16)
   VAR_25 |= VAR_8;
  else
   VAR_25 |= VAR_9;

  VAR_28 = FUNC_4(VAR_20->regmap,
   VAR_3,
   VAR_13 |
   VAR_10,
   VAR_25);
  if (VAR_28 < 0)
   return VAR_28;
 }

 VAR_28 = FUNC_4(VAR_20->regmap, VAR_2,
    VAR_24, VAR_23);
 if (VAR_28 < 0)
  return VAR_28;

 return FUNC_4(VAR_20->regmap, VAR_1,
    VAR_0, VAR_26);
}
