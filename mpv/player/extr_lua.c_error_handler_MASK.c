
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (struct script_ctx*,char*,char const*) ;
 struct script_ctx* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);

    if (FUNC_2(VAR_0, "return debug.traceback('', 3)") == 0) {
        FUNC_3(VAR_0, 0, 1);
        const char *VAR_2 = FUNC_5(VAR_0, -1);
        FUNC_0(VAR_1, "%s\n", VAR_2 ? VAR_2 : "(unknown)");
    }
    FUNC_4(VAR_0, 1);

    return 1;
}
