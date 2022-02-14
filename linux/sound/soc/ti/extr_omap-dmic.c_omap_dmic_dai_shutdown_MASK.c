
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;
struct omap_dmic {int mutex; scalar_t__ active; int pm_qos_req; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct omap_dmic* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct omap_dmic *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->mutex);

 FUNC_2(&VAR_2->pm_qos_req);

 if (!VAR_1->active)
  VAR_2->active = 0;

 FUNC_1(&VAR_2->mutex);
}
