
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
typedef int js_Property ;
struct TYPE_3__ {struct TYPE_3__* prototype; int properties; } ;
typedef TYPE_1__ js_Object ;


 int * FUNC_0 (int ,char const*) ;

js_Property *FUNC_1(js_State *VAR_0, js_Object *VAR_1, const char *VAR_2)
{
 do {
  js_Property *VAR_3 = FUNC_0(VAR_1->properties, VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_1 = VAR_1->prototype;
 } while (VAR_1);
 return ((void*)0);
}
