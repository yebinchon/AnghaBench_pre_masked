
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct rt5514_dsp {int copy_work; int dma_lock; int * substream; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct rt5514_dsp* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_2, VAR_0);
 struct rt5514_dsp *VAR_4 =
  FUNC_4(VAR_3);

 FUNC_1(&VAR_4->dma_lock);
 VAR_4->substream = ((void*)0);
 FUNC_2(&VAR_4->dma_lock);

 FUNC_0(&VAR_4->copy_work);

 return FUNC_3(VAR_1);
}
