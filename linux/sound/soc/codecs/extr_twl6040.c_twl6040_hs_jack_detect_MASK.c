
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_jack_data {int report; struct snd_soc_jack* jack; } ;
struct twl6040_data {struct twl6040_jack_data hs_jack; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,struct snd_soc_jack*,int) ;

void FUNC_2(struct snd_soc_component *VAR_0,
    struct snd_soc_jack *VAR_1, int VAR_2)
{
 struct twl6040_data *VAR_3 = FUNC_0(VAR_0);
 struct twl6040_jack_data *VAR_4 = &VAR_3->hs_jack;

 VAR_4->jack = VAR_1;
 VAR_4->report = VAR_2;

 FUNC_1(VAR_0, VAR_4->jack, VAR_4->report);
}
