
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lexline; char lookahead; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static js_Ast *FUNC_2(js_State *VAR_1)
{
 int VAR_2 = VAR_1->lexline;
 if (VAR_1->lookahead == ',')
  return FUNC_0(VAR_0);
 return FUNC_1(VAR_1, 0);
}
