
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int vol; struct uniphier_aio_spec const* spec; int * swm; } ;
struct uniphier_aio_spec {int swm; } ;
struct uniphier_aio {TYPE_1__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_dai {int name; } ;
struct TYPE_3__ {int active; } ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 struct uniphier_aio_spec* FUNC_3 (struct uniphier_aio*,int ,int) ;
 struct uniphier_aio* FUNC_4 (struct snd_soc_dai*) ;

int FUNC_5(struct snd_soc_dai *VAR_1)
{
 struct uniphier_aio *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->sub); VAR_3++) {
  struct uniphier_aio_sub *VAR_4 = &VAR_2->sub[VAR_3];
  const struct uniphier_aio_spec *VAR_5;

  VAR_5 = FUNC_3(VAR_2, VAR_1->name, VAR_3);
  if (!VAR_5)
   continue;

  VAR_4->swm = &VAR_5->swm;
  VAR_4->spec = VAR_5;

  VAR_4->vol = VAR_0;
 }

 FUNC_2(VAR_2->chip, 1);
 FUNC_1(VAR_2->chip);
 VAR_2->chip->active = 1;

 return 0;
}
