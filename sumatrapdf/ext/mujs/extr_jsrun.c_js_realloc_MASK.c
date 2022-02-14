
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int actx; void* (* alloc ) (int ,void*,int) ;} ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,void*,int) ;

void *FUNC_2(js_State *VAR_0, void *VAR_1, int VAR_2)
{
 VAR_1 = VAR_0->alloc(VAR_0->actx, VAR_1, VAR_2);
 if (!VAR_1)
  FUNC_0(VAR_0);
 return VAR_1;
}
