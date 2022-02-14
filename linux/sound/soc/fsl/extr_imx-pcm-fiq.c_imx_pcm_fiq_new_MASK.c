
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_dma_buffer {scalar_t__ area; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_soc_pcm_runtime*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_pcm *VAR_7 = VAR_6->pcm;
 struct snd_pcm_substream *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7->streams[VAR_1].substream;
 if (VAR_8) {
  struct snd_dma_buffer *VAR_10 = &VAR_8->dma_buffer;

  VAR_5 = (unsigned long)VAR_10->area;
 }

 VAR_8 = VAR_7->streams[VAR_0].substream;
 if (VAR_8) {
  struct snd_dma_buffer *VAR_11 = &VAR_8->dma_buffer;

  VAR_3 = (unsigned long)VAR_11->area;
 }

 FUNC_1(&VAR_4,
  &VAR_2 - &VAR_4);

 return 0;
}
