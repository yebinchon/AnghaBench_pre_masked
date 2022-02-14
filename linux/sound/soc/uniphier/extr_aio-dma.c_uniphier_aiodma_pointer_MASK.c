
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_sub {int lock; int wr_offs; int rd_offs; TYPE_1__* swm; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int channels; int dma_bytes; int dma_addr; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_6 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(
     struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = FUNC_3(VAR_1);
 struct uniphier_aio *VAR_4 = FUNC_6(VAR_3->cpu_dai);
 struct uniphier_aio_sub *VAR_5 = &VAR_4->sub[VAR_1->stream];
 int VAR_6 = VAR_2->period_size *
  VAR_2->channels * FUNC_2(VAR_2, 1);
 unsigned long VAR_7;
 snd_pcm_uframes_t VAR_8;

 FUNC_4(&VAR_5->lock, VAR_7);
 FUNC_0(VAR_5, VAR_2->dma_addr, VAR_2->dma_bytes, VAR_6);

 if (VAR_5->swm->dir == VAR_0)
  VAR_8 = FUNC_1(VAR_2, VAR_5->rd_offs);
 else
  VAR_8 = FUNC_1(VAR_2, VAR_5->wr_offs);
 FUNC_5(&VAR_5->lock, VAR_7);

 return VAR_8;
}
