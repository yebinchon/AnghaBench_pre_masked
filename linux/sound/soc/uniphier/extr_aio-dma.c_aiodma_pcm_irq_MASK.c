
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_1__* substream; int lock; scalar_t__ threshold; } ;
struct snd_pcm_runtime {int period_size; int channels; int dma_bytes; int dma_addr; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ,scalar_t__) ;
 int FUNC_2 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct uniphier_aio_sub *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->substream->runtime;
 int VAR_2 = VAR_1->period_size *
  VAR_1->channels * FUNC_3(VAR_1, 1);
 int VAR_3;

 FUNC_5(&VAR_0->lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1->dma_bytes,
          VAR_0->threshold + VAR_2);
 if (!VAR_3)
  VAR_0->threshold += VAR_2;

 FUNC_2(VAR_0, VAR_1->dma_addr, VAR_1->dma_bytes, VAR_2);
 FUNC_0(VAR_0);
 FUNC_6(&VAR_0->lock);

 FUNC_4(VAR_0->substream);
}
