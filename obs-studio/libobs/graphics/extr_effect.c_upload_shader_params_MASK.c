
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pass_shaderparam {int * sparam; struct gs_effect_param* eparam; } ;
struct TYPE_3__ {int num; int array; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct gs_effect_param {TYPE_1__ cur_val; TYPE_2__ default_val; int changed; scalar_t__ next_sampler; } ;
struct darray {size_t num; struct pass_shaderparam* array; } ;
typedef int gs_sparam_t ;


 int FUNC_0 (TYPE_1__,TYPE_2__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct darray *VAR_0, bool VAR_1)
{
 struct pass_shaderparam *VAR_2 = VAR_0->array;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num; VAR_3++) {
  struct pass_shaderparam *VAR_4 = VAR_2 + VAR_3;
  struct gs_effect_param *VAR_5 = VAR_4->eparam;
  gs_sparam_t *VAR_6 = VAR_4->sparam;

  if (VAR_5->next_sampler)
   FUNC_1(VAR_6,
         VAR_5->next_sampler);

  if (VAR_1 && !VAR_5->changed)
   continue;

  if (!VAR_5->cur_val.num) {
   if (VAR_5->default_val.num)
    FUNC_0(VAR_5->cur_val, VAR_5->default_val);
   else
    continue;
  }

  FUNC_2(VAR_6, VAR_5->cur_val.array,
      VAR_5->cur_val.num);
 }
}
