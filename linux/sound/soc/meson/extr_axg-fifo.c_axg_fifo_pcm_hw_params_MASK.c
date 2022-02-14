
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int dma_addr; unsigned int dma_bytes; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_fifo {int map; } ;
typedef unsigned int dma_addr_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct axg_fifo* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6,
      struct snd_pcm_hw_params *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 struct axg_fifo *VAR_9 = FUNC_1(VAR_6);
 dma_addr_t VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_6, FUNC_2(VAR_7));
 if (VAR_12 < 0)
  return VAR_12;


 VAR_10 = VAR_8->dma_addr + VAR_8->dma_bytes - VAR_0;
 FUNC_5(VAR_9->map, VAR_5, VAR_8->dma_addr);
 FUNC_5(VAR_9->map, VAR_2, VAR_10);


 VAR_11 = FUNC_3(VAR_7) / VAR_0;
 FUNC_5(VAR_9->map, VAR_3, VAR_11);


 FUNC_4(VAR_9->map, VAR_1,
      FUNC_0(VAR_4),
      FUNC_0(VAR_4));

 return 0;
}
