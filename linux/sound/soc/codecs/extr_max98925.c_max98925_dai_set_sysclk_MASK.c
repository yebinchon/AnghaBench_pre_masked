
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct max98925_priv {unsigned int sysclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct max98925_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3,
       int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->component;
 struct max98925_priv *VAR_8 = FUNC_1(VAR_7);

 switch (VAR_4) {
 case 0:

  FUNC_0(VAR_8->regmap,
    VAR_2,
    VAR_1, 0);
  break;
 case 1:

  FUNC_0(VAR_8->regmap,
    VAR_2,
    VAR_1,
    VAR_1);
  break;
 default:
  return -VAR_0;
 }
 VAR_8->sysclk = VAR_5;
 return 0;
}
