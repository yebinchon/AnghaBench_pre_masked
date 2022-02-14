
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_StringNode ;
struct TYPE_3__ {int * strings; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(js_State *VAR_1)
{
 js_StringNode *VAR_2 = VAR_1->strings;
 FUNC_1("interned strings {\n");
 if (VAR_2 && VAR_2 != &VAR_0)
  FUNC_0(VAR_2, 1);
 FUNC_1("}\n");
}
