
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ timer_ref; int timer; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_3) {
    ads_ctrl_ud_t *VAR_4 = FUNC_0(VAR_3, 1, VAR_2);
    if (VAR_4->timer_ref != VAR_0) {
        FUNC_2(&VAR_4->timer);
        FUNC_1(VAR_3, VAR_1, VAR_4->timer_ref);
    }
    return 0;
}
