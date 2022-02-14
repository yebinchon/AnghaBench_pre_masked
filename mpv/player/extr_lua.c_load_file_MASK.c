
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (struct script_ctx*,char*,char const*) ;
 struct script_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_0, const char *VAR_1)
{
    struct script_ctx *VAR_2 = FUNC_1(VAR_0);
    FUNC_0(VAR_2, "loading file %s\n", VAR_1);
    int VAR_3 = FUNC_2(VAR_0, VAR_1);
    if (VAR_3)
        FUNC_4(VAR_0);
    FUNC_3(VAR_0, 0, 0);
}
