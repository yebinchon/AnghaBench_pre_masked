
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct script_ctx*,int,char*) ;

__attribute__((used)) static void FUNC_6(struct script_ctx *VAR_0, js_State *VAR_1)
{
    FUNC_5(VAR_0, 1, "unknown error");
    if (FUNC_4(VAR_1))
        return;
    if (FUNC_2(VAR_1, -1))
        FUNC_1(VAR_1, -1, "stack");
    FUNC_5(VAR_0, 1, FUNC_3(VAR_1, -1));
    FUNC_0(VAR_1);
}
