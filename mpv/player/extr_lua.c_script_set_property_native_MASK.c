
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
struct mpv_node {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct script_ctx* FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (void*,struct mpv_node*,int *,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ,struct mpv_node*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1)
{
    struct script_ctx *VAR_2 = FUNC_1(VAR_1);
    const char *VAR_3 = FUNC_2(VAR_1, 1);
    struct mpv_node VAR_4;
    void *VAR_5 = FUNC_4(VAR_1);
    FUNC_3(VAR_5, &VAR_4, VAR_1, 2);
    int VAR_6 = FUNC_5(VAR_2->client, VAR_3, VAR_0, &VAR_4);
    FUNC_6(VAR_5);
    return FUNC_0(VAR_1, VAR_6);

}
