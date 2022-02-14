
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l33_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct cs35l33_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 struct cs35l33_private *VAR_7 = FUNC_1(VAR_6);

 if (VAR_5) {
  FUNC_0(VAR_7->regmap, VAR_1,
   VAR_2, VAR_2);
  FUNC_0(VAR_7->regmap, VAR_0,
   VAR_3, VAR_3);
 } else {
  FUNC_0(VAR_7->regmap, VAR_1,
   VAR_2, 0);
  FUNC_0(VAR_7->regmap, VAR_0,
   VAR_3, 0);
 }

 return 0;
}
