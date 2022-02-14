
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {int * audio_client; scalar_t__ state; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct q6asm_dai_rtd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct q6asm_dai_rtd *VAR_4 = VAR_2->private_data;

 if (VAR_4->audio_client) {
  if (VAR_4->state)
   FUNC_2(VAR_4->audio_client, VAR_0);

  FUNC_3(VAR_1->stream,
        VAR_4->audio_client);
  FUNC_1(VAR_4->audio_client);
  VAR_4->audio_client = ((void*)0);
 }
 FUNC_4(VAR_3->dai_link->id,
      VAR_1->stream);
 FUNC_0(VAR_4);
 return 0;
}
