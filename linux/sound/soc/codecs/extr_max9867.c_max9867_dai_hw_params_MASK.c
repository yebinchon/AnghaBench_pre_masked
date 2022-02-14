
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max9867_priv {unsigned long pclk; int regmap; scalar_t__ dsp_a; scalar_t__ master; } ;


 unsigned int FUNC_0 (unsigned long long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct max9867_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_15,
  struct snd_pcm_hw_params *VAR_16, struct snd_soc_dai *VAR_17)
{
 int VAR_18;
 unsigned long int VAR_19, VAR_20;
 struct snd_soc_component *VAR_21 = VAR_17->component;
 struct max9867_priv *VAR_22 = FUNC_4(VAR_21);
 unsigned int VAR_23 = FUNC_0(96ULL * 0x10000 * FUNC_1(VAR_16),
      VAR_22->pclk);


 FUNC_3(VAR_22->regmap, VAR_1,
  VAR_11, (0xFF00 & VAR_23) >> 8);
 FUNC_3(VAR_22->regmap, VAR_2,
  VAR_12, 0x00FF & VAR_23);
 if (VAR_22->master) {
  if (VAR_22->dsp_a) {
   VAR_18 = VAR_4;
  } else {
   VAR_19 = FUNC_1(VAR_16) * 2 * FUNC_2(VAR_16);
   VAR_20 = VAR_22->pclk / VAR_19;
   switch (FUNC_2(VAR_16)) {
   case 8:
   case 16:
    switch (VAR_20) {
    case 2:
     VAR_18 = VAR_8;
     break;
    case 4:
     VAR_18 = VAR_9;
     break;
    case 8:
     VAR_18 = VAR_10;
     break;
    case 16:
     VAR_18 = VAR_7;
     break;
    default:
     return -VAR_0;
    }
    break;
   case 24:
    VAR_18 = VAR_4;
    break;
   case 32:
    VAR_18 = VAR_5;
    break;
   default:
    return -VAR_0;
   }
  }
  FUNC_3(VAR_22->regmap, VAR_3,
   VAR_6, VAR_18);
 } else {




  FUNC_3(VAR_22->regmap, VAR_2,
   VAR_14, VAR_14);
  FUNC_3(VAR_22->regmap, VAR_1,
   VAR_13, VAR_13);
 }
 return 0;
}
