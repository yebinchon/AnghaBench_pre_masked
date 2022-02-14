
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num; } ;
struct TYPE_6__ {TYPE_1__ default_val; } ;
typedef TYPE_2__ gs_eparam_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_2__*,void*,size_t) ;

void *FUNC_3(gs_eparam_t *VAR_1)
{
 if (!VAR_1) {
  FUNC_0(VAR_0, "gs_effect_get_default_val: invalid param");
  return ((void*)0);
 }
 size_t VAR_2 = VAR_1->default_val.num;
 void *VAR_3;

 if (VAR_2)
  VAR_3 = (void *)FUNC_1(VAR_2);
 else
  return ((void*)0);

 FUNC_2(VAR_1, VAR_3, VAR_2);

 return VAR_3;
}
