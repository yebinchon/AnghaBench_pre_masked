
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98371_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 unsigned int VAR_5 ;


 unsigned int VAR_6 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct max98371_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
  unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 struct max98371_priv *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 = 0;

 switch (VAR_8 & VAR_6) {
 case 131:
  break;
 default:
  FUNC_0(VAR_9->dev, "DAI clock mode unsupported");
  return -VAR_0;
 }

 switch (VAR_8 & VAR_5) {
 case 130:
  VAR_11 |= 0;
  break;
 case 128:
  VAR_11 |= VAR_2;
  break;
 case 129:
  VAR_11 |= VAR_1;
  break;
 default:
  FUNC_0(VAR_9->dev, "DAI wrong mode unsupported");
  return -VAR_0;
 }
 FUNC_1(VAR_10->regmap, VAR_3,
   VAR_4, VAR_11);
 return 0;
}
