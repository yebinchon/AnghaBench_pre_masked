
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_memif_data {int agent_disable_shift; int agent_disable_reg; } ;
struct mtk_base_afe {int regmap; TYPE_1__* memif; } ;
struct TYPE_2__ {struct mtk_base_memif_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void FUNC_0 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct mtk_base_afe *VAR_4 = FUNC_2(VAR_3);
 const struct mtk_base_memif_data *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5 = VAR_4->memif[VAR_6].data;
  FUNC_1(VAR_4->regmap,
       VAR_5->agent_disable_reg,
       1 << VAR_5->agent_disable_shift,
       1 << VAR_5->agent_disable_shift);
 }

 return FUNC_0(VAR_2, VAR_3);
}
