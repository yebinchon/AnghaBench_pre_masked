
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_addr; } ;
struct axg_fifo {int map; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 struct axg_fifo* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct axg_fifo *VAR_2 = FUNC_0(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 unsigned int VAR_4;

 FUNC_2(VAR_2->map, VAR_0, &VAR_4);

 return FUNC_1(VAR_3, VAR_4 - (unsigned int)VAR_3->dma_addr);
}
