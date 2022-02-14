
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct gs_effect_param* array; } ;
struct gs_effect_param {TYPE_1__ annotations; } ;
typedef struct gs_effect_param gs_eparam_t ;



gs_eparam_t *FUNC_0(const gs_eparam_t *VAR_0,
         size_t VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 struct gs_effect_param *VAR_2 = VAR_0->annotations.array;
 if (VAR_1 > VAR_0->annotations.num)
  return ((void*)0);

 return VAR_2 + VAR_1;
}
