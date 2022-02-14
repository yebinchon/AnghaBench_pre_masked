
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int channels; } ;
struct snd_pcm_plugin {TYPE_1__ src_format; scalar_t__ extra_data; } ;
struct rate_priv {TYPE_2__* channels; scalar_t__ pos; } ;
struct TYPE_4__ {scalar_t__ last_S2; scalar_t__ last_S1; } ;



__attribute__((used)) static void FUNC_0(struct snd_pcm_plugin *VAR_0)
{
 unsigned int VAR_1;
 struct rate_priv *VAR_2 = (struct rate_priv *)VAR_0->extra_data;
 VAR_2->pos = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->src_format.channels; VAR_1++) {
  VAR_2->channels[VAR_1].last_S1 = 0;
  VAR_2->channels[VAR_1].last_S2 = 0;
 }
}
