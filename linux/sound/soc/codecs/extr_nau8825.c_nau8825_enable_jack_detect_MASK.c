
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8825 {struct snd_soc_jack* jack; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;
 struct nau8825* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_4,
    struct snd_soc_jack *VAR_5)
{
 struct nau8825 *VAR_6 = FUNC_1(VAR_4);
 struct regmap *VAR_7 = VAR_6->regmap;

 VAR_6->jack = VAR_5;




 FUNC_0(VAR_7, VAR_1,
  VAR_0 | VAR_3 | VAR_2,
  VAR_0 | VAR_3 | VAR_2);

 return 0;
}
