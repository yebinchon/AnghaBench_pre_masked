
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5086_private {int regmap; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct tas5086_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_2->component;
 struct tas5086_private *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = 0;

 if (VAR_3)
  VAR_7 = VAR_1;

 return FUNC_0(VAR_6->regmap, VAR_0, VAR_7);
}
