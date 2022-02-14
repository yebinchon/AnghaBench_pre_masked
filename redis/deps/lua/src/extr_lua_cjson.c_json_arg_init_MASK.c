
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int json_config_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static json_config_t *FUNC_4(lua_State *VAR_0, int VAR_1)
{
    FUNC_1(VAR_0, FUNC_2(VAR_0) <= VAR_1, VAR_1 + 1,
                  "found too many arguments");

    while (FUNC_2(VAR_0) < VAR_1)
        FUNC_3(VAR_0);

    return FUNC_0(VAR_0);
}
