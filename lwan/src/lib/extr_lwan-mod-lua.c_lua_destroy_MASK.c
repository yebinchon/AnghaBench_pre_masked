
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_lua_priv {struct lwan_lua_priv* script; struct lwan_lua_priv* script_file; struct lwan_lua_priv* default_type; int cache_key; } ;


 int FUNC_0 (struct lwan_lua_priv*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct lwan_lua_priv *VAR_1 = VAR_0;

    if (VAR_1) {
        FUNC_1(VAR_1->cache_key);
        FUNC_0(VAR_1->default_type);
        FUNC_0(VAR_1->script_file);
        FUNC_0(VAR_1->script);
        FUNC_0(VAR_1);
    }
}
