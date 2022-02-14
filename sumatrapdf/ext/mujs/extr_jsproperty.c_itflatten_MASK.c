
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {struct TYPE_4__* prototype; int * properties; } ;
typedef TYPE_1__ js_Object ;
typedef int js_Iterator ;


 int * FUNC_0 (int *,int *,int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static js_Iterator *FUNC_1(js_State *VAR_1, js_Object *VAR_2)
{
 js_Iterator *VAR_3 = ((void*)0);
 if (VAR_2->prototype)
  VAR_3 = FUNC_1(VAR_1, VAR_2->prototype);
 if (VAR_2->properties != &VAR_0)
  VAR_3 = FUNC_0(VAR_1, VAR_3, VAR_2->properties, VAR_2->prototype);
 return VAR_3;
}
