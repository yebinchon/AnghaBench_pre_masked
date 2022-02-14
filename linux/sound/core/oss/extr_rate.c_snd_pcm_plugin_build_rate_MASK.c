
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ channels; scalar_t__ format; int rate; } ;
struct snd_pcm_plugin {int action; int dst_frames; int src_frames; int transfer; scalar_t__ extra_data; } ;
struct rate_priv {int pitch; scalar_t__ old_dst_frames; scalar_t__ old_src_frames; scalar_t__ pos; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_plugin*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int ,struct snd_pcm_plugin**) ;
 int FUNC_3 (struct rate_priv*,int ,scalar_t__) ;

int FUNC_4(struct snd_pcm_substream *VAR_10,
         struct snd_pcm_plugin_format *VAR_11,
         struct snd_pcm_plugin_format *VAR_12,
         struct snd_pcm_plugin **VAR_13)
{
 int VAR_14;
 struct rate_priv *VAR_15;
 struct snd_pcm_plugin *VAR_16;

 if (FUNC_1(!VAR_13))
  return -VAR_0;
 *VAR_13 = ((void*)0);

 if (FUNC_1(VAR_11->channels != VAR_12->channels))
  return -VAR_0;
 if (FUNC_1(VAR_11->channels <= 0))
  return -VAR_0;
 if (FUNC_1(VAR_11->format != VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_12->format != VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_11->rate == VAR_12->rate))
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_10, "rate conversion",
       VAR_11, VAR_12,
       FUNC_3(VAR_15, VAR_3,
            VAR_11->channels),
       &VAR_16);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_15 = (struct rate_priv *)VAR_16->extra_data;
 if (VAR_11->rate < VAR_12->rate) {
  VAR_15->pitch = ((VAR_11->rate << VAR_1) + (VAR_12->rate >> 1)) / VAR_12->rate;
  VAR_15->func = VAR_8;
 } else {
  VAR_15->pitch = ((VAR_12->rate << VAR_1) + (VAR_11->rate >> 1)) / VAR_11->rate;
  VAR_15->func = VAR_9;
 }
 VAR_15->pos = 0;
 FUNC_0(VAR_16);
 VAR_15->old_src_frames = VAR_15->old_dst_frames = 0;
 VAR_16->transfer = VAR_7;
 VAR_16->src_frames = VAR_6;
 VAR_16->dst_frames = VAR_5;
 VAR_16->action = VAR_4;
 *VAR_13 = VAR_16;
 return 0;
}
