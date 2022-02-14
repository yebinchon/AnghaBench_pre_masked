
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct psc_dma_stream {int dummy; } ;
struct psc_dma {struct psc_dma_stream playback; struct psc_dma_stream capture; } ;
struct TYPE_2__ {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct psc_dma_stream *
FUNC_0(struct snd_pcm_substream *VAR_1, struct psc_dma *VAR_2)
{
 if (VAR_1->pstr->stream == VAR_0)
  return &VAR_2->capture;
 return &VAR_2->playback;
}
