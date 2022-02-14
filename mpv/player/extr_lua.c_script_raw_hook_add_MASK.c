
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct script_ctx {int client; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 struct script_ctx* FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,void*,char const*,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);
    uint64_t VAR_2 = FUNC_2(VAR_0, 1);
    const char *VAR_3 = FUNC_3(VAR_0, 2);
    int VAR_4 = FUNC_2(VAR_0, 3);
    return FUNC_0(VAR_0, FUNC_4(VAR_1->client, VAR_2, VAR_3, VAR_4));
}
