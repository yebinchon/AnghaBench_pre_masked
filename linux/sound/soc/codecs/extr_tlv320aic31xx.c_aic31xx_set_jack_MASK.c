
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct aic31xx_priv {int regmap; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct aic31xx_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2,
       struct snd_soc_jack *VAR_3, void *VAR_4)
{
 struct aic31xx_priv *VAR_5 = FUNC_1(VAR_2);

 VAR_5->jack = VAR_3;


 FUNC_0(VAR_5->regmap, VAR_0,
       VAR_3 ? VAR_1 : 0);

 return 0;
}
