
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ fz_css_selector ;
struct TYPE_9__ {TYPE_3__* declaration; TYPE_1__* selector; } ;
typedef TYPE_2__ fz_css_rule ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_3__ fz_css_property ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(fz_css_rule *VAR_0)
{
 fz_css_selector *VAR_1;
 fz_css_property *VAR_2;

 for (VAR_1 = VAR_0->selector; VAR_1; VAR_1 = VAR_1->next)
 {
  FUNC_1(VAR_1);
  FUNC_2(" /* %d */", FUNC_3(VAR_1, 0));
  if (VAR_1->next)
   FUNC_2(", ");
 }

 FUNC_2("\n{\n");
 for (VAR_2 = VAR_0->declaration; VAR_2; VAR_2 = VAR_2->next)
 {
  FUNC_0(VAR_2);
 }
 FUNC_2("}\n");
}
