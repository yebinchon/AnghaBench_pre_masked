
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct aic23 {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct aic23* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct aic23 *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->regmap);
 FUNC_1(VAR_1->regmap);

 return 0;
}
