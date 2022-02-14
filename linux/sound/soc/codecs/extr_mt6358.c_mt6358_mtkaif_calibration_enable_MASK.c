
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
 int FUNC_0 (struct mt6358_priv*) ;
 int FUNC_1 (struct mt6358_priv*) ;
 int FUNC_2 (struct mt6358_priv*,int) ;
 int FUNC_3 (struct mt6358_priv*,int) ;
 int FUNC_4 (struct mt6358_priv*,int) ;
 int FUNC_5 (struct mt6358_priv*,int) ;
 int FUNC_6 (struct mt6358_priv*) ;
 int FUNC_7 (int ,int ,int ,int) ;
 struct mt6358_priv* FUNC_8 (struct snd_soc_component*) ;

int FUNC_9(struct snd_soc_component *VAR_5)
{
 struct mt6358_priv *VAR_6 = FUNC_8(VAR_5);

 FUNC_6(VAR_6);
 FUNC_0(VAR_6);
 FUNC_1(VAR_6);

 FUNC_4(VAR_6, 1);
 FUNC_2(VAR_6, 1);
 FUNC_3(VAR_6, 1);
 FUNC_5(VAR_6, 1);


 FUNC_7(VAR_6->regmap, VAR_0,
      VAR_1,
      1 << VAR_2);
 FUNC_7(VAR_6->regmap, VAR_0,
      VAR_3,
      1 << VAR_4);
 return 0;
}
