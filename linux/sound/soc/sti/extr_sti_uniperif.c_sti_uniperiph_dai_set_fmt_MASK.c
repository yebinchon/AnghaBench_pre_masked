
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* uni; } ;
struct sti_uniperiph_data {TYPE_2__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_3__ {unsigned int daifmt; } ;


 struct sti_uniperiph_data* FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 struct sti_uniperiph_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->dai_data.uni->daifmt = VAR_1;

 return 0;
}
