
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t stream; } ;
struct hda_pcm_stream {int dummy; } ;
struct azx_pcm {TYPE_1__* info; } ;
struct TYPE_2__ {struct hda_pcm_stream* stream; } ;


 struct azx_pcm* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static inline struct hda_pcm_stream *
FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct azx_pcm *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->info->stream[VAR_0->stream];
}
