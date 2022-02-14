
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98090_priv {int * component; int pll_work; int pll_det_disable_work; int pll_det_enable_work; int jack_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct max98090_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct max98090_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->jack_work);
 FUNC_0(&VAR_1->pll_det_enable_work);
 FUNC_1(&VAR_1->pll_det_disable_work);
 FUNC_1(&VAR_1->pll_work);
 VAR_1->component = ((void*)0);
}
