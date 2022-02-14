
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long dma_addr; int buffer_size; } ;
struct kirkwood_dma_data {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_0 (struct snd_pcm_runtime*,int ) ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_pcm_substream*) ;
 unsigned long FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct kirkwood_dma_data *VAR_9 = FUNC_1(VAR_7);
 unsigned long VAR_10, VAR_11;


 VAR_10 = FUNC_0(VAR_8, VAR_8->buffer_size);
 VAR_10 = (VAR_10>>2)-1;
 VAR_11 = FUNC_2(VAR_7);

 if (VAR_7->stream == VAR_6) {
  FUNC_3(VAR_11, VAR_9->io + VAR_2);
  FUNC_3(VAR_8->dma_addr, VAR_9->io + VAR_0);
  FUNC_3(VAR_10, VAR_9->io + VAR_1);
 } else {
  FUNC_3(VAR_11, VAR_9->io + VAR_5);
  FUNC_3(VAR_8->dma_addr, VAR_9->io + VAR_3);
  FUNC_3(VAR_10, VAR_9->io + VAR_4);
 }


 return 0;
}
