
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_card_aica {int timer; int spu_dma_work; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_card_aica *VAR_2;
 struct snd_pcm_runtime *VAR_3;
 VAR_3 = VAR_1->runtime;
 VAR_2 = VAR_1->pcm->private_data;

 FUNC_1(&(VAR_2->spu_dma_work));
 FUNC_0(&VAR_2->timer, VAR_0 + 4);
}
