
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {unsigned int rate; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_1 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_2 (struct rsnd_dai_stream*) ;
 unsigned int FUNC_3 (struct rsnd_dai_stream*,struct rsnd_mod*) ;

unsigned int FUNC_4(struct rsnd_priv *VAR_0,
          struct rsnd_dai_stream *VAR_1,
          int VAR_2)
{
 struct rsnd_mod *VAR_3 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = 0;
 int VAR_6 = FUNC_0(VAR_1);
 if (VAR_6 == VAR_2)
  return VAR_4->rate;





 if (VAR_3)
  VAR_5 = FUNC_3(VAR_1, VAR_3);

 if (!VAR_5)
  VAR_5 = VAR_4->rate;

 return VAR_5;
}
