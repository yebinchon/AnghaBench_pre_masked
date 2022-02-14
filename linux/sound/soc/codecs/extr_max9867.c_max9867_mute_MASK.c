
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct max9867_priv {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct max9867_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_1->component;
 struct max9867_priv *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_4->regmap, VAR_0,
      1 << 6, !!VAR_2 << 6);
}
