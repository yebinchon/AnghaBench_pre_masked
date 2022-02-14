
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_runtime {int format; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct snd_pcm_runtime* FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_mod*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;
 int FUNC_4 (int ) ;

u32 FUNC_5(struct rsnd_mod *VAR_0, struct rsnd_dai_stream *VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_3 = FUNC_1(VAR_1);
 struct device *VAR_4 = FUNC_3(VAR_2);

 switch (FUNC_4(VAR_3->format)) {
 case 8:
  return 16 << 16;
 case 16:
  return 8 << 16;
 case 24:
  return 0 << 16;
 }

 FUNC_0(VAR_4, "not supported sample bits\n");

 return 0;
}
