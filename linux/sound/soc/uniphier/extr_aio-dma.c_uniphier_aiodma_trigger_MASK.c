
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int running; int lock; } ;
struct uniphier_aio {TYPE_2__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int channels; int dma_bytes; int dma_addr; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;




 int FUNC_0 (struct uniphier_aio_sub*,int) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int) ;
 struct snd_soc_pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = FUNC_4(VAR_0);
 struct uniphier_aio *VAR_4 = FUNC_7(VAR_3->cpu_dai);
 struct uniphier_aio_sub *VAR_5 = &VAR_4->sub[VAR_0->stream];
 struct device *VAR_6 = &VAR_4->chip->pdev->dev;
 int VAR_7 = VAR_2->period_size *
  VAR_2->channels * FUNC_3(VAR_2, 1);
 unsigned long VAR_8;

 FUNC_5(&VAR_5->lock, VAR_8);
 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_5, VAR_2->dma_addr, VAR_2->dma_bytes,
          VAR_7);
  FUNC_0(VAR_5, 1);
  VAR_5->running = 1;

  break;
 case 128:
  VAR_5->running = 0;
  FUNC_0(VAR_5, 0);

  break;
 default:
  FUNC_2(VAR_6, "Unknown trigger(%d) ignored\n", VAR_1);
  break;
 }
 FUNC_6(&VAR_5->lock, VAR_8);

 return 0;
}
