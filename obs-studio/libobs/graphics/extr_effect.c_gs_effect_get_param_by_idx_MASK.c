
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_effect_param {int dummy; } ;
typedef struct gs_effect_param gs_eparam_t ;
struct TYPE_4__ {size_t num; struct gs_effect_param* array; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ gs_effect_t ;



gs_eparam_t *FUNC_0(const gs_effect_t *VAR_0, size_t VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 struct gs_effect_param *VAR_2 = VAR_0->params.array;
 if (VAR_1 >= VAR_0->params.num)
  return ((void*)0);

 return VAR_2 + VAR_1;
}
