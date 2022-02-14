
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98927_priv {int tdm_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 struct max98927_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_14,
 unsigned int VAR_15, unsigned int VAR_16,
 int VAR_17, int VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_14->component;
 struct max98927_priv *VAR_20 = FUNC_4(VAR_19);
 int VAR_21 = 0;
 unsigned int VAR_22 = 0;

 VAR_20->tdm_mode = 1;


 VAR_21 = FUNC_1(VAR_17 * VAR_18);
 if (VAR_21 == 0) {
  FUNC_0(VAR_19->dev, "BCLK %d not supported\n",
   VAR_17 * VAR_18);
  return -VAR_0;
 }

 FUNC_2(VAR_20->regmap,
  VAR_13,
  VAR_1,
  VAR_21);


 switch (VAR_18) {
 case 16:
  VAR_22 = VAR_2;
  break;
 case 24:
  VAR_22 = VAR_3;
  break;
 case 32:
  VAR_22 = VAR_4;
  break;
 default:
  FUNC_0(VAR_19->dev, "format unsupported %d\n",
   VAR_18);
  return -VAR_0;
 }

 FUNC_2(VAR_20->regmap,
  VAR_12,
  VAR_5, VAR_22);


 FUNC_3(VAR_20->regmap,
  VAR_6,
  VAR_16 & 0xFF);
 FUNC_3(VAR_20->regmap,
  VAR_7,
  (VAR_16 & 0xFF00) >> 8);


 FUNC_3(VAR_20->regmap,
  VAR_8,
  VAR_15 & 0xFF);
 FUNC_3(VAR_20->regmap,
  VAR_9,
  (VAR_15 & 0xFF00) >> 8);


 FUNC_3(VAR_20->regmap,
  VAR_10,
  ~VAR_15 & 0xFF);
 FUNC_3(VAR_20->regmap,
  VAR_11,
  (~VAR_15 & 0xFF00) >> 8);

 return 0;
}
