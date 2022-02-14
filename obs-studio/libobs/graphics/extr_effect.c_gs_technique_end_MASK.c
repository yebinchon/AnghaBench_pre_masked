
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gs_effect_param {int changed; int * next_sampler; int cur_val; } ;
struct TYPE_6__ {size_t num; struct gs_effect_param* array; } ;
struct gs_effect {TYPE_2__ params; TYPE_1__* graphics; int * cur_technique; } ;
struct TYPE_7__ {struct gs_effect* effect; } ;
typedef TYPE_3__ gs_technique_t ;
struct TYPE_5__ {int * cur_effect; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(gs_technique_t *VAR_0)
{
 if (!VAR_0)
  return;

 struct gs_effect *VAR_1 = VAR_0->effect;
 struct gs_effect_param *VAR_2 = VAR_1->params.array;
 size_t VAR_3;

 FUNC_2(((void*)0));
 FUNC_1(((void*)0));

 VAR_0->effect->cur_technique = ((void*)0);
 VAR_0->effect->graphics->cur_effect = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->params.num; VAR_3++) {
  struct gs_effect_param *VAR_4 = VAR_2 + VAR_3;

  FUNC_0(VAR_4->cur_val);
  VAR_4->changed = 0;
  if (VAR_4->next_sampler)
   VAR_4->next_sampler = ((void*)0);
 }
}
