
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int first; int step; } ;
struct snd_pcm_plugin_channel {TYPE_2__ area; } ;
struct TYPE_3__ {unsigned int channels; } ;
struct snd_pcm_plugin {scalar_t__ extra_data; TYPE_1__ src_format; } ;
struct mulaw_priv {int (* func ) (struct snd_pcm_plugin*,struct snd_pcm_plugin_channel const*,struct snd_pcm_plugin_channel*,int ) ;} ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_plugin*,struct snd_pcm_plugin_channel const*,struct snd_pcm_plugin_channel*,int ) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_2(struct snd_pcm_plugin *VAR_1,
         const struct snd_pcm_plugin_channel *VAR_2,
         struct snd_pcm_plugin_channel *VAR_3,
         snd_pcm_uframes_t VAR_4)
{
 struct mulaw_priv *VAR_5;

 if (FUNC_0(!VAR_1 || !VAR_2 || !VAR_3))
  return -VAR_0;
 if (VAR_4 == 0)
  return 0;
 VAR_5 = (struct mulaw_priv *)VAR_1->extra_data;
 VAR_5->func(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
