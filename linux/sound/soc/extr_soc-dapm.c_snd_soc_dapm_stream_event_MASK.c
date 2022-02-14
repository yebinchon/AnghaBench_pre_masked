
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int,int) ;

void FUNC_3(struct snd_soc_pcm_runtime *VAR_1, int VAR_2,
         int VAR_3)
{
 struct snd_soc_card *VAR_4 = VAR_1->card;

 FUNC_0(&VAR_4->dapm_mutex, VAR_0);
 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_4->dapm_mutex);
}
