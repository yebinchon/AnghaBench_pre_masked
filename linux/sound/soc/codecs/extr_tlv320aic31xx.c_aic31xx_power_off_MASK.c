
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct aic31xx_priv {int supplies; int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct aic31xx_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct aic31xx_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->regmap, 1);
 FUNC_2(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
}
