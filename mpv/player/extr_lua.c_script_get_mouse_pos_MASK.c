
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int input; } ;
typedef int lua_State ;


 struct MPContext* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    struct MPContext *VAR_1 = FUNC_0(VAR_0);
    int VAR_2, VAR_3;
    FUNC_2(VAR_1->input, &VAR_2, &VAR_3);
    FUNC_1(VAR_0, VAR_2);
    FUNC_1(VAR_0, VAR_3);
    return 2;
}
