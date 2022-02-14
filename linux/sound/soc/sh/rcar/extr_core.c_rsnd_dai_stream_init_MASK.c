
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rsnd_dai_stream {struct snd_pcm_substream* substream; } ;



__attribute__((used)) static void FUNC_0(struct rsnd_dai_stream *VAR_0,
    struct snd_pcm_substream *VAR_1)
{
 VAR_0->substream = VAR_1;
}
