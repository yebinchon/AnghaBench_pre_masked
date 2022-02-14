
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98926_priv {int regmap; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct max98926_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_1)
{
 struct max98926_priv *VAR_2 = FUNC_1(VAR_1);

 VAR_2->component = VAR_1;


 FUNC_0(VAR_2->regmap, VAR_0, 0xF0);
 return 0;
}
