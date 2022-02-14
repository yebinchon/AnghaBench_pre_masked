
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_runtime {int format; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_3 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_4 (struct rsnd_dai_stream*) ;
 int FUNC_5 (int ) ;

u32 FUNC_6(struct rsnd_mod *VAR_0, struct rsnd_dai_stream *VAR_1)
{
 struct rsnd_mod *VAR_2 = FUNC_3(VAR_1);
 struct rsnd_mod *VAR_3;
 struct snd_pcm_runtime *VAR_4 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_1)) {
  struct rsnd_mod *VAR_5 = FUNC_2(VAR_1);

  VAR_3 = VAR_5 ? VAR_5 : VAR_2;
 } else {
  struct rsnd_mod *VAR_6 = FUNC_1(VAR_1);

  VAR_3 = VAR_6 ? VAR_6 : VAR_2;
 }


 if ((FUNC_5(VAR_4->format) != 16) ||
     (VAR_0 != VAR_3))
  return 0x76543210;

 else
  return 0x67452301;
}
