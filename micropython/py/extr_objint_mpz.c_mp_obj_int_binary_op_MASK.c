
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpz_t ;
typedef int mpz_dig_t ;
typedef int mp_obj_t ;
struct TYPE_4__ {int mpz; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int mp_int_t ;
typedef int mp_float_t ;
typedef int mp_binary_op_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int ,int ) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int *,int const*,int const*) ;
 int FUNC_18 (int *,int const*,int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*,int const*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *,int const*,int const*) ;
 int FUNC_23 (int *,int *,int,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int const*) ;
 scalar_t__ FUNC_26 (int const*) ;
 int FUNC_27 (int *,int const*,int const*) ;
 int FUNC_28 (int *,int const*,int const*) ;
 int FUNC_29 (int *,int const*,int const*) ;
 int FUNC_30 (int *,int const*,int ) ;
 int FUNC_31 (int *,int const*,int ) ;
 int FUNC_32 (int *,int const*,int const*) ;
 int FUNC_33 (int *,int const*,int const*) ;

mp_obj_t FUNC_34(mp_binary_op_t VAR_9, mp_obj_t VAR_10, mp_obj_t VAR_11) {
    const mpz_t *VAR_12;
    const mpz_t *VAR_13;
    mpz_t VAR_14;
    mpz_dig_t VAR_15[VAR_0];


    if (FUNC_10(VAR_10)) {
        FUNC_23(&VAR_14, VAR_15, VAR_0, FUNC_1(VAR_10));
        VAR_12 = &VAR_14;
    } else {
        FUNC_3(FUNC_11(VAR_10, &VAR_8));
        VAR_12 = &((mp_obj_int_t*)FUNC_2(VAR_10))->mpz;
    }


    if (FUNC_10(VAR_11)) {
        FUNC_23(&VAR_14, VAR_15, VAR_0, FUNC_1(VAR_11));
        VAR_13 = &VAR_14;
    } else if (FUNC_11(VAR_11, &VAR_8)) {
        VAR_13 = &((mp_obj_int_t*)FUNC_2(VAR_11))->mpz;
    } else {

        return FUNC_6(VAR_9, VAR_10, VAR_11);
    }
    if (VAR_9 >= 144 && VAR_9 < VAR_1) {
        mp_obj_int_t *VAR_16 = FUNC_8();

        switch (VAR_9) {
            case 154:
            case 150:
                FUNC_17(&VAR_16->mpz, VAR_12, VAR_13);
                break;
            case 129:
            case 141:
                FUNC_32(&VAR_16->mpz, VAR_12, VAR_13);
                break;
            case 133:
            case 145:
                FUNC_27(&VAR_16->mpz, VAR_12, VAR_13);
                break;
            case 151:
            case 148: {
                if (FUNC_26(VAR_13)) {
                    zero_division_error:
                    FUNC_16(&VAR_6, "divide by zero");
                }
                mpz_t VAR_17; FUNC_24(&VAR_17);
                FUNC_22(&VAR_16->mpz, &VAR_17, VAR_12, VAR_13);
                FUNC_21(&VAR_17);
                break;
            }
            case 136:
            case 146: {
                if (FUNC_26(VAR_13)) {
                    goto zero_division_error;
                }
                mpz_t VAR_18; FUNC_24(&VAR_18);
                FUNC_22(&VAR_18, &VAR_16->mpz, VAR_12, VAR_13);
                FUNC_21(&VAR_18);
                break;
            }

            case 153:
            case 149:
                FUNC_18(&VAR_16->mpz, VAR_12, VAR_13);
                break;
            case 132:
            case 144:
                FUNC_28(&VAR_16->mpz, VAR_12, VAR_13);
                break;
            case 128:
            case 140:
                FUNC_33(&VAR_16->mpz, VAR_12, VAR_13);
                break;

            case 137:
            case 147:
            case 130:
            case 142: {
                mp_int_t VAR_19 = FUNC_7(VAR_11);
                if (VAR_19 < 0) {
                    FUNC_15("negative shift count");
                }
                if (VAR_9 == 137 || VAR_9 == 147) {
                    FUNC_30(&VAR_16->mpz, VAR_12, VAR_19);
                } else {
                    FUNC_31(&VAR_16->mpz, VAR_12, VAR_19);
                }
                break;
            }

            case 131:
            case 143:
                if (FUNC_25(VAR_13)) {



                    FUNC_15("negative power with no float support");

                }
                FUNC_29(&VAR_16->mpz, VAR_12, VAR_13);
                break;

            default: {
                FUNC_3(VAR_9 == VAR_2);
                if (FUNC_26(VAR_13)) {
                    goto zero_division_error;
                }
                mp_obj_int_t *VAR_20 = FUNC_8();
                FUNC_22(&VAR_20->mpz, &VAR_16->mpz, VAR_12, VAR_13);
                mp_obj_t VAR_21[2] = {FUNC_0(VAR_20), FUNC_0(VAR_16)};
                return FUNC_14(2, VAR_21);
            }
        }

        return FUNC_0(VAR_16);

    } else {
        int VAR_22 = FUNC_20(VAR_12, VAR_13);
        switch (VAR_9) {
            case 139:
                return FUNC_12(VAR_22 < 0);
            case 135:
                return FUNC_12(VAR_22 > 0);
            case 138:
                return FUNC_12(VAR_22 <= 0);
            case 134:
                return FUNC_12(VAR_22 >= 0);
            case 152:
                return FUNC_12(VAR_22 == 0);

            default:
                return VAR_5;
        }
    }
}
