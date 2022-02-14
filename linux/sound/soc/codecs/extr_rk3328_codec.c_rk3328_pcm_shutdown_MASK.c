
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct rk3328_codec_priv {int dummy; } ;


 int FUNC_0 (struct rk3328_codec_priv*) ;
 struct rk3328_codec_priv* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct rk3328_codec_priv *VAR_2 =
  FUNC_1(VAR_1->component);

 FUNC_0(VAR_2);
}
