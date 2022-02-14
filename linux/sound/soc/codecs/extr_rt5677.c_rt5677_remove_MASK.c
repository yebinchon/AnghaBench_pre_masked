
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int reset_pin; int pow_ldo2; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct rt5677_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_1)
{
 struct rt5677_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->regmap, VAR_0, 0x10ec);
 FUNC_0(VAR_2->pow_ldo2, 0);
 FUNC_0(VAR_2->reset_pin, 1);
}
