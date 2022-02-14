
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lookahead; } ;
typedef TYPE_1__ js_State ;
struct TYPE_9__ {struct TYPE_9__* b; } ;
typedef TYPE_2__ js_Ast ;


 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_3(js_State *VAR_0, int VAR_1)
{
 js_Ast *VAR_2, *VAR_3;
 if (VAR_0->lookahead == VAR_1)
  return ((void*)0);
 VAR_2 = VAR_3 = FUNC_0(FUNC_2(VAR_0));
 while (VAR_0->lookahead != VAR_1)
  VAR_3 = VAR_3->b = FUNC_0(FUNC_2(VAR_0));
 return FUNC_1(VAR_2);
}
