
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5670_priv {int hp_gpio; int jack; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct rt5670_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_1)
{
 struct rt5670_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->regmap, VAR_0, 0);
 FUNC_2(VAR_2->jack, 1, &VAR_2->hp_gpio);
}
