
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int encode_number_precision; } ;
typedef TYPE_1__ json_config_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0)
{
    json_config_t *VAR_1 = FUNC_0(VAR_0, 1);

    return FUNC_1(VAR_0, 1, &VAR_1->encode_number_precision, 1, 14);
}
