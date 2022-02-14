
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int mpv_node ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (void*,int *) ;
 struct script_ctx* FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char const*,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_1)
{
    struct script_ctx *VAR_2 = FUNC_1(VAR_1);
    const char *VAR_3 = FUNC_2(VAR_1, 1);
    FUNC_6(VAR_1, 2);
    void *VAR_4 = FUNC_5(VAR_1);

    mpv_node VAR_5;
    int VAR_6 = FUNC_8(VAR_2->client, VAR_3, VAR_0, &VAR_5);
    if (VAR_6 >= 0) {
        FUNC_0(VAR_4, &VAR_5);
        FUNC_9(VAR_1, &VAR_5);
        FUNC_10(VAR_4);
        return 1;
    }
    FUNC_4(VAR_1, 2);
    FUNC_3(VAR_1, FUNC_7(VAR_6));
    return 2;
}
