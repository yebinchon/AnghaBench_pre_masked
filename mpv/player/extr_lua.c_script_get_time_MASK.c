
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int lua_State ;


 struct script_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,double) ;
 double FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_0, FUNC_2(VAR_1->client) / (double)(1000 * 1000));
    return 1;
}
