
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_lua_priv {int cache_key; int cache_period; } ;
struct cache {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cache* FUNC_1 (int ,int ,struct lwan_lua_priv*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct cache* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct cache*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct cache *FUNC_6(struct lwan_lua_priv *VAR_2)
{
    struct cache *VAR_3 = FUNC_4(VAR_2->cache_key);

    if (FUNC_0(!VAR_3)) {
        FUNC_2("Creating cache for this thread");
        VAR_3 =
            FUNC_1(VAR_0, VAR_1, VAR_2, VAR_2->cache_period);
        if (FUNC_0(!VAR_3))
            FUNC_3("Could not create cache");


        FUNC_5(VAR_2->cache_key, VAR_3);
    }

    return VAR_3;
}
