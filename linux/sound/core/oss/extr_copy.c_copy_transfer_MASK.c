
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int first; int step; } ;
struct snd_pcm_plugin_channel {int enabled; TYPE_3__ area; scalar_t__ wanted; } ;
struct TYPE_7__ {unsigned int channels; int format; } ;
struct TYPE_6__ {int format; } ;
struct snd_pcm_plugin {TYPE_2__ src_format; TYPE_1__ dst_format; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_3__*,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__,int ) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_3(struct snd_pcm_plugin *VAR_1,
        const struct snd_pcm_plugin_channel *VAR_2,
        struct snd_pcm_plugin_channel *VAR_3,
        snd_pcm_uframes_t VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (FUNC_0(!VAR_1 || !VAR_2 || !VAR_3))
  return -VAR_0;
 if (VAR_4 == 0)
  return 0;
 VAR_6 = VAR_1->src_format.channels;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (FUNC_0(VAR_2->area.first % 8 ||
          VAR_2->area.step % 8))
   return -VAR_0;
  if (FUNC_0(VAR_3->area.first % 8 ||
          VAR_3->area.step % 8))
   return -VAR_0;
  if (!VAR_2->enabled) {
   if (VAR_3->wanted)
    FUNC_2(&VAR_3->area, 0, VAR_4, VAR_1->dst_format.format);
   VAR_3->enabled = 0;
   continue;
  }
  VAR_3->enabled = 1;
  FUNC_1(&VAR_2->area, 0, &VAR_3->area, 0, VAR_4, VAR_1->src_format.format);
  VAR_2++;
  VAR_3++;
 }
 return VAR_4;
}
