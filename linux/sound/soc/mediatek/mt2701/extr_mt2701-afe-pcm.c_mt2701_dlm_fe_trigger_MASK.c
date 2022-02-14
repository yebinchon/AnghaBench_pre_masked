
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_afe_memif {TYPE_1__* data; } ;
struct mtk_base_afe {int regmap; struct mtk_base_afe_memif* memif; } ;
struct TYPE_2__ {int enable_shift; int enable_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;




 int FUNC_0 (struct snd_pcm_substream*,int,struct snd_soc_dai*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
     int VAR_3, struct snd_soc_dai *VAR_4)
{
 struct mtk_base_afe *VAR_5 = FUNC_2(VAR_4);
 struct mtk_base_afe_memif *VAR_6 = &VAR_5->memif[VAR_1];

 switch (VAR_3) {
 case 130:
 case 131:
  FUNC_1(VAR_5->regmap, VAR_6->data->enable_reg,
       1 << VAR_6->data->enable_shift,
       1 << VAR_6->data->enable_shift);
  FUNC_0(VAR_2, VAR_3, VAR_4);
  return 0;
 case 129:
 case 128:
  FUNC_0(VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_5->regmap, VAR_6->data->enable_reg,
       1 << VAR_6->data->enable_shift, 0);

  return 0;
 default:
  return -VAR_0;
 }
}
