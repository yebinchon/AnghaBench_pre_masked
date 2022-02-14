
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio {TYPE_1__* chip; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {int clk; int rst; int num_wup_aios; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uniphier_aio* FUNC_2 (struct snd_soc_dai*) ;

int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct uniphier_aio *VAR_1 = FUNC_2(VAR_0);

 VAR_1->chip->num_wup_aios--;
 if (!VAR_1->chip->num_wup_aios) {
  FUNC_1(VAR_1->chip->rst);
  FUNC_0(VAR_1->chip->clk);
 }

 return 0;
}
