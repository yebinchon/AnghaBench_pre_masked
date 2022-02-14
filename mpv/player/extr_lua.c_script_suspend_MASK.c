
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (struct script_ctx*,char*) ;
 struct script_ctx* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);
    FUNC_0(VAR_1, "mp.suspend() is deprecated and does nothing.\n");
    return 0;
}
