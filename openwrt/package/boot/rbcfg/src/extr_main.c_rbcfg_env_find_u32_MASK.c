
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ u32; } ;
struct rbcfg_value {TYPE_1__ val; } ;
struct rbcfg_env {unsigned int num_values; struct rbcfg_value* values; } ;



__attribute__((used)) static const struct rbcfg_value *
FUNC_0(const struct rbcfg_env *VAR_0, uint32_t VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_values; VAR_2++) {
  const struct rbcfg_value *VAR_3 = &VAR_0->values[VAR_2];

  if (VAR_3->val.u32 == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
