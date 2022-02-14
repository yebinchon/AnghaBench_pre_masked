
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
struct mpv_node {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (void*,struct mpv_node*) ;
 struct script_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (void*,struct mpv_node*,int *,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,struct mpv_node*,struct mpv_node*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct mpv_node*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);
    FUNC_6(VAR_0, 2);
    struct mpv_node VAR_2;
    struct mpv_node VAR_3;
    void *VAR_4 = FUNC_5(VAR_0);
    FUNC_4(VAR_4, &VAR_2, VAR_0, 1);
    int VAR_5 = FUNC_7(VAR_1->client, &VAR_2, &VAR_3);
    if (VAR_5 >= 0) {
        FUNC_0(VAR_4, &VAR_3);
        FUNC_9(VAR_0, &VAR_3);
        FUNC_10(VAR_4);
        return 1;
    }
    FUNC_3(VAR_0, 2);
    FUNC_2(VAR_0, FUNC_8(VAR_5));
    return 2;
}
