
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int lua_State ;
struct TYPE_4__ {int i2c_addr; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_2) {
    ads_ctrl_ud_t *VAR_3 = FUNC_0(VAR_2, 1, VAR_1);
    uint16_t VAR_4 = FUNC_2(VAR_3->i2c_addr, VAR_0);
    FUNC_1(VAR_3, VAR_4, VAR_2);
    return 4;
}
