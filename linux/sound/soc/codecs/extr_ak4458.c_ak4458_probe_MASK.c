
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct ak4458_priv {int fs; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 struct ak4458_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct ak4458_priv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->fs = 48000;

 return FUNC_0(VAR_0);
}
