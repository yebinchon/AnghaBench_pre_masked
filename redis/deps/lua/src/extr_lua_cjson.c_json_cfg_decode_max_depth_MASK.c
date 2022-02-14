
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int decode_max_depth; } ;
typedef TYPE_1__ json_config_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_1)
{
    json_config_t *VAR_2 = FUNC_0(VAR_1, 1);

    return FUNC_1(VAR_1, 1, &VAR_2->decode_max_depth, 1, VAR_0);
}
