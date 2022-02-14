
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt5663_priv {struct snd_soc_jack* hs_jack; } ;


 int FUNC_0 (int ,struct rt5663_priv*) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
 struct snd_soc_jack *VAR_1, void *VAR_2)
{
 struct rt5663_priv *VAR_3 = FUNC_1(VAR_0);

 VAR_3->hs_jack = VAR_1;

 FUNC_0(0, VAR_3);

 return 0;
}
