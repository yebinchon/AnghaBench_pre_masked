
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
          struct snd_pcm_hw_params *VAR_5,
          struct snd_soc_dai *VAR_6)
{
 struct mtk_base_afe *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = VAR_4->stream;


 if (VAR_8 == VAR_3)
  FUNC_1(VAR_7->regmap,
       VAR_0,
       VAR_1,
       VAR_2);

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
