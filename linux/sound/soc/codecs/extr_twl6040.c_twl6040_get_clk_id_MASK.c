
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int pll_power_mode; } ;
struct snd_soc_component {int dummy; } ;


 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;

int FUNC_1(struct snd_soc_component *VAR_0)
{
 struct twl6040_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pll_power_mode;
}
