
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uniphier_aio_sub {TYPE_3__* swm; } ;
struct uniphier_aio_chip {int num_aios; TYPE_1__* aios; } ;
struct TYPE_5__ {int hw; } ;
struct TYPE_6__ {TYPE_2__ oport; } ;
struct TYPE_4__ {struct uniphier_aio_sub* sub; } ;



__attribute__((used)) static struct uniphier_aio_sub *FUNC_0(struct uniphier_aio_chip *VAR_0,
         int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_aios; VAR_2++) {
  struct uniphier_aio_sub *VAR_3 = &VAR_0->aios[VAR_2].sub[0];

  if (!VAR_3->swm)
   continue;

  if (VAR_3->swm->oport.hw == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
