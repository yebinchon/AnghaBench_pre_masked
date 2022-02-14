
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int * FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_10(js_State *VAR_3)
{
 js_Ast *VAR_4 = FUNC_9(VAR_3);
 int VAR_5;
 FUNC_3();
loop:
 FUNC_1();
 VAR_5 = VAR_3->lexline;
 if (FUNC_7(VAR_3, '.')) { VAR_4 = FUNC_0(VAR_2, VAR_4, FUNC_6(VAR_3)); goto loop; }
 if (FUNC_7(VAR_3, '[')) { VAR_4 = FUNC_0(VAR_1, VAR_4, FUNC_5(VAR_3, 0)); FUNC_8(VAR_3, ']'); goto loop; }
 if (FUNC_7(VAR_3, '(')) { VAR_4 = FUNC_0(VAR_0, VAR_4, FUNC_4(VAR_3)); FUNC_8(VAR_3, ')'); goto loop; }
 FUNC_2();
 return VAR_4;
}
