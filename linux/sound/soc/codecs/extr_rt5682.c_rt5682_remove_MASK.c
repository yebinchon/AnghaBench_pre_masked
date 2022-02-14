
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5682_priv {int regmap; } ;


 int FUNC_0 (int ) ;
 struct rt5682_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct rt5682_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->regmap);
}
