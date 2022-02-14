
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {unsigned int chan_width; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_dai* FUNC_3 (struct rsnd_dai_stream*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_1,
         struct rsnd_dai_stream *VAR_2,
         struct snd_pcm_substream *VAR_3,
         struct snd_pcm_hw_params *VAR_4)
{
 struct rsnd_dai *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6 = FUNC_5(FUNC_1(VAR_4));

 if (VAR_6 > VAR_5->chan_width) {
  struct rsnd_priv *VAR_7 = FUNC_2(VAR_2);
  struct device *VAR_8 = FUNC_4(VAR_7);

  FUNC_0(VAR_8, "invalid combination of slot-width and format-data-width\n");
  return -VAR_0;
 }

 return 0;
}
