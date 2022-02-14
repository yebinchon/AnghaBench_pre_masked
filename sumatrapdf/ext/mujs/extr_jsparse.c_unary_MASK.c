
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lexline; } ;
typedef TYPE_1__ js_State ;
typedef int js_Ast ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (TYPE_1__*,char) ;
 int * FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static js_Ast *FUNC_5(js_State *VAR_14)
{
 js_Ast *VAR_15;
 int VAR_16 = VAR_14->lexline;
 FUNC_2();
 if (FUNC_3(VAR_14, VAR_8)) VAR_15 = FUNC_1(VAR_1, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, VAR_11)) VAR_15 = FUNC_1(VAR_13, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, VAR_10)) VAR_15 = FUNC_1(VAR_12, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, VAR_9)) VAR_15 = FUNC_1(VAR_6, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, VAR_7)) VAR_15 = FUNC_1(VAR_5, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, '+')) VAR_15 = FUNC_1(VAR_4, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, '-')) VAR_15 = FUNC_1(VAR_3, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, '~')) VAR_15 = FUNC_1(VAR_0, FUNC_5(VAR_14));
 else if (FUNC_3(VAR_14, '!')) VAR_15 = FUNC_1(VAR_2, FUNC_5(VAR_14));
 else VAR_15 = FUNC_4(VAR_14);
 FUNC_0();
 return VAR_15;
}
