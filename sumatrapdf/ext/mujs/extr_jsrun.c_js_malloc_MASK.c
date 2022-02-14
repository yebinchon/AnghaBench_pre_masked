
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int actx; void* (* alloc ) (int ,int *,int) ;} ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,int *,int) ;

void *FUNC_2(js_State *VAR_0, int VAR_1)
{
 void *VAR_2 = VAR_0->alloc(VAR_0->actx, ((void*)0), VAR_1);
 if (!VAR_2)
  FUNC_0(VAR_0);
 return VAR_2;
}
