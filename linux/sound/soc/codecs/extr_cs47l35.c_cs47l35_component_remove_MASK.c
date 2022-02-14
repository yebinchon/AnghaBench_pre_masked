
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct madera {int dapm_ptr_lock; int * dapm; } ;
struct TYPE_2__ {int * adsp; struct madera* madera; } ;
struct cs47l35 {TYPE_1__ core; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cs47l35* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int *,struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_1)
{
 struct cs47l35 *VAR_2 = FUNC_2(VAR_1);
 struct madera *VAR_3 = VAR_2->core.madera;
 int VAR_4;

 FUNC_0(&VAR_3->dapm_ptr_lock);
 VAR_3->dapm = ((void*)0);
 FUNC_1(&VAR_3->dapm_ptr_lock);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_3(&VAR_2->core.adsp[VAR_4], VAR_1);
}
