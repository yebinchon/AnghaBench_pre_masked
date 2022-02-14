
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_lua_state {int L; } ;
struct lwan_lua_priv {int script; int script_file; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lwan_lua_state*) ;
 int FUNC_3 (int ,int ) ;
 struct lwan_lua_state* FUNC_4 (int) ;

__attribute__((used)) static struct cache_entry *FUNC_5(const char *VAR_0 __attribute__((unused)),
                                        void *VAR_1)
{
    struct lwan_lua_priv *VAR_2 = VAR_1;
    struct lwan_lua_state *VAR_3 = FUNC_4(sizeof(*VAR_3));

    if (FUNC_1(!VAR_3))
        return ((void*)0);

    VAR_3->L = FUNC_3(VAR_2->script_file, VAR_2->script);
    if (FUNC_0(VAR_3->L))
        return (struct cache_entry *)VAR_3;

    FUNC_2(VAR_3);
    return ((void*)0);
}
