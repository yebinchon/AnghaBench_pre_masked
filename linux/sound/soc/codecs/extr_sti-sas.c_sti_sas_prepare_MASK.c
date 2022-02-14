
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mclk; } ;
struct TYPE_4__ {int mclk; } ;
struct sti_sas_data {TYPE_1__ dac; TYPE_2__ spdif; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 struct sti_sas_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct sti_sas_data *VAR_4 = FUNC_1(VAR_3->dev);
 struct snd_pcm_runtime *VAR_5 = VAR_1->runtime;

 switch (VAR_2->id) {
 case 128:
  if ((VAR_4->spdif.mclk / VAR_5->rate) != 128) {
   FUNC_0(VAR_3->dev, "unexpected mclk-fs ratio\n");
   return -VAR_0;
  }
  break;
 case 129:
  if ((VAR_4->dac.mclk / VAR_5->rate) != 256) {
   FUNC_0(VAR_3->dev, "unexpected mclk-fs ratio\n");
   return -VAR_0;
  }
  break;
 }

 return 0;
}
