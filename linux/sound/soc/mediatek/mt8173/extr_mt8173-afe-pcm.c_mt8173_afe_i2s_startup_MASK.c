
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ active; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct mtk_base_afe *VAR_5 = FUNC_1(VAR_4);

 if (VAR_4->active)
  return 0;

 FUNC_0(VAR_5->regmap, VAR_0,
      VAR_1 | VAR_2, 0);
 return 0;
}
