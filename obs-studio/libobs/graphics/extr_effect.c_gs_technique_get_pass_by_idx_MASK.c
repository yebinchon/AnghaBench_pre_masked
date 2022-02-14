
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_effect_pass {int dummy; } ;
struct TYPE_4__ {size_t num; struct gs_effect_pass* array; } ;
struct TYPE_5__ {TYPE_1__ passes; } ;
typedef TYPE_2__ gs_technique_t ;
typedef struct gs_effect_pass gs_epass_t ;



gs_epass_t *FUNC_0(const gs_technique_t *VAR_0,
      size_t VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 struct gs_effect_pass *VAR_2 = VAR_0->passes.array;

 if (VAR_1 > VAR_0->passes.num)
  return ((void*)0);

 return VAR_2 + VAR_1;
}
