
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_node {int dummy; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (char**,struct mpv_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (void*,struct mpv_node*,int *,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 char* FUNC_6 (void*,char*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    void *VAR_1 = FUNC_4(VAR_0);
    struct mpv_node VAR_2;
    FUNC_3(VAR_1, &VAR_2, VAR_0, 1);
    char *VAR_3 = FUNC_6(VAR_1, "");
    if (FUNC_0(&VAR_3, &VAR_2) >= 0) {
        FUNC_2(VAR_0, VAR_3);
        FUNC_1(VAR_0);
    } else {
        FUNC_1(VAR_0);
        FUNC_2(VAR_0, "error");
    }
    FUNC_5(VAR_1);
    return 2;
}
