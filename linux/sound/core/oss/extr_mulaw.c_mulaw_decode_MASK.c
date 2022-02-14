
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* addr; int first; int step; } ;
struct snd_pcm_plugin_channel {int enabled; TYPE_3__ area; scalar_t__ wanted; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_4__ {int channels; } ;
struct snd_pcm_plugin {TYPE_2__ dst_format; TYPE_1__ src_format; scalar_t__ extra_data; } ;
struct mulaw_priv {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct mulaw_priv*,char*,short) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 short FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_plugin *VAR_0,
   const struct snd_pcm_plugin_channel *VAR_1,
   struct snd_pcm_plugin_channel *VAR_2,
   snd_pcm_uframes_t VAR_3)
{
 struct mulaw_priv *VAR_4 = (struct mulaw_priv *)VAR_0->extra_data;
 int VAR_5;
 int VAR_6 = VAR_0->src_format.channels;
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
  char *VAR_7;
  char *VAR_8;
  int VAR_9, VAR_10;
  snd_pcm_uframes_t VAR_11;
  if (!VAR_1[VAR_5].enabled) {
   if (VAR_2[VAR_5].wanted)
    FUNC_1(&VAR_2[VAR_5].area, 0, VAR_3, VAR_0->dst_format.format);
   VAR_2[VAR_5].enabled = 0;
   continue;
  }
  VAR_2[VAR_5].enabled = 1;
  VAR_7 = VAR_1[VAR_5].area.addr + VAR_1[VAR_5].area.first / 8;
  VAR_8 = VAR_2[VAR_5].area.addr + VAR_2[VAR_5].area.first / 8;
  VAR_9 = VAR_1[VAR_5].area.step / 8;
  VAR_10 = VAR_2[VAR_5].area.step / 8;
  VAR_11 = VAR_3;
  while (VAR_11-- > 0) {
   signed short VAR_12 = FUNC_2(*VAR_7);
   FUNC_0(VAR_4, VAR_8, VAR_12);
   VAR_7 += VAR_9;
   VAR_8 += VAR_10;
  }
 }
}
