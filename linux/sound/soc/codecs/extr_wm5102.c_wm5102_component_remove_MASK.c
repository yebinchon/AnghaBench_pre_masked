
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* arizona; int * adsp; } ;
struct wm5102_priv {TYPE_2__ core; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {int * dapm; } ;


 struct wm5102_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int *,struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct wm5102_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->core.adsp[0], VAR_0);

 VAR_1->core.arizona->dapm = ((void*)0);
}
