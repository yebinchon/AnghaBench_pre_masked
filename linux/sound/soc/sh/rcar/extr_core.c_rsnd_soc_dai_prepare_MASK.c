
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rsnd_dai_stream*,struct rsnd_priv*) ;
 struct rsnd_priv* FUNC_1 (struct snd_soc_dai*) ;
 struct rsnd_dai* FUNC_2 (struct snd_soc_dai*) ;
 struct rsnd_dai_stream* FUNC_3 (struct rsnd_dai*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct rsnd_priv *VAR_3 = FUNC_1(VAR_2);
 struct rsnd_dai *VAR_4 = FUNC_2(VAR_2);
 struct rsnd_dai_stream *VAR_5 = FUNC_3(VAR_4, VAR_1);

 return FUNC_0(VAR_0, VAR_5, VAR_3);
}
