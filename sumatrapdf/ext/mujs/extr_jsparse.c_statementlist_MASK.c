
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char lookahead; } ;
typedef TYPE_1__ js_State ;
struct TYPE_9__ {struct TYPE_9__* b; } ;
typedef TYPE_2__ js_Ast ;


 void* FUNC_0 (int ) ;
 char VAR_0 ;
 char VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_3(js_State *VAR_2)
{
 js_Ast *VAR_3, *VAR_4;
 if (VAR_2->lookahead == '}' || VAR_2->lookahead == VAR_0 || VAR_2->lookahead == VAR_1)
  return ((void*)0);
 VAR_3 = VAR_4 = FUNC_0(FUNC_2(VAR_2));
 while (VAR_2->lookahead != '}' && VAR_2->lookahead != VAR_0 && VAR_2->lookahead != VAR_1)
  VAR_4 = VAR_4->b = FUNC_0(FUNC_2(VAR_2));
 return FUNC_1(VAR_3);
}
