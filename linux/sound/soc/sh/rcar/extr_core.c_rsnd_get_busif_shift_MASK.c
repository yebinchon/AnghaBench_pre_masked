
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_runtime {int format; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*,int) ;
 struct snd_pcm_runtime* FUNC_3 (struct rsnd_dai_stream*) ;
 int FUNC_4 (int ) ;

u32 FUNC_5(struct rsnd_dai_stream *VAR_3, struct rsnd_mod *VAR_4)
{
 enum rsnd_mod_type VAR_5[] = {
  VAR_1,
  VAR_0,
  VAR_2,
 };
 enum rsnd_mod_type VAR_6[] = {
  VAR_0,
  VAR_1,
  VAR_2,
 };
 struct snd_pcm_runtime *VAR_7 = FUNC_3(VAR_3);
 struct rsnd_mod *VAR_8 = ((void*)0);
 enum rsnd_mod_type *VAR_9 =
  FUNC_1(VAR_3) ?
  VAR_5 : VAR_6;
 int VAR_10;
 if (FUNC_4(VAR_7->format) != 24)
  return 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
  VAR_8 = FUNC_2(VAR_3, VAR_9[VAR_10]);
  if (VAR_8)
   break;
 }

 if (VAR_8 != VAR_4)
  return 0;

 if (FUNC_1(VAR_3))
  return (0 << 20) |
   (8 << 16);
 else
  return (1 << 20) |
   (8 << 16);
}
