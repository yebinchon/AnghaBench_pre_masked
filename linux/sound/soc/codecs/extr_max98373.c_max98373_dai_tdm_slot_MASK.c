
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98373_priv {int tdm_mode; int regmap; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 struct max98373_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_13,
 unsigned int VAR_14, unsigned int VAR_15,
 int VAR_16, int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_13->component;
 struct max98373_priv *VAR_19 = FUNC_4(VAR_18);
 int VAR_20 = 0;
 unsigned int VAR_21 = 0;
 unsigned int VAR_22;
 int VAR_23, VAR_24;

 if (!VAR_14 && !VAR_15 && !VAR_16 && !VAR_17)
  VAR_19->tdm_mode = 0;
 else
  VAR_19->tdm_mode = 1;


 VAR_20 = FUNC_1(VAR_16 * VAR_17);
 if (VAR_20 == 0) {
  FUNC_0(VAR_18->dev, "BCLK %d not supported\n",
   VAR_16 * VAR_17);
  return -VAR_0;
 }

 FUNC_2(VAR_19->regmap,
  VAR_10,
  VAR_1,
  VAR_20);


 switch (VAR_17) {
 case 16:
  VAR_21 = VAR_2;
  break;
 case 24:
  VAR_21 = VAR_3;
  break;
 case 32:
  VAR_21 = VAR_4;
  break;
 default:
  FUNC_0(VAR_18->dev, "format unsupported %d\n",
   VAR_17);
  return -VAR_0;
 }

 FUNC_2(VAR_19->regmap,
  VAR_9,
  VAR_5, VAR_21);


 VAR_24 = 0;
 VAR_22 = VAR_15;
 for (VAR_23 = 0 ; VAR_23 < 16 ; VAR_23++, VAR_22 >>= 1) {
  if (VAR_22 & 0x1) {
   if (VAR_24 == 0)
    FUNC_2(VAR_19->regmap,
     VAR_11,
     VAR_6, VAR_23);
   else
    FUNC_3(VAR_19->regmap,
     VAR_12,
     VAR_23);
   VAR_24++;
   if (VAR_24 > 1)
    break;
  }
 }


 FUNC_3(VAR_19->regmap,
  VAR_7,
  ~VAR_14 & 0xFF);
 FUNC_3(VAR_19->regmap,
  VAR_8,
  (~VAR_14 & 0xFF00) >> 8);

 return 0;
}
