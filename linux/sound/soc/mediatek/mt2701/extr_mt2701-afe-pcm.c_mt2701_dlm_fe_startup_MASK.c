
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_memif_data {int agent_disable_shift; int agent_disable_reg; } ;
struct mtk_base_afe_memif {struct mtk_base_memif_data* data; scalar_t__ substream; } ;
struct mtk_base_afe {int regmap; struct mtk_base_afe_memif* memif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct mtk_base_afe *VAR_5 = FUNC_2(VAR_4);
 struct mtk_base_afe_memif *VAR_6;
 const struct mtk_base_memif_data *VAR_7;
 int VAR_8;

 for (VAR_8 = VAR_1; VAR_8 < VAR_2; ++VAR_8) {
  VAR_6 = &VAR_5->memif[VAR_8];
  if (VAR_6->substream)
   return -VAR_0;
 }


 for (VAR_8 = VAR_1; VAR_8 < VAR_2; ++VAR_8) {
  VAR_7 = VAR_5->memif[VAR_8].data;
  FUNC_1(VAR_5->regmap,
       VAR_7->agent_disable_reg,
       1 << VAR_7->agent_disable_shift,
       0 << VAR_7->agent_disable_shift);
 }

 return FUNC_0(VAR_3, VAR_4);
}
