
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_pcm {int dummy; } ;
struct snd_soc_dai_driver {int * ops; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct snd_soc_component *VAR_1, int VAR_2,
   struct snd_soc_dai_driver *VAR_3,
   struct snd_soc_tplg_pcm *VAR_4, struct snd_soc_dai *VAR_5)
{
 VAR_3->ops = &VAR_0;

 return 0;
}
