
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct mtk_base_afe_memif {int irq_usage; int * substream; int const_irq; TYPE_2__* data; } ;
struct mtk_base_afe {int regmap; struct mtk_base_afe_memif* memif; } ;
struct TYPE_4__ {int agent_disable_shift; int agent_disable_reg; } ;
struct TYPE_3__ {size_t id; } ;


 int FUNC_0 (struct mtk_base_afe*,int) ;
 int FUNC_1 (int ,int ,int,int,int ) ;
 struct mtk_base_afe* FUNC_2 (struct snd_soc_dai*) ;

void FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct mtk_base_afe *VAR_3 = FUNC_2(VAR_1);
 struct mtk_base_afe_memif *VAR_4 = &VAR_3->memif[VAR_2->cpu_dai->id];
 int VAR_5;

 VAR_5 = VAR_4->irq_usage;

 FUNC_1(VAR_3->regmap, VAR_4->data->agent_disable_reg,
          1, 1, VAR_4->data->agent_disable_shift);

 if (!VAR_4->const_irq) {
  FUNC_0(VAR_3, VAR_5);
  VAR_4->irq_usage = -1;
  VAR_4->substream = ((void*)0);
 }
}
