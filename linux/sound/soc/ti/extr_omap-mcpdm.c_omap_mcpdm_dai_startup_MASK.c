
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;
struct omap_mcpdm {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap_mcpdm*) ;
 struct omap_mcpdm* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct omap_mcpdm *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->mutex);

 if (!VAR_1->active)
  FUNC_2(VAR_2);

 FUNC_1(&VAR_2->mutex);

 return 0;
}
