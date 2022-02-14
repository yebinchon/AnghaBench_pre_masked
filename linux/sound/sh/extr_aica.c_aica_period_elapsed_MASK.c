
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;
struct snd_card_aica {int current_period; int dma_check; int spu_dma_work; int timer; struct snd_pcm_substream* substream; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_card_aica* VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 struct snd_card_aica* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct snd_card_aica *VAR_6 = FUNC_1(VAR_6,
             VAR_5, VAR_4);
 struct snd_pcm_substream *VAR_7 = VAR_6->substream;

 int VAR_8;
 struct snd_pcm_runtime *VAR_9;
 VAR_9 = VAR_7->runtime;
 VAR_6 = VAR_7->pcm->private_data;

 VAR_8 =
     FUNC_0(VAR_9,
       FUNC_3
       (VAR_0)) /
     VAR_1;
 if (VAR_8 == VAR_6->current_period) {

  FUNC_2(&(VAR_6->timer), VAR_3 + 1);
  return;
 }
 if (VAR_9->channels > 1)
  VAR_6->current_period = VAR_8;
 if (FUNC_5(VAR_6->dma_check == 0))
  VAR_6->dma_check = 1;
 FUNC_4(&(VAR_6->spu_dma_work));
}
