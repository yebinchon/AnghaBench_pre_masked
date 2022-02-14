
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int json_config_t ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static json_config_t *FUNC_3(lua_State *VAR_0)
{
    json_config_t *VAR_1;

    VAR_1 = FUNC_1(VAR_0, FUNC_2(1));
    if (!VAR_1)
        FUNC_0(VAR_0, "BUG: Unable to fetch CJSON configuration");

    return VAR_1;
}
