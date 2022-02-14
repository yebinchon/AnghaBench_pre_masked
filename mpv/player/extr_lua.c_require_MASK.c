
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int lua_State ;
typedef int buf ;


 int FUNC_0 (struct script_ctx*,char*,char const*) ;
 struct script_ctx* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_0, const char *VAR_1)
{
    struct script_ctx *VAR_2 = FUNC_1(VAR_0);
    FUNC_0(VAR_2, "loading %s\n", VAR_1);

    char VAR_3[80];
    FUNC_5(VAR_3, sizeof(VAR_3), "require '%s'", VAR_1);
    if (FUNC_2(VAR_0, VAR_3))
        FUNC_4(VAR_0);
    FUNC_3(VAR_0, 0, 0);
}
