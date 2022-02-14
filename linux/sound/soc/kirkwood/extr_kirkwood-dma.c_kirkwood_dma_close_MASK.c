
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct kirkwood_dma_data {int irq; scalar_t__ io; int * substream_rec; int * substream_play; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct kirkwood_dma_data*) ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct kirkwood_dma_data *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return 0;

 if (VAR_2->stream == VAR_1)
  VAR_3->substream_play = ((void*)0);
 else
  VAR_3->substream_rec = ((void*)0);

 if (!VAR_3->substream_play && !VAR_3->substream_rec) {
  FUNC_2(0, VAR_3->io + VAR_0);
  FUNC_0(VAR_3->irq, VAR_3);
 }

 return 0;
}
