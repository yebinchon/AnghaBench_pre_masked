
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct ad193x_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct ad193x_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct ad193x_priv *VAR_4 = FUNC_1(VAR_2->component);

 if (VAR_3)
  FUNC_0(VAR_4->regmap, VAR_0,
        VAR_1,
        VAR_1);
 else
  FUNC_0(VAR_4->regmap, VAR_0,
        VAR_1, 0);

 return 0;
}
