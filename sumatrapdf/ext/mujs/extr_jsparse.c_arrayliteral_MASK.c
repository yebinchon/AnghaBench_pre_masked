
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char lookahead; } ;
typedef TYPE_1__ js_State ;
struct TYPE_10__ {struct TYPE_10__* b; } ;
typedef TYPE_2__ js_Ast ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static js_Ast *FUNC_4(js_State *VAR_0)
{
 js_Ast *VAR_1, *VAR_2;
 if (VAR_0->lookahead == ']')
  return ((void*)0);
 VAR_1 = VAR_2 = FUNC_0(FUNC_1(VAR_0));
 while (FUNC_2(VAR_0, ',')) {
  if (VAR_0->lookahead != ']')
   VAR_2 = VAR_2->b = FUNC_0(FUNC_1(VAR_0));
 }
 return FUNC_3(VAR_1);
}
