
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lwan_lua_method_info {int * func; int * name; } ;
typedef int lwan_lua_method ;
struct TYPE_3__ {int * func; int * name; } ;
typedef TYPE_1__ luaL_reg ;


 struct lwan_lua_method_info* VAR_0 ;
 struct lwan_lua_method_info const* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) __attribute__((constructor))
__attribute__((no_sanitize_address))
static void FUNC_2(void)
{
    extern const struct lwan_lua_method_info FUNC_3(lwan_lua_method);
    extern const struct lwan_lua_method_info FUNC_4(lwan_lua_method);
    const struct lwan_lua_method_info *VAR_3;
    luaL_reg *VAR_4;

    for (VAR_3 = VAR_0; VAR_3 < VAR_1;
         VAR_3++) {
        VAR_4 = FUNC_0(&VAR_2);
        if (!VAR_4) {
            FUNC_1("Could not register Lua method `%s`",
                                 VAR_3->name);
        }

        VAR_4->name = VAR_3->name;
        VAR_4->func = VAR_3->func;
    }

    VAR_4 = FUNC_0(&VAR_2);
    if (!VAR_4)
        FUNC_1("Could not add Lua method sentinel");

    VAR_4->name = ((void*)0);
    VAR_4->func = ((void*)0);
}
