
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int mclk; } ;
struct TYPE_3__ {unsigned int mclk; } ;
struct sti_sas_data {TYPE_2__ dac; TYPE_1__ spdif; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct sti_sas_data* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, int VAR_3,
         unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct sti_sas_data *VAR_7 = FUNC_0(VAR_6->dev);

 if (VAR_5 == VAR_1)
  return 0;

 if (VAR_3 != 0)
  return -VAR_0;

 switch (VAR_2->id) {
 case 128:
  VAR_7->spdif.mclk = VAR_4;
  break;

 case 129:
  VAR_7->dac.mclk = VAR_4;
  break;
 }

 return 0;
}
