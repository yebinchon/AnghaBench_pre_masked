
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_16,
    struct snd_soc_dapm_widget *VAR_17)
{
 struct snd_soc_component *VAR_18 = FUNC_2(VAR_16->dapm);
 struct rt5677_priv *VAR_19 = FUNC_1(VAR_18);
 unsigned int VAR_20;

 switch (VAR_16->shift) {
 case 11:
  FUNC_0(VAR_19->regmap, VAR_12, &VAR_20);
  VAR_20 = (VAR_20 & VAR_4) >>
    VAR_5;
  break;

 case 10:
  FUNC_0(VAR_19->regmap, VAR_12, &VAR_20);
  VAR_20 = (VAR_20 & VAR_6) >>
    VAR_7;
  break;

 case 9:
  FUNC_0(VAR_19->regmap, VAR_12, &VAR_20);
  VAR_20 = (VAR_20 & VAR_8) >>
    VAR_9;
  break;

 case 8:
  FUNC_0(VAR_19->regmap, VAR_12, &VAR_20);
  VAR_20 = (VAR_20 & VAR_10) >>
   VAR_11;
  break;

 case 7:
  FUNC_0(VAR_19->regmap, VAR_13, &VAR_20);
  VAR_20 = (VAR_20 & VAR_0) >>
   VAR_1;
  break;

 case 6:
  FUNC_0(VAR_19->regmap, VAR_13, &VAR_20);
  VAR_20 = (VAR_20 & VAR_2) >>
   VAR_3;
  break;

 default:
  return 0;
 }

 if (VAR_20 >= VAR_14 &&
     VAR_20 <= VAR_15)
  return 1;

 return 0;
}
