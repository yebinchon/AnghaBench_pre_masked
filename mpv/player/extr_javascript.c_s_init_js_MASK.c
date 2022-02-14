
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct script_ctx*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(js_State *VAR_2, struct script_ctx *VAR_3)
{
    if (FUNC_5(VAR_2))
        return 1;
    FUNC_3(VAR_2, VAR_3);
    FUNC_4(VAR_2, VAR_0);
    FUNC_1(VAR_2, VAR_1, "run_script", 0);
    FUNC_2(VAR_2);
    FUNC_0(VAR_2);
    return 0;
}
