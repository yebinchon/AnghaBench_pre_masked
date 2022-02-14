
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int G; scalar_t__ strict; TYPE_3__* E; } ;
typedef TYPE_1__ js_State ;
struct TYPE_16__ {int atts; int value; scalar_t__ setter; } ;
typedef TYPE_2__ js_Property ;
struct TYPE_17__ {struct TYPE_17__* outer; scalar_t__ variables; } ;
typedef TYPE_3__ js_Environment ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char const*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,scalar_t__,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*,char const*) ;
 int FUNC_7 (TYPE_1__*,char*,char const*) ;
 int * FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_1, const char *VAR_2)
{
 js_Environment *VAR_3 = VAR_1->E;
 do {
  js_Property *VAR_4 = FUNC_1(VAR_1, VAR_3->variables, VAR_2);
  if (VAR_4) {
   if (VAR_4->setter) {
    FUNC_5(VAR_1, VAR_4->setter);
    FUNC_5(VAR_1, VAR_3->variables);
    FUNC_3(VAR_1, -3);
    FUNC_2(VAR_1, 1);
    FUNC_4(VAR_1, 1);
    return;
   }
   if (!(VAR_4->atts & VAR_0))
    VAR_4->value = *FUNC_8(VAR_1, -1);
   else if (VAR_1->strict)
    FUNC_7(VAR_1, "'%s' is read-only", VAR_2);
   return;
  }
  VAR_3 = VAR_3->outer;
 } while (VAR_3);
 if (VAR_1->strict)
  FUNC_6(VAR_1, "assignment to undeclared variable '%s'", VAR_2);
 FUNC_0(VAR_1, VAR_1->G, VAR_2);
}
