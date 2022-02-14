
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coro {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct coro*,int ,int *,void*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static lua_State *FUNC_4(lua_State *VAR_2, struct coro *VAR_3)
{
    lua_State *VAR_4 = FUNC_3(VAR_2);

    if (FUNC_0(!VAR_4))
        return ((void*)0);

    int VAR_5 = FUNC_2(VAR_2, VAR_0);
    FUNC_1(VAR_3, VAR_1, VAR_2, (void *)(intptr_t)VAR_5);

    return VAR_4;
}
