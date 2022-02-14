
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct audio_stream {TYPE_1__* buffer; int dma; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {long relative_end; } ;


 int FUNC_0 (int ,long) ;
 long FUNC_1 (int ) ;
 struct audio_stream* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct audio_stream *VAR_1 = FUNC_2(VAR_0);
 long VAR_2;

 VAR_2 = FUNC_1(VAR_1->dma);
 VAR_2 = VAR_1->buffer->relative_end - VAR_2;
 if (VAR_2 == -1)
  VAR_2 = 0;
 return FUNC_0(VAR_0->runtime, VAR_2);
}
