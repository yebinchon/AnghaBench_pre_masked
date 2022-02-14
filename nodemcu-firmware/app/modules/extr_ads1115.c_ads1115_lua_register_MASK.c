
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int lua_State ;
struct TYPE_2__ {int samples_value; int threshold_low; int threshold_hi; int config; int timer_ref; int mode; int comp; int samples; int gain; scalar_t__ i2c_addr; scalar_t__ chip_id; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int ) ;
 char* VAR_9 ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_10, uint8_t VAR_11) {
    uint8_t VAR_12 = FUNC_2(VAR_10, 1);
    FUNC_1(VAR_10, 0 == VAR_12, 1, "i2c_id must be 0");
    uint8_t VAR_13 = FUNC_2(VAR_10, 2);
    FUNC_1(VAR_10, FUNC_0(VAR_13), 2, VAR_9);
    uint16_t VAR_14 = FUNC_7(VAR_13, VAR_6);
    if (VAR_14 == 0xFFFF) {
        return FUNC_3(VAR_10, "found no device");
    }
    if (VAR_14 != VAR_2) {
        return FUNC_3(VAR_10, "unexpected config value (%p) please reset device before calling this function", VAR_14);
    }
    ads_ctrl_ud_t *VAR_15 = (ads_ctrl_ud_t *)FUNC_5(VAR_10, sizeof(ads_ctrl_ud_t));
    if (((void*)0) == VAR_15) {
        return FUNC_3(VAR_10, "ads1115 malloc: out of memory");
    }
    FUNC_4(VAR_10, VAR_8);
    FUNC_6(VAR_10, -2);
    VAR_15->chip_id = VAR_11;
    VAR_15->i2c_addr = VAR_13;
    VAR_15->gain = VAR_5;
    VAR_15->samples = VAR_3;
    VAR_15->samples_value = VAR_11 == VAR_0 ? 128 : 1600;
    VAR_15->comp = VAR_1;
    VAR_15->mode = VAR_4;
    VAR_15->threshold_low = 0x8000;
    VAR_15->threshold_hi = 0x7FFF;
    VAR_15->config = VAR_2;
    VAR_15->timer_ref = VAR_7;
    return 1;
}
