
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ strict; } ;
typedef TYPE_1__ js_State ;
typedef int js_Property ;
struct TYPE_9__ {int properties; int extensible; } ;
typedef TYPE_2__ js_Object ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int ,char const*,int **) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (int ,char const*) ;

js_Property *FUNC_3(js_State *VAR_0, js_Object *VAR_1, const char *VAR_2)
{
 js_Property *VAR_3;

 if (!VAR_1->extensible) {
  VAR_3 = FUNC_2(VAR_1->properties, VAR_2);
  if (VAR_0->strict && !VAR_3)
   FUNC_1(VAR_0, "object is non-extensible");
  return VAR_3;
 }

 VAR_1->properties = FUNC_0(VAR_0, VAR_1, VAR_1->properties, VAR_2, &VAR_3);

 return VAR_3;
}
