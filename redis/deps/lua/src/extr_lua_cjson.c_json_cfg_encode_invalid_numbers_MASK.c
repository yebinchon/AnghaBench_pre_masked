
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int encode_invalid_numbers; } ;
typedef TYPE_1__ json_config_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,char const**,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    static const char *VAR_1[] = { "off", "on", "null", ((void*)0) };
    json_config_t *VAR_2 = FUNC_0(VAR_0, 1);

    FUNC_1(VAR_0, 1, &VAR_2->encode_invalid_numbers, VAR_1, 1);

    FUNC_2(VAR_0, &VAR_2->encode_invalid_numbers);

    return 1;
}
