
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ps3_card_info {int dma_lock; scalar_t__* dma_start_vaddr; scalar_t__* dma_last_transfer_vaddr; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 struct snd_ps3_card_info* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(
 struct snd_pcm_substream *VAR_1)
{
 struct snd_ps3_card_info *VAR_2 = FUNC_1(VAR_1);
 size_t VAR_3;
 snd_pcm_uframes_t VAR_4;

 FUNC_2(&VAR_2->dma_lock);
 {
  VAR_3 = (size_t)(VAR_2->dma_last_transfer_vaddr[VAR_0] -
     VAR_2->dma_start_vaddr[VAR_0]);
 }
 FUNC_3(&VAR_2->dma_lock);

 VAR_4 = FUNC_0(VAR_1->runtime, VAR_3 * 2);

 return VAR_4;
}
