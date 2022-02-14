
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* E; } ;
typedef TYPE_1__ js_State ;
struct TYPE_11__ {int value; scalar_t__ getter; } ;
typedef TYPE_2__ js_Property ;
struct TYPE_12__ {struct TYPE_12__* outer; scalar_t__ variables; } ;
typedef TYPE_3__ js_Environment ;


 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(js_State *VAR_0, const char *VAR_1)
{
 js_Environment *VAR_2 = VAR_0->E;
 do {
  js_Property *VAR_3 = FUNC_0(VAR_0, VAR_2->variables, VAR_1);
  if (VAR_3) {
   if (VAR_3->getter) {
    FUNC_2(VAR_0, VAR_3->getter);
    FUNC_2(VAR_0, VAR_2->variables);
    FUNC_1(VAR_0, 0);
   } else {
    FUNC_3(VAR_0, VAR_3->value);
   }
   return 1;
  }
  VAR_2 = VAR_2->outer;
 } while (VAR_2);
 return 0;
}
