
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int G; scalar_t__ strict; TYPE_3__* E; } ;
typedef TYPE_1__ js_State ;
struct TYPE_11__ {int atts; } ;
typedef TYPE_2__ js_Property ;
struct TYPE_12__ {struct TYPE_12__* outer; int variables; } ;
typedef TYPE_3__ js_Environment ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int ,char const*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,char const*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;

__attribute__((used)) static int FUNC_4(js_State *VAR_1, const char *VAR_2)
{
 js_Environment *VAR_3 = VAR_1->E;
 do {
  js_Property *VAR_4 = FUNC_2(VAR_1, VAR_3->variables, VAR_2);
  if (VAR_4) {
   if (VAR_4->atts & VAR_0) {
    if (VAR_1->strict)
     FUNC_3(VAR_1, "'%s' is non-configurable", VAR_2);
    return 0;
   }
   FUNC_1(VAR_1, VAR_3->variables, VAR_2);
   return 1;
  }
  VAR_3 = VAR_3->outer;
 } while (VAR_3);
 return FUNC_0(VAR_1, VAR_1->G, VAR_2);
}
