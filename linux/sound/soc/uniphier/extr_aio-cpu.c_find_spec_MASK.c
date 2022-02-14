
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_spec {int dummy; } ;
struct uniphier_aio_chip_spec {int num_specs; struct uniphier_aio_spec* specs; } ;
struct uniphier_aio {TYPE_1__* chip; } ;
struct TYPE_2__ {struct uniphier_aio_chip_spec* chip_spec; } ;


 scalar_t__ FUNC_0 (struct uniphier_aio_spec const*,char const*,int) ;

__attribute__((used)) static const struct uniphier_aio_spec *FUNC_1(struct uniphier_aio *VAR_0,
       const char *VAR_1,
       int VAR_2)
{
 const struct uniphier_aio_chip_spec *VAR_3 = VAR_0->chip->chip_spec;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_specs; VAR_4++) {
  const struct uniphier_aio_spec *VAR_5 = &VAR_3->specs[VAR_4];

  if (FUNC_0(VAR_5, VAR_1, VAR_2))
   return VAR_5;
 }

 return ((void*)0);
}
