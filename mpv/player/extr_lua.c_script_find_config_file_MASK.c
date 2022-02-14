
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int global; } ;
typedef int lua_State ;


 struct MPContext* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
    struct MPContext *VAR_1 = FUNC_0(VAR_0);
    const char *VAR_2 = FUNC_1(VAR_0, 1);
    char *VAR_3 = FUNC_4(((void*)0), VAR_1->global, VAR_2);
    if (VAR_3) {
        FUNC_3(VAR_0, VAR_3);
    } else {
        FUNC_2(VAR_0);
    }
    FUNC_5(VAR_3);
    return 1;
}
