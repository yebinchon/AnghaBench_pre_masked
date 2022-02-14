
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct madera {int dapm_ptr_lock; int * dapm; } ;
struct TYPE_2__ {int * adsp; struct madera* madera; } ;
struct cs47l92 {TYPE_1__ core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cs47l92* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int *,struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct cs47l92 *VAR_1 = FUNC_2(VAR_0);
 struct madera *VAR_2 = VAR_1->core.madera;

 FUNC_0(&VAR_2->dapm_ptr_lock);
 VAR_2->dapm = ((void*)0);
 FUNC_1(&VAR_2->dapm_ptr_lock);

 FUNC_3(&VAR_1->core.adsp[0], VAR_0);
}
