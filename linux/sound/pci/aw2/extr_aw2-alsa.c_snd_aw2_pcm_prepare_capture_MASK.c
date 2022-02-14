
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;
struct aw2_pcm_device {int stream_number; struct aw2* chip; } ;
struct aw2 {int mtx; int saa7146; } ;
typedef int snd_aw2_saa7146_it_cb ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (int *,int ,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct snd_pcm_substream*) ;
 unsigned long FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ VAR_0 ;
 struct aw2_pcm_device* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct aw2_pcm_device *VAR_2 = FUNC_6(VAR_1);
 struct aw2 *VAR_3 = VAR_2->chip;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 unsigned long VAR_5, VAR_6;

 FUNC_0(&VAR_3->mtx);

 VAR_5 = FUNC_5(VAR_1);
 VAR_6 = FUNC_4(VAR_1);

 FUNC_3(&VAR_3->saa7146,
      VAR_2->stream_number,
      VAR_4->dma_addr, VAR_5,
      VAR_6);


 FUNC_2(VAR_2->stream_number,
         (snd_aw2_saa7146_it_cb)
         VAR_0,
         (void *)VAR_1);

 FUNC_1(&VAR_3->mtx);

 return 0;
}
