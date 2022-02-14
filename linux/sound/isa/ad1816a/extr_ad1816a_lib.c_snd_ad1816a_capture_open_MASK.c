
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int period_bytes_max; int buffer_bytes_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ad1816a {struct snd_pcm_substream* capture_substream; int dma2; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (int ,int *) ;
 struct snd_ad1816a* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_ad1816a *VAR_3 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_0)) < 0)
  return VAR_5;
 VAR_4->hw = VAR_1;
 FUNC_1(VAR_3->dma2, &VAR_4->hw.buffer_bytes_max);
 FUNC_1(VAR_3->dma2, &VAR_4->hw.period_bytes_max);
 VAR_3->capture_substream = VAR_2;
 return 0;
}
