
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {size_t num; TYPE_1__* cpu_dai; int card; } ;
struct axg_dai_link_tdm_data {int slot_width; int slots; int tx_mask; } ;
struct axg_card {scalar_t__* link_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct axg_card* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_0)
{
 struct axg_card *VAR_1 = FUNC_2(VAR_0->card);
 struct axg_dai_link_tdm_data *VAR_2 =
  (struct axg_dai_link_tdm_data *)VAR_1->link_data[VAR_0->num];
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0->cpu_dai, ((void*)0), VAR_2->tx_mask,
        VAR_2->slots, VAR_2->slot_width);
 if (VAR_3) {
  FUNC_1(VAR_0->cpu_dai->dev, "setting tdm link slots failed\n");
  return VAR_3;
 }

 return 0;
}
