
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {size_t stream; } ;
struct davinci_mcasp {scalar_t__ op_mode; scalar_t__ max_format_width; scalar_t__ channels; scalar_t__* active_serializers; int ** substreams; } ;


 scalar_t__ VAR_0 ;
 struct davinci_mcasp* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1,
       struct snd_soc_dai *VAR_2)
{
 struct davinci_mcasp *VAR_3 = FUNC_0(VAR_2);

 VAR_3->substreams[VAR_1->stream] = ((void*)0);
 VAR_3->active_serializers[VAR_1->stream] = 0;

 if (VAR_3->op_mode == VAR_0)
  return;

 if (!VAR_2->active) {
  VAR_3->channels = 0;
  VAR_3->max_format_width = 0;
 }
}
