
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int channels; } ;
struct TYPE_2__ {int hw_buffer_size; int hw_queue_size; int sw_buffer_size; int hw_io; } ;
struct hal2_codec {struct snd_pcm_substream* substream; TYPE_1__ pcm_indirect; int buffer_dma; int sample_rate; int voices; } ;
struct snd_hal2 {struct hal2_codec dac; } ;


 int VAR_0 ;
 int FUNC_0 (struct hal2_codec*,int ) ;
 int FUNC_1 (struct snd_hal2*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_hal2* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_hal2 *VAR_2 = FUNC_4(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct hal2_codec *VAR_4 = &VAR_2->dac;

 VAR_4->voices = VAR_3->channels;
 VAR_4->sample_rate = FUNC_0(VAR_4, VAR_3->rate);
 FUNC_2(&VAR_4->pcm_indirect, 0, sizeof(VAR_4->pcm_indirect));
 VAR_4->pcm_indirect.hw_buffer_size = VAR_0;
 VAR_4->pcm_indirect.hw_queue_size = VAR_0 / 2;
 VAR_4->pcm_indirect.hw_io = VAR_4->buffer_dma;
 VAR_4->pcm_indirect.sw_buffer_size = FUNC_3(VAR_1);
 VAR_4->substream = VAR_1;
 FUNC_1(VAR_2);
 return 0;
}
