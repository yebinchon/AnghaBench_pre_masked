
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_chmap {int max_channels; unsigned int channel_mask; } ;



__attribute__((used)) static bool FUNC_0(const struct snd_pcm_chmap *VAR_0, int VAR_1)
{
 if (VAR_1 > VAR_0->max_channels)
  return 0;
 return !VAR_0->channel_mask || (VAR_0->channel_mask & (1U << VAR_1));
}
