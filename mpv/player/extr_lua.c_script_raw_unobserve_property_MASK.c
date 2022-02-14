
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct script_ctx {int client; } ;
typedef int lua_State ;


 struct script_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);
    uint64_t VAR_2 = FUNC_1(VAR_0, 1);
    FUNC_2(VAR_0, FUNC_3(VAR_1->client, VAR_2));
    return 1;
}
