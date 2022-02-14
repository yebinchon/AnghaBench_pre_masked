
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l34_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct cs35l34_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 struct cs35l34_private *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_4 & VAR_2) {
 case 129:
  FUNC_0(VAR_6->regmap, VAR_0,
        0x80, 0x80);
  break;
 case 128:
  FUNC_0(VAR_6->regmap, VAR_0,
        0x80, 0x00);
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
