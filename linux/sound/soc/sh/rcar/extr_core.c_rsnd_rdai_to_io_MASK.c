
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {struct rsnd_dai_stream capture; struct rsnd_dai_stream playback; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
struct rsnd_dai_stream *FUNC_0(struct rsnd_dai *VAR_1,
     struct snd_pcm_substream *VAR_2)
{
 if (VAR_2->stream == VAR_0)
  return &VAR_1->playback;
 else
  return &VAR_1->capture;
}
