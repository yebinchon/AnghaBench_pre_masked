
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5670_priv {int jack_type; int jack_type_saved; } ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct rt5670_priv* FUNC_1 (struct snd_soc_component*) ;

void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct rt5670_priv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->jack_type_saved = VAR_1->jack_type;
 FUNC_0(VAR_0, 0);
}
