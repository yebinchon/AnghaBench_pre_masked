
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int* channel_map; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_channel_info {scalar_t__ channel; int offset; int step; scalar_t__ first; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 struct snd_rme9652* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_channel_info *VAR_4)
{
 struct snd_rme9652 *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (FUNC_1(VAR_4->channel >= VAR_2))
  return -VAR_0;

 VAR_6 = VAR_5->channel_map[FUNC_0(VAR_4->channel,
            VAR_2)];
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_4->offset = VAR_6 * VAR_1;
 VAR_4->first = 0;
 VAR_4->step = 32;
 return 0;
}
