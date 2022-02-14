
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_key_value_array {int dummy; } ;
struct lwan_key_value {char* key; int * value; } ;
struct coro {int dummy; } ;
typedef int lua_State ;


 int * FUNC_0 (struct coro*,int ) ;
 int FUNC_1 (int *,int) ;
 struct lwan_key_value* FUNC_2 (struct lwan_key_value_array*) ;

__attribute__((used)) static bool FUNC_3(lua_State *VAR_0,
                             struct coro *VAR_1,
                             struct lwan_key_value_array *VAR_2,
                             char *VAR_3,
                             int VAR_4)
{
    struct lwan_key_value *VAR_5;

    VAR_5 = FUNC_2(VAR_2);
    if (!VAR_5)
        return 0;

    VAR_5->key = VAR_3;
    VAR_5->value = FUNC_0(VAR_1, FUNC_1(VAR_0, VAR_4));

    return VAR_5->value != ((void*)0);
}
