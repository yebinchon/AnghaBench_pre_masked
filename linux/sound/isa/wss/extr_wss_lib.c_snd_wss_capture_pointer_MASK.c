
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int* image; int c_dma_size; int dma2; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 struct snd_wss* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_wss *VAR_3 = FUNC_2(VAR_2);
 size_t VAR_4;

 if (!(VAR_3->image[VAR_0] & VAR_1))
  return 0;
 VAR_4 = FUNC_1(VAR_3->dma2, VAR_3->c_dma_size);
 return FUNC_0(VAR_2->runtime, VAR_4);
}
