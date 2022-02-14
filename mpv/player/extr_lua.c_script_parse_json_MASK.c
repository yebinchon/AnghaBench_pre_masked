
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_node {int dummy; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (void*,struct mpv_node*,char**,int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,struct mpv_node*) ;
 int FUNC_9 (void*) ;
 char* FUNC_10 (void*,int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_0)
{
    FUNC_7(VAR_0, 2);
    void *VAR_1 = FUNC_6(VAR_0);
    char *VAR_2 = FUNC_10(VAR_1, FUNC_2(VAR_0, 1));
    bool VAR_3 = FUNC_5(VAR_0, 2);
    bool VAR_4 = 0;
    struct mpv_node VAR_5;
    if (FUNC_0(VAR_1, &VAR_5, &VAR_2, 32) >= 0) {
        FUNC_1(&VAR_2);
        VAR_4 = !VAR_2[0] || VAR_3;
    }
    if (VAR_4) {
        FUNC_8(VAR_0, &VAR_5);
        FUNC_3(VAR_0);
    } else {
        FUNC_3(VAR_0);
        FUNC_4(VAR_0, "error");
    }
    FUNC_4(VAR_0, VAR_2);
    FUNC_9(VAR_1);
    return 3;
}
