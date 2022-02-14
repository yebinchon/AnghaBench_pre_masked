
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {int channels; int rate; int format; } ;
struct snd_pcm_plugin {scalar_t__ access; int transfer; int client_channels; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int,struct snd_pcm_plugin**) ;

int FUNC_7(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_pcm_plugin **VAR_8)
{
 int VAR_9;
 struct snd_pcm_plugin_format VAR_10;
 struct snd_pcm_plugin *VAR_11;

 if (FUNC_4(!VAR_8))
  return -VAR_0;
 *VAR_8 = ((void*)0);
 if (FUNC_4(!VAR_6 || !VAR_7))
  return -VAR_0;
 VAR_10.format = FUNC_2(VAR_7);
 VAR_10.rate = FUNC_3(VAR_7);
 VAR_10.channels = FUNC_1(VAR_7);
 VAR_9 = FUNC_6(VAR_6, "I/O io",
       &VAR_10, &VAR_10,
       sizeof(void *) * VAR_10.channels,
       &VAR_11);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_11->access = FUNC_0(VAR_7);
 if (FUNC_5(VAR_6) == VAR_2) {
  VAR_11->transfer = VAR_4;
  if (VAR_11->access == VAR_1)
   VAR_11->client_channels = VAR_5;
 } else {
  VAR_11->transfer = VAR_3;
 }

 *VAR_8 = VAR_11;
 return 0;
}
