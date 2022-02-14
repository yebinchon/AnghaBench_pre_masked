
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_lua_settings {int script; int cache_period; int script_file; int default_type; } ;
struct hash {int dummy; } ;


 int FUNC_0 (struct hash const*,char*) ;
 void* FUNC_1 (char const*,struct lwan_lua_settings*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void *FUNC_3(const char *VAR_0, const struct hash *VAR_1)
{
    struct lwan_lua_settings VAR_2 = {
        .default_type = FUNC_0(VAR_1, "default_type"),
        .script_file = FUNC_0(VAR_1, "script_file"),
        .cache_period = FUNC_2(FUNC_0(VAR_1, "cache_period"), 15),
        .script = FUNC_0(VAR_1, "script")
    };

    return FUNC_1(VAR_0, &VAR_2);
}
