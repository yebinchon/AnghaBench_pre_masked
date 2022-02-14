
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ rate; scalar_t__ format; } ;
struct snd_pcm_plugin {int transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int ,struct snd_pcm_plugin**) ;

int FUNC_2(struct snd_pcm_substream *VAR_2,
          struct snd_pcm_plugin_format *VAR_3,
          struct snd_pcm_plugin_format *VAR_4,
          struct snd_pcm_plugin **VAR_5)
{
 struct snd_pcm_plugin *VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_0;
 *VAR_5 = ((void*)0);
 if (FUNC_0(VAR_3->rate != VAR_4->rate))
  return -VAR_0;
 if (FUNC_0(VAR_3->format != VAR_4->format))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2, "route conversion",
       VAR_3, VAR_4, 0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->transfer = VAR_1;
 *VAR_5 = VAR_6;
 return 0;
}
