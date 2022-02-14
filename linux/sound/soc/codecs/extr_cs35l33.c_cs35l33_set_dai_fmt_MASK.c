
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs35l33_private {int is_tdm_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cs35l33_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_5, unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 struct cs35l33_private *VAR_8 = FUNC_2(VAR_7);

 switch (VAR_6 & VAR_4) {
 case 131:
  FUNC_1(VAR_8->regmap, VAR_0,
   VAR_1, VAR_1);
  FUNC_0(VAR_7->dev, "Audio port in master mode\n");
  break;
 case 130:
  FUNC_1(VAR_8->regmap, VAR_0,
   VAR_1, 0);
  FUNC_0(VAR_7->dev, "Audio port in slave mode\n");
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_6 & VAR_3) {
 case 129:




  VAR_8->is_tdm_mode = 1;
  FUNC_0(VAR_7->dev, "Audio port in TDM mode\n");
  break;
 case 128:
  VAR_8->is_tdm_mode = 0;
  FUNC_0(VAR_7->dev, "Audio port in I2S mode\n");
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
