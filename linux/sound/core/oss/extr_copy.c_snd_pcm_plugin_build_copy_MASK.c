
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ format; scalar_t__ rate; scalar_t__ channels; } ;
struct snd_pcm_plugin {int transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int ,struct snd_pcm_plugin**) ;

int FUNC_3(struct snd_pcm_substream *VAR_2,
         struct snd_pcm_plugin_format *VAR_3,
         struct snd_pcm_plugin_format *VAR_4,
         struct snd_pcm_plugin **VAR_5)
{
 int VAR_6;
 struct snd_pcm_plugin *VAR_7;
 int VAR_8;

 if (FUNC_0(!VAR_5))
  return -VAR_0;
 *VAR_5 = ((void*)0);

 if (FUNC_0(VAR_3->format != VAR_4->format))
  return -VAR_0;
 if (FUNC_0(VAR_3->rate != VAR_4->rate))
  return -VAR_0;
 if (FUNC_0(VAR_3->channels != VAR_4->channels))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3->format);
 if (FUNC_0(VAR_8 <= 0))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, "copy", VAR_3, VAR_4,
       0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->transfer = VAR_1;
 *VAR_5 = VAR_7;
 return 0;
}
