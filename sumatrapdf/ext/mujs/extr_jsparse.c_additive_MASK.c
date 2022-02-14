
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int * FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_6(js_State *VAR_2)
{
 js_Ast *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;
 FUNC_3();
loop:
 FUNC_1();
 VAR_4 = VAR_2->lexline;
 if (FUNC_4(VAR_2, '+')) { VAR_3 = FUNC_0(VAR_0, VAR_3, FUNC_5(VAR_2)); goto loop; }
 if (FUNC_4(VAR_2, '-')) { VAR_3 = FUNC_0(VAR_1, VAR_3, FUNC_5(VAR_2)); goto loop; }
 FUNC_2();
 return VAR_3;
}
