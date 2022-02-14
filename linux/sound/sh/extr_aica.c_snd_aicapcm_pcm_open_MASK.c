
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_card_aica {scalar_t__ dma_check; scalar_t__ current_period; scalar_t__ clicks; struct aica_channel* channel; int master_volume; } ;
struct aica_channel {int pan; scalar_t__ flags; scalar_t__ pos; int vol; int cmd; int sfmt; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aica_channel* FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream
    *VAR_7)
{
 struct snd_pcm_runtime *VAR_8;
 struct aica_channel *VAR_9;
 struct snd_card_aica *VAR_10;
 if (!VAR_5)
  return -VAR_1;
 VAR_10 = VAR_7->pcm->private_data;
 VAR_9 = FUNC_0(sizeof(struct aica_channel), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->sfmt = VAR_4;
 VAR_9->cmd = VAR_0;
 VAR_9->vol = VAR_10->master_volume;
 VAR_9->pan = 0x80;
 VAR_9->pos = 0;
 VAR_9->flags = 0;
 VAR_10->channel = VAR_9;
 VAR_8 = VAR_7->runtime;
 VAR_8->hw = VAR_6;
 FUNC_1();
 VAR_10->clicks = 0;
 VAR_10->current_period = 0;
 VAR_10->dma_check = 0;
 return 0;
}
