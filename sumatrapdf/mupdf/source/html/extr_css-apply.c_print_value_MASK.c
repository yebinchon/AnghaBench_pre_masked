
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; struct TYPE_3__* next; struct TYPE_3__* args; } ;
typedef TYPE_1__ fz_css_value ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(fz_css_value *VAR_0)
{
 FUNC_0("%s", VAR_0->data);
 if (VAR_0->args)
 {
  FUNC_0("(");
  FUNC_1(VAR_0->args);
  FUNC_0(")");
 }
 if (VAR_0->next)
 {
  FUNC_0(" ");
  FUNC_1(VAR_0->next);
 }
}
