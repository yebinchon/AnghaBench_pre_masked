
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int os_timer_func_t ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ comp; int threshold_low; int threshold_hi; scalar_t__ mode; int samples_value; int timer; int config; int i2c_addr; int timer_ref; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int,int,char*) ;
 TYPE_1__* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_9 ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,void*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_10) {
    ads_ctrl_ud_t *VAR_11 = FUNC_2(VAR_10, 1, VAR_9);

    if (((VAR_11->comp == VAR_0) ||
         (VAR_11->comp == VAR_1) ||
         (VAR_11->comp == VAR_2)) &&
        (VAR_11->threshold_low == 0x7FFF) &&
        (VAR_11->threshold_hi == 0x8000)) {

        if (VAR_11->mode == VAR_3) {
            FUNC_0("ads1115 trigger config: %04x", VAR_11->config);
            FUNC_9(VAR_11->i2c_addr, VAR_4, VAR_11->config);
        }
        return 0;
    }

    FUNC_1(VAR_10, (FUNC_5(VAR_10, 2) == VAR_6 || FUNC_5(VAR_10, 2) == VAR_7), 2, "Must be function");
    FUNC_4(VAR_10, 2);
    VAR_11->timer_ref = FUNC_3(VAR_10, VAR_5);

    if (VAR_11->mode == VAR_3) {
        FUNC_9(VAR_11->i2c_addr, VAR_4, VAR_11->config);
    }


    FUNC_7(&VAR_11->timer);
    FUNC_8(&VAR_11->timer, (os_timer_func_t *)VAR_8, (void *)VAR_11);

    int VAR_12 = 1;
    switch (VAR_11->samples_value) {
        case 129:
            VAR_12 = 150;
            break;
        case 136:
            VAR_12 = 75;
            break;
        case 134:
            VAR_12 = 35;
            break;
        case 131:
            VAR_12 = 20;
            break;
        case 137:
            VAR_12 = 10;
            break;
        case 135:
            VAR_12 = 5;
            break;
        case 133:
        case 132:
            VAR_12 = 3;
            break;
        case 130:
        case 128:
            VAR_12 = 2;
    }
    FUNC_6(&VAR_11->timer, VAR_12, 0);
    return 0;
}
