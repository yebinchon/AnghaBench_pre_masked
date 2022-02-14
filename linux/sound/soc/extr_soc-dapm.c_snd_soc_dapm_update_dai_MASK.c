
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dapm_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct snd_pcm_substream *VAR_1,
       struct snd_pcm_hw_params *VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 int VAR_5;

 FUNC_1(&VAR_4->card->dapm_mutex, VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->card->dapm_mutex);

 return VAR_5;
}
