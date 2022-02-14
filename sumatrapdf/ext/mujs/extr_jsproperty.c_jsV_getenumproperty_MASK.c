
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_6__ {int atts; } ;
typedef TYPE_1__ js_Property ;
struct TYPE_7__ {struct TYPE_7__* prototype; int properties; } ;
typedef TYPE_2__ js_Object ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;

__attribute__((used)) static js_Property *FUNC_1(js_State *VAR_1, js_Object *VAR_2, const char *VAR_3)
{
 do {
  js_Property *VAR_4 = FUNC_0(VAR_2->properties, VAR_3);
  if (VAR_4 && !(VAR_4->atts & VAR_0))
   return VAR_4;
  VAR_2 = VAR_2->prototype;
 } while (VAR_2);
 return ((void*)0);
}
