
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_channel_info {unsigned int channel; int offset; int step; scalar_t__ first; } ;
struct hdsp {unsigned int max_channels; int* channel_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 struct hdsp* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
        struct snd_pcm_channel_info *VAR_3)
{
 struct hdsp *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = VAR_3->channel;

 if (FUNC_1(VAR_5 >= VAR_4->max_channels))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_5, VAR_4->max_channels);

 if (VAR_4->channel_map[VAR_5] < 0)
  return -VAR_0;

 VAR_3->offset = VAR_4->channel_map[VAR_5] * VAR_1;
 VAR_3->first = 0;
 VAR_3->step = 32;
 return 0;
}
