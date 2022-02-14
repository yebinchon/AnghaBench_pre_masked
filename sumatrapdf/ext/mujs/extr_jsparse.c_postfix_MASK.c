
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; int newline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static js_Ast *FUNC_3(js_State *VAR_4)
{
 js_Ast *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = VAR_4->lexline;
 if (!VAR_4->newline && FUNC_2(VAR_4, VAR_3)) return FUNC_0(VAR_1, VAR_5);
 if (!VAR_4->newline && FUNC_2(VAR_4, VAR_2)) return FUNC_0(VAR_0, VAR_5);
 return VAR_5;
}
