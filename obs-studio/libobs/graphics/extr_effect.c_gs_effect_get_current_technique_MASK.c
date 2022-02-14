
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_technique_t ;
struct TYPE_3__ {int * cur_technique; } ;
typedef TYPE_1__ gs_effect_t ;



gs_technique_t *FUNC_0(const gs_effect_t *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->cur_technique;
}
