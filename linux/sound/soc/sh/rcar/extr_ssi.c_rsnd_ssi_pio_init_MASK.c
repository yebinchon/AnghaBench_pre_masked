
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int period_size; int channels; } ;
struct rsnd_ssi {int byte_per_period; int next_period_byte; scalar_t__ byte_pos; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 struct snd_pcm_runtime* FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_1 (struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*,struct rsnd_priv*) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int) ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_0,
        struct rsnd_dai_stream *VAR_1,
        struct rsnd_priv *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = FUNC_0(VAR_1);
 struct rsnd_ssi *VAR_4 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0, VAR_1)) {
  VAR_4->byte_pos = 0;
  VAR_4->byte_per_period = VAR_3->period_size *
       VAR_3->channels *
       FUNC_4(VAR_3, 1);
  VAR_4->next_period_byte = VAR_4->byte_per_period;
 }

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
