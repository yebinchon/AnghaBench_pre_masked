
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {int * audio_client; int dma_buffer; scalar_t__ state; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct q6asm_dai_rtd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_compr_stream *VAR_1)
{
 struct snd_compr_runtime *VAR_2 = VAR_1->runtime;
 struct q6asm_dai_rtd *VAR_3 = VAR_2->private_data;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;

 if (VAR_3->audio_client) {
  if (VAR_3->state)
   FUNC_2(VAR_3->audio_client, VAR_0);

  FUNC_5(&VAR_3->dma_buffer);
  FUNC_3(VAR_1->direction,
        VAR_3->audio_client);
  FUNC_1(VAR_3->audio_client);
  VAR_3->audio_client = ((void*)0);
 }
 FUNC_4(VAR_4->dai_link->id, VAR_1->direction);
 FUNC_0(VAR_3);

 return 0;
}
