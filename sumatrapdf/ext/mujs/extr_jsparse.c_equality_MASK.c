
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
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static js_Ast *FUNC_6(js_State *VAR_8, int VAR_9)
{
 js_Ast *VAR_10 = FUNC_5(VAR_8, VAR_9);
 int VAR_11;
 FUNC_3();
loop:
 FUNC_1();
 VAR_11 = VAR_8->lexline;
 if (FUNC_4(VAR_8, VAR_4)) { VAR_10 = FUNC_0(VAR_0, VAR_10, FUNC_5(VAR_8, VAR_9)); goto loop; }
 if (FUNC_4(VAR_8, VAR_5)) { VAR_10 = FUNC_0(VAR_1, VAR_10, FUNC_5(VAR_8, VAR_9)); goto loop; }
 if (FUNC_4(VAR_8, VAR_6)) { VAR_10 = FUNC_0(VAR_2, VAR_10, FUNC_5(VAR_8, VAR_9)); goto loop; }
 if (FUNC_4(VAR_8, VAR_7)) { VAR_10 = FUNC_0(VAR_3, VAR_10, FUNC_5(VAR_8, VAR_9)); goto loop; }
 FUNC_2();
 return VAR_10;
}
