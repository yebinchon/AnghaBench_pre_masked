
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta32x_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct sta32x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct sta32x_priv *VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4;
 int VAR_5;


 FUNC_1(VAR_3->regmap, VAR_0, &VAR_4);
 FUNC_2(VAR_3->regmap, VAR_0, VAR_4 | VAR_1);
 FUNC_4(VAR_2);
 VAR_5 = FUNC_0(VAR_3->regmap);
 FUNC_2(VAR_3->regmap, VAR_0, VAR_4);
 return VAR_5;
}
