
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,struct rsnd_dai_stream*,int *) ;
 struct rsnd_dai* FUNC_1 (struct snd_soc_dai*) ;
 struct rsnd_dai_stream* FUNC_2 (struct rsnd_dai*,struct snd_pcm_substream*) ;
 struct snd_soc_dai* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_dai *VAR_1 = FUNC_3(VAR_0);
 struct rsnd_dai *VAR_2 = FUNC_1(VAR_1);
 struct rsnd_dai_stream *VAR_3 = FUNC_2(VAR_2, VAR_0);
 snd_pcm_uframes_t VAR_4 = 0;

 FUNC_0(VAR_4, VAR_3, &VAR_4);

 return VAR_4;
}
