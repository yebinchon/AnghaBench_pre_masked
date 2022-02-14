
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {size_t pll_power_mode; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct twl6040_data* FUNC_1 (struct snd_soc_component*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
   struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct twl6040_data *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_2->runtime, 0,
    VAR_0,
    &VAR_1[VAR_5->pll_power_mode]);

 return 0;
}
