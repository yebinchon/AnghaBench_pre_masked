
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct snd_card_aica {int channel; int * substream; int timer; int spu_dma_work; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream
     *VAR_0)
{
 struct snd_card_aica *VAR_1 = VAR_0->pcm->private_data;
 FUNC_1(&(VAR_1->spu_dma_work));
 FUNC_0(&VAR_1->timer);
 VAR_1->substream = ((void*)0);
 FUNC_2(VAR_1->channel);
 FUNC_3();
 return 0;
}
