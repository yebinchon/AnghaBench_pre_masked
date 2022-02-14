
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;
struct omap_dmic {int active; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct omap_dmic* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct omap_dmic *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->mutex);

 if (!VAR_2->active)
  VAR_3->active = 1;
 else
  VAR_4 = -VAR_0;

 FUNC_1(&VAR_3->mutex);

 return VAR_4;
}
