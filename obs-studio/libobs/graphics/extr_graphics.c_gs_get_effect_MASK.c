
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gs_effect_t ;
struct TYPE_2__ {int * cur_effect; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;

gs_effect_t *FUNC_1(void)
{
 if (!FUNC_0("gs_get_effect"))
  return ((void*)0);

 return VAR_0 ? VAR_0->cur_effect : ((void*)0);
}
