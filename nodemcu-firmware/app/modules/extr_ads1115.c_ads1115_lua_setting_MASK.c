
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int lua_State ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {int gain; scalar_t__ chip_id; int samples; int samples_value; int mode; int threshold_low; int threshold_hi; int comp; int config; int i2c_addr; } ;
typedef TYPE_1__ ads_ctrl_ud_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int) ;
 TYPE_1__* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int VAR_22 ;
 char* VAR_23 ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_24) {
    int VAR_25 = FUNC_8(VAR_24);
    if (VAR_25 != 5 && VAR_25 != 6 && VAR_25 != 8 && VAR_25 != 9) {
        FUNC_7(VAR_24, "invalid number of arguments to 'setting'");
    }
    ads_ctrl_ud_t *VAR_26 = FUNC_6(VAR_24, 1, VAR_22);

    uint16_t VAR_27 = FUNC_5(VAR_24, 2);
    FUNC_3(VAR_24, (VAR_27 == VAR_18) || (VAR_27 == VAR_17) || (VAR_27 == VAR_16) ||
                     (VAR_27 == VAR_15) || (VAR_27 == VAR_14) || (VAR_27 == VAR_13),
                  2, VAR_23);
    VAR_26->gain = VAR_27;

    uint16_t VAR_28 = FUNC_5(VAR_24, 3);
    uint16_t VAR_29 = 0;
    if (VAR_26->chip_id == VAR_0) {
        switch(VAR_28) {
            case 129:
                VAR_29 = 0;
                break;
            case 138:
                VAR_29 = 0x20;
                break;
            case 135:
                VAR_29 = 0x40;
                break;
            case 131:
                VAR_29 = 0x60;
                break;
            case 140:
                VAR_29 = 0x80;
                break;
            case 136:
                VAR_29 = 0xA0;
                break;
            case 133:
                VAR_29 = 0xC0;
                break;
            case 130:
                VAR_29 = 0xE0;
                break;
            default:
                FUNC_4(VAR_24, 3, VAR_23);
        }
    } else {
        switch(VAR_28) {
            case 140:
                VAR_29 = 0;
                break;
            case 136:
                VAR_29 = 0x20;
                break;
            case 132:
                VAR_29 = 0x40;
                break;
            case 128:
                VAR_29 = 0x60;
                break;
            case 139:
                VAR_29 = 0x80;
                break;
            case 137:
                VAR_29 = 0xA0;
                break;
            case 134:
                VAR_29 = 0xC0;
                break;
            default:
                FUNC_4(VAR_24, 3, VAR_23);
        }
    }
    VAR_26->samples = VAR_29;
    VAR_26->samples_value = VAR_28;

    uint16_t VAR_30 = FUNC_5(VAR_24, 4);
    FUNC_3(VAR_24, FUNC_0(VAR_30), 4, VAR_23);

    uint16_t VAR_31 = FUNC_5(VAR_24, 5);
    FUNC_3(VAR_24, (VAR_31 == VAR_10) || (VAR_31 == VAR_9), 5, VAR_23);
    VAR_26->mode = VAR_31;
    uint16_t VAR_32 = VAR_31 == VAR_10 ? VAR_12 : VAR_11;

    uint16_t VAR_33 = VAR_8;

    if (VAR_25 > 5) {

        VAR_33 = FUNC_5(VAR_24, 6);
        FUNC_3(VAR_24, (VAR_33 == VAR_5) || (VAR_33 == VAR_6) || (VAR_33 == VAR_7),
                      6, VAR_23);
        uint16_t VAR_34 = 0x7FFF;
        uint16_t VAR_35 = 0x8000;
        if (VAR_25 > 6) {

            VAR_34 = FUNC_5(VAR_24, 7);
            VAR_35 = FUNC_5(VAR_24, 8);
            FUNC_3(VAR_24, (int16_t)VAR_34 <= (int16_t)VAR_35, 7, "threshold_low > threshold_hi");
            FUNC_3(VAR_24, FUNC_2(VAR_27, VAR_30, &VAR_34), 7, VAR_23);
            FUNC_3(VAR_24, FUNC_2(VAR_27, VAR_30, &VAR_35), 8, VAR_23);
        }
        VAR_26->threshold_low = VAR_34;
        VAR_26->threshold_hi = VAR_35;
        FUNC_1("ads1115 low: %04x\n", VAR_34);
        FUNC_1("ads1115 hi : %04x\n", VAR_35);
        FUNC_9(VAR_26->i2c_addr, VAR_21, VAR_34);
        FUNC_9(VAR_26->i2c_addr, VAR_20, VAR_35);
    }
    VAR_26->comp = VAR_33;

    uint16_t VAR_36 = VAR_2;
    if (VAR_25 == 9) {
        VAR_36 = FUNC_5(VAR_24, 9);
        FUNC_3(VAR_24, (VAR_36 == VAR_3) || (VAR_36 == VAR_2),
                      9, VAR_23);
    }

    uint16_t VAR_37 = (VAR_32 | VAR_30 | VAR_27 | VAR_31 | VAR_29 | VAR_36 | VAR_4 | VAR_1 | VAR_33);
    VAR_26->config = VAR_37;

    FUNC_1("ads1115 config: %04x\n", VAR_26->config);
    FUNC_9(VAR_26->i2c_addr, VAR_19, VAR_37);
    return 0;
}
