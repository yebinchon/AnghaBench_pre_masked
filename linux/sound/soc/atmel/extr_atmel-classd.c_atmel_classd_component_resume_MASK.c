
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dummy; } ;
struct atmel_classd {int regmap; } ;


 int FUNC_0 (int ) ;
 struct atmel_classd* FUNC_1 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_2(VAR_0);
 struct atmel_classd *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->regmap);
}
