
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_channel {int dummy; } ;
struct snd_pcm_plugin {int (* client_channels ) (struct snd_pcm_plugin*,int,struct snd_pcm_plugin_channel**) ;int (* transfer ) (struct snd_pcm_plugin*,struct snd_pcm_plugin_channel*,struct snd_pcm_plugin_channel*,int) ;int name; struct snd_pcm_plugin* next; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int FUNC_0 (char*,int ,int) ;
 struct snd_pcm_plugin* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_pcm_plugin*,int,struct snd_pcm_plugin_channel**) ;
 int FUNC_4 (struct snd_pcm_plugin*,struct snd_pcm_plugin_channel*,struct snd_pcm_plugin_channel*,int) ;

snd_pcm_sframes_t FUNC_5(struct snd_pcm_substream *VAR_0, struct snd_pcm_plugin_channel *VAR_1, snd_pcm_uframes_t VAR_2)
{
 struct snd_pcm_plugin *VAR_3, *VAR_4;
 struct snd_pcm_plugin_channel *VAR_5, *VAR_6;
 snd_pcm_sframes_t VAR_7 = VAR_2;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_0, VAR_7);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = ((void*)0);
 VAR_3 = FUNC_1(VAR_0);
 while (VAR_3 && VAR_7 > 0) {
  if ((VAR_4 = VAR_3->next) != ((void*)0)) {
   if ((VAR_8 = VAR_3->client_channels(VAR_3, VAR_7, &VAR_6)) < 0) {
    return VAR_8;
   }
   VAR_7 = VAR_8;
  } else {
   VAR_6 = VAR_1;
  }
  FUNC_0("read plugin: %s, %li\n", VAR_3->name, VAR_7);
  if ((VAR_7 = VAR_3->transfer(VAR_3, VAR_5, VAR_6, VAR_7)) < 0)
   return VAR_7;
  VAR_3 = VAR_4;
  VAR_5 = VAR_6;
 }
 return VAR_7;
}
