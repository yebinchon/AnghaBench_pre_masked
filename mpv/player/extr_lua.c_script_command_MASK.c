
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 struct script_ctx* FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);
    const char *VAR_2 = FUNC_2(VAR_0, 1);

    return FUNC_0(VAR_0, FUNC_3(VAR_1->client, VAR_2));
}
