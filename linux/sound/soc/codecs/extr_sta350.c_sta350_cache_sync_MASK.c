
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct sta350_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3)
{
 struct sta350_priv *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5;
 int VAR_6;


 FUNC_1(VAR_4->regmap, VAR_0, &VAR_5);
 FUNC_2(VAR_4->regmap, VAR_1, VAR_5 | VAR_2);
 FUNC_4(VAR_3);
 VAR_6 = FUNC_0(VAR_4->regmap);
 FUNC_2(VAR_4->regmap, VAR_1, VAR_5);
 return VAR_6;
}
