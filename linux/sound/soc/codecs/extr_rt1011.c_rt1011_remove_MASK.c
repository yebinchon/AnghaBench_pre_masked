
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt1011_priv {int regmap; int cali_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct rt1011_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct rt1011_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->cali_work);
 FUNC_1(VAR_1->regmap);
}
