
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {int lock; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int channels; scalar_t__ dma_bytes; scalar_t__ dma_addr; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct uniphier_aio_sub*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_soc_pcm_runtime *VAR_2 = FUNC_3(VAR_0);
 struct uniphier_aio *VAR_3 = FUNC_6(VAR_2->cpu_dai);
 struct uniphier_aio_sub *VAR_4 = &VAR_3->sub[VAR_0->stream];
 int VAR_5 = VAR_1->period_size *
  VAR_1->channels * FUNC_2(VAR_1, 1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_4(&VAR_4->lock, VAR_6);
 VAR_7 = FUNC_1(VAR_4, VAR_1->dma_addr,
       VAR_1->dma_addr + VAR_1->dma_bytes,
       VAR_5);
 FUNC_5(&VAR_4->lock, VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
