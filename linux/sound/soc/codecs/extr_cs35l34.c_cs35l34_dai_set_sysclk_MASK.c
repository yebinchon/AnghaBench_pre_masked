
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs35l34_private {unsigned int mclk_int; int regmap; } ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct cs35l34_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
    int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_7->component;
 struct cs35l34_private *VAR_12 = FUNC_2(VAR_11);
 unsigned int VAR_13;

 switch (VAR_9) {
 case 130:
  VAR_13 = VAR_2;
  VAR_12->mclk_int = VAR_9;
 break;
 case 129:
  VAR_13 = VAR_3;
  VAR_12->mclk_int = VAR_9;
 break;
 case 128:
  VAR_13 = VAR_4;
  VAR_12->mclk_int = VAR_9;
 break;
 case 133:
  VAR_13 = VAR_1 | VAR_2;
  VAR_12->mclk_int = VAR_9 / 2;
 break;
 case 132:
  VAR_13 = VAR_1 | VAR_3;
  VAR_12->mclk_int = VAR_9 / 2;
 break;
 case 131:
  VAR_13 = VAR_1 | VAR_4;
  VAR_12->mclk_int = VAR_9 / 2;
 break;
 default:
  FUNC_0(VAR_11->dev, "ERROR: Invalid Frequency %d\n", VAR_9);
  VAR_12->mclk_int = 0;
  return -VAR_6;
 }
 FUNC_1(VAR_12->regmap, VAR_0,
   VAR_1 | VAR_5, VAR_13);
 return 0;
}
