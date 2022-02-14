
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t stream; } ;
struct audio_stream {int dummy; } ;
struct alchemy_pcm_ctx {struct audio_stream* stream; } ;


 struct alchemy_pcm_ctx* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static inline struct audio_stream *FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct alchemy_pcm_ctx *VAR_1 = FUNC_0(VAR_0);
 return &(VAR_1->stream[VAR_0->stream]);
}
