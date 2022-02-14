
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct mt6351_priv {int regmap; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 struct mt6351_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct mt6351_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, VAR_1->regmap);

 FUNC_0(VAR_0);
 return 0;
}
