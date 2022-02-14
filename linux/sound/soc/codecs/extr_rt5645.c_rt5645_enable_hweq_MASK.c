
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct rt5645_priv {TYPE_1__* eq_param; int regmap; } ;
struct TYPE_2__ {int val; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct rt5645_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1)
{
 struct rt5645_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_1(VAR_2->eq_param[VAR_3].reg))
   FUNC_0(VAR_2->regmap, VAR_2->eq_param[VAR_3].reg,
     VAR_2->eq_param[VAR_3].val);
  else
   break;
 }

 return 0;
}
