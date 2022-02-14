
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l35_private {int slave_mode; int i2s_mode; int pdm_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned int VAR_4 ;

 unsigned int VAR_5 ;

 int FUNC_0 (int ,int ,int ,int) ;
 struct cs35l35_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 struct cs35l35_private *VAR_9 = FUNC_1(VAR_8);

 switch (VAR_7 & VAR_5) {
 case 131:
  FUNC_0(VAR_9->regmap, VAR_0,
        VAR_1, 1 << VAR_2);
  VAR_9->slave_mode = 0;
  break;
 case 130:
  FUNC_0(VAR_9->regmap, VAR_0,
        VAR_1, 0 << VAR_2);
  VAR_9->slave_mode = 1;
  break;
 default:
  return -VAR_3;
 }

 switch (VAR_7 & VAR_4) {
 case 129:
  VAR_9->i2s_mode = 1;
  VAR_9->pdm_mode = 0;
  break;
 case 128:
  VAR_9->pdm_mode = 1;
  VAR_9->i2s_mode = 0;
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
