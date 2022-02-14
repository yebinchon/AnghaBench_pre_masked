
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio {TYPE_1__* chip; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {scalar_t__ active; } ;


 struct uniphier_aio* FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct uniphier_aio *VAR_1 = FUNC_0(VAR_0);

 VAR_1->chip->active = 0;

 return 0;
}
