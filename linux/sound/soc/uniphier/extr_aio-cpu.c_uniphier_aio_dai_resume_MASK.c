
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int setting; int substream; int spec; } ;
struct uniphier_aio {TYPE_1__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_3__ {int clk; int num_wup_aios; int rst; int active; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct uniphier_aio_sub*) ;
 int FUNC_4 (struct uniphier_aio_sub*) ;
 int FUNC_5 (struct uniphier_aio_sub*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct uniphier_aio* FUNC_10 (struct snd_soc_dai*) ;

int FUNC_11(struct snd_soc_dai *VAR_0)
{
 struct uniphier_aio *VAR_1 = FUNC_10(VAR_0);
 int VAR_2, VAR_3;

 if (!VAR_1->chip->active)
  return 0;

 if (!VAR_1->chip->num_wup_aios) {
  VAR_2 = FUNC_7(VAR_1->chip->clk);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_9(VAR_1->chip->rst);
  if (VAR_2)
   goto err_out_clock;
 }

 FUNC_2(VAR_1->chip, 1);
 FUNC_1(VAR_1->chip);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->sub); VAR_3++) {
  struct uniphier_aio_sub *VAR_4 = &VAR_1->sub[VAR_3];

  if (!VAR_4->spec || !VAR_4->substream)
   continue;

  VAR_2 = FUNC_3(VAR_4);
  if (VAR_2)
   goto err_out_reset;

  if (!VAR_4->setting)
   continue;

  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
 }
 VAR_1->chip->num_wup_aios++;

 return 0;

err_out_reset:
 if (!VAR_1->chip->num_wup_aios)
  FUNC_8(VAR_1->chip->rst);
err_out_clock:
 if (!VAR_1->chip->num_wup_aios)
  FUNC_6(VAR_1->chip->clk);

 return VAR_2;
}
