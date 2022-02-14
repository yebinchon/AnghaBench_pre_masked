
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* arizona; int * adsp; } ;
struct wm5110_priv {TYPE_2__ core; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {int * dapm; } ;


 int VAR_0 ;
 struct wm5110_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int *,struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_1)
{
 struct wm5110_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_1(&VAR_2->core.adsp[VAR_3], VAR_1);

 VAR_2->core.arizona->dapm = ((void*)0);
}
