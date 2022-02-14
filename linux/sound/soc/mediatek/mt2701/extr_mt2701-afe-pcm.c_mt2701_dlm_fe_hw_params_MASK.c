
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct mtk_base_afe* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct mtk_base_afe *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = FUNC_2(VAR_7);

 FUNC_3(VAR_9->regmap,
      VAR_0,
      VAR_4,
      VAR_5);
 FUNC_3(VAR_9->regmap,
      VAR_0,
      VAR_2,
      VAR_1);
 FUNC_3(VAR_9->regmap,
      VAR_0,
      VAR_3,
      FUNC_0(VAR_10));

 return FUNC_1(VAR_6, VAR_7, VAR_8);
}
