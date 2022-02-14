
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct mt6358_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct mt6358_priv* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_5,
     int VAR_6, int VAR_7)
{
 struct mt6358_priv *VAR_8 = FUNC_1(VAR_5);

 FUNC_0(VAR_8->regmap, VAR_0,
      VAR_3,
      VAR_6 << VAR_4);
 FUNC_0(VAR_8->regmap, VAR_0,
      VAR_1,
      VAR_7 << VAR_2);
 return 0;
}
