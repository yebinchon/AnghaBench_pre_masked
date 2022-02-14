
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l35_private {unsigned int sysclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct cs35l35_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_7,
    int VAR_8, int VAR_9, unsigned int VAR_10,
    int VAR_11)
{
 struct cs35l35_private *VAR_12 = FUNC_2(VAR_7);
 int VAR_13;
 int VAR_14 = 0;

 switch (VAR_8) {
 case 0:
  VAR_13 = VAR_2;
  break;
 case 1:
  VAR_13 = VAR_4;
  break;
 case 2:
  VAR_13 = VAR_3;
  break;
 default:
  FUNC_0(VAR_7->dev, "Invalid CLK Source\n");
  return -VAR_6;
 }

 switch (VAR_10) {
 case 5644800:
 case 6144000:
 case 11289600:
 case 12000000:
 case 12288000:
 case 13000000:
 case 22579200:
 case 24000000:
 case 24576000:
 case 26000000:
  VAR_12->sysclk = VAR_10;
  break;
 default:
  FUNC_0(VAR_7->dev, "Invalid CLK Frequency Input : %d\n", VAR_10);
  return -VAR_6;
 }

 VAR_14 = FUNC_1(VAR_12->regmap, VAR_0,
    VAR_1,
    VAR_13 << VAR_5);
 if (VAR_14 != 0) {
  FUNC_0(VAR_7->dev, "Failed to set sysclk %d\n", VAR_14);
  return VAR_14;
 }

 return VAR_14;
}
