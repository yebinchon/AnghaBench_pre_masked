
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_pcm_substream {int stream; } ;
struct q6asm_dai_rtd {int audio_client; int state; int pcm_count; int pcm_irq_pos; struct snd_pcm_substream* substream; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_4, uint32_t VAR_5,
     uint32_t *VAR_6, void *VAR_7)
{
 struct q6asm_dai_rtd *VAR_8 = VAR_7;
 struct snd_pcm_substream *VAR_9 = VAR_8->substream;

 switch (VAR_4) {
 case 130:
  if (VAR_9->stream == VAR_3)
   FUNC_1(VAR_8->audio_client,
       VAR_8->pcm_count, 0, 0, VAR_0);
  break;
 case 131:
  VAR_8->state = VAR_2;
  break;
 case 128: {
  VAR_8->pcm_irq_pos += VAR_8->pcm_count;
  FUNC_2(VAR_9);
  if (VAR_8->state == VAR_1)
   FUNC_1(VAR_8->audio_client,
        VAR_8->pcm_count, 0, 0, VAR_0);

  break;
  }
 case 129:
  VAR_8->pcm_irq_pos += VAR_8->pcm_count;
  FUNC_2(VAR_9);
  if (VAR_8->state == VAR_1)
   FUNC_0(VAR_8->audio_client);

  break;
 default:
  break;
 }
}
