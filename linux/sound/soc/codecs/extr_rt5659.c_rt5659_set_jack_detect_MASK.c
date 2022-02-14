
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt5659_priv {struct snd_soc_jack* hs_jack; } ;


 int FUNC_0 (int ,struct rt5659_priv*) ;
 struct rt5659_priv* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_0,
 struct snd_soc_jack *VAR_1)
{
 struct rt5659_priv *VAR_2 = FUNC_1(VAR_0);

 VAR_2->hs_jack = VAR_1;

 FUNC_0(0, VAR_2);

 return 0;
}
