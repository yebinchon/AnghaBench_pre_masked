
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int * FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;
 int * FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_6(js_State *VAR_10, int VAR_11)
{
 js_Ast *VAR_12 = FUNC_5(VAR_10);
 int VAR_13;
 FUNC_3();
loop:
 FUNC_1();
 VAR_13 = VAR_10->lexline;
 if (FUNC_4(VAR_10, '<')) { VAR_12 = FUNC_0(VAR_5, VAR_12, FUNC_5(VAR_10)); goto loop; }
 if (FUNC_4(VAR_10, '>')) { VAR_12 = FUNC_0(VAR_1, VAR_12, FUNC_5(VAR_10)); goto loop; }
 if (FUNC_4(VAR_10, VAR_9)) { VAR_12 = FUNC_0(VAR_4, VAR_12, FUNC_5(VAR_10)); goto loop; }
 if (FUNC_4(VAR_10, VAR_6)) { VAR_12 = FUNC_0(VAR_0, VAR_12, FUNC_5(VAR_10)); goto loop; }
 if (FUNC_4(VAR_10, VAR_8)) { VAR_12 = FUNC_0(VAR_3, VAR_12, FUNC_5(VAR_10)); goto loop; }
 if (!VAR_11 && FUNC_4(VAR_10, VAR_7)) { VAR_12 = FUNC_0(VAR_2, VAR_12, FUNC_5(VAR_10)); goto loop; }
 FUNC_2();
 return VAR_12;
}
