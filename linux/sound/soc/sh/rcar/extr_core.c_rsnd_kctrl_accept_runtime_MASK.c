
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct rsnd_priv* FUNC_1 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_2 (struct rsnd_dai_stream*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;

int FUNC_4(struct rsnd_dai_stream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = FUNC_2(VAR_0);
 struct rsnd_priv *VAR_2 = FUNC_1(VAR_0);
 struct device *VAR_3 = FUNC_3(VAR_2);

 if (!VAR_1) {
  FUNC_0(VAR_3, "Can't update kctrl when idle\n");
  return 0;
 }

 return 1;
}
