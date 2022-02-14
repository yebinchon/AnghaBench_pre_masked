
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs4271_private {int master; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;


 unsigned int VAR_10 ;


 unsigned int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct cs4271_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_12,
         unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 struct cs4271_private *VAR_15 = FUNC_2(VAR_14);
 unsigned int VAR_16 = 0;
 int VAR_17;

 switch (VAR_13 & VAR_11) {
 case 130:
  VAR_15->master = 0;
  break;
 case 131:
  VAR_15->master = 1;
  VAR_16 |= VAR_8;
  break;
 default:
  FUNC_0(VAR_14->dev, "Invalid DAI format\n");
  return -VAR_9;
 }

 switch (VAR_13 & VAR_10) {
 case 128:
  VAR_16 |= VAR_6;
  VAR_17 = FUNC_1(VAR_15->regmap, VAR_0,
   VAR_3, VAR_2);
  if (VAR_17 < 0)
   return VAR_17;
  break;
 case 129:
  VAR_16 |= VAR_5;
  VAR_17 = FUNC_1(VAR_15->regmap, VAR_0,
   VAR_3, VAR_1);
  if (VAR_17 < 0)
   return VAR_17;
  break;
 default:
  FUNC_0(VAR_14->dev, "Invalid DAI format\n");
  return -VAR_9;
 }

 VAR_17 = FUNC_1(VAR_15->regmap, VAR_4,
  VAR_7 | VAR_8, VAR_16);
 if (VAR_17 < 0)
  return VAR_17;
 return 0;
}
