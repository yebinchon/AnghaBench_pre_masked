
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_dai* FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_dai*) ;
 int FUNC_4 (struct rsnd_dai_stream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct rsnd_dai_stream*,struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_6 (struct rsnd_dai_stream*) ;

int FUNC_7(struct rsnd_dai_stream *VAR_0,
          struct snd_pcm_hw_params *VAR_1)
{
 struct rsnd_dai *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_1(VAR_0) ?
  FUNC_4(VAR_0, VAR_1) :
  FUNC_5(VAR_0, VAR_1);


 if (FUNC_6(VAR_0))
  VAR_3 /= FUNC_3(VAR_2);

 return FUNC_0(VAR_3);
}
