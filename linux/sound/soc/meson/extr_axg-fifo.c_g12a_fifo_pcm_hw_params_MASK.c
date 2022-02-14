
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_fifo {int map; } ;


 int VAR_0 ;
 struct axg_fifo* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
       struct snd_pcm_hw_params *VAR_2)
{
 struct axg_fifo *VAR_3 = FUNC_0(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;


 FUNC_2(VAR_3->map, VAR_0, VAR_4->dma_addr);

 return 0;
}
