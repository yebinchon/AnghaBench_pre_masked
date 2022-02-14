
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int lua_State ;
struct TYPE_3__ {int timer_ref; int timer; int i2c_addr; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void * VAR_3) {
    ads_ctrl_ud_t * VAR_4 = (ads_ctrl_ud_t *)VAR_3;
    uint16_t VAR_5 = FUNC_6(VAR_4->i2c_addr, VAR_0);
    lua_State *VAR_6 = FUNC_2();
    FUNC_4(&VAR_4->timer);
    FUNC_3(VAR_6, VAR_2, VAR_4->timer_ref);
    FUNC_0(VAR_6, VAR_2, VAR_4->timer_ref);
    VAR_4->timer_ref = VAR_1;
    FUNC_5(VAR_4, VAR_5, VAR_6);
    FUNC_1(VAR_6, 4, 0);
}
