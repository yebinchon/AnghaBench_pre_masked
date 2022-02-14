
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int input; } ;
typedef int lua_State ;


 struct MPContext* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
    struct MPContext *VAR_1 = FUNC_0(VAR_0);

    char *VAR_2 = (char *)FUNC_2(VAR_0, 1);
    int VAR_3 = FUNC_1(VAR_0, 2);
    int VAR_4 = FUNC_1(VAR_0, 3);
    int VAR_5 = FUNC_1(VAR_0, 4);
    int VAR_6 = FUNC_1(VAR_0, 5);
    FUNC_3(VAR_1->input, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    return 0;
}
