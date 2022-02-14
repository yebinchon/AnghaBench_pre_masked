
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct rsnd_ssi {int byte_pos; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct snd_pcm_runtime* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_3 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_4(struct rsnd_mod *VAR_0,
       struct rsnd_dai_stream *VAR_1,
       snd_pcm_uframes_t *VAR_2)
{
 struct rsnd_ssi *VAR_3 = FUNC_3(VAR_0);
 struct snd_pcm_runtime *VAR_4 = FUNC_2(VAR_1);

 *VAR_2 = FUNC_1(VAR_4, FUNC_0(VAR_3->byte_pos));

 return 0;
}
