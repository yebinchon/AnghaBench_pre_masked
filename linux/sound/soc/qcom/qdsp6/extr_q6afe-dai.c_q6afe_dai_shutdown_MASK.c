
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct q6afe_dai_data {int* is_port_started; int * port; } ;


 int FUNC_0 (int ,char*,int) ;
 struct q6afe_dai_data* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct q6afe_dai_data *VAR_2 = FUNC_1(VAR_1->dev);
 int VAR_3;

 if (!VAR_2->is_port_started[VAR_1->id])
  return;

 VAR_3 = FUNC_2(VAR_2->port[VAR_1->id]);
 if (VAR_3 < 0)
  FUNC_0(VAR_1->dev, "fail to close AFE port (%d)\n", VAR_3);

 VAR_2->is_port_started[VAR_1->id] = 0;

}
