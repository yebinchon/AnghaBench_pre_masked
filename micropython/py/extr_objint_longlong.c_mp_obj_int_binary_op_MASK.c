
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
struct TYPE_2__ {long long val; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int mp_binary_op_t ;
 scalar_t__ VAR_0 ;
 long long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,long long,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (long long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;

mp_obj_t FUNC_10(mp_binary_op_t VAR_3, mp_obj_t VAR_4, mp_obj_t VAR_5) {
    long long VAR_6;
    long long VAR_7;

    if (FUNC_4(VAR_4)) {
        VAR_6 = FUNC_0(VAR_4);
    } else {
        FUNC_1(FUNC_5(VAR_4, &VAR_2));
        VAR_6 = ((mp_obj_int_t*)VAR_4)->val;
    }

    if (FUNC_4(VAR_5)) {
        VAR_7 = FUNC_0(VAR_5);
    } else if (FUNC_5(VAR_5, &VAR_2)) {
        VAR_7 = ((mp_obj_int_t*)VAR_5)->val;
    } else {

        return FUNC_3(VAR_3, VAR_4, VAR_5);
    }

    switch (VAR_3) {
        case 154:
        case 150:
            return FUNC_7(VAR_6 + VAR_7);
        case 129:
        case 141:
            return FUNC_7(VAR_6 - VAR_7);
        case 133:
        case 145:
            return FUNC_7(VAR_6 * VAR_7);
        case 151:
        case 148:
            if (VAR_7 == 0) {
                goto zero_division;
            }
            return FUNC_7(VAR_6 / VAR_7);
        case 136:
        case 146:
            if (VAR_7 == 0) {
                goto zero_division;
            }
            return FUNC_7(VAR_6 % VAR_7);

        case 153:
        case 149:
            return FUNC_7(VAR_6 & VAR_7);
        case 132:
        case 144:
            return FUNC_7(VAR_6 | VAR_7);
        case 128:
        case 140:
            return FUNC_7(VAR_6 ^ VAR_7);

        case 137:
        case 147:
            return FUNC_7(VAR_6 << (int)VAR_7);
        case 130:
        case 142:
            return FUNC_7(VAR_6 >> (int)VAR_7);

        case 131:
        case 143: {
            if (VAR_7 < 0) {



                FUNC_8("negative power with no float support");

            }
            long long VAR_8 = 1;
            while (VAR_7 > 0) {
                if (VAR_7 & 1) {
                    VAR_8 *= VAR_6;
                }
                if (VAR_7 == 1) {
                    break;
                }
                VAR_7 /= 2;
                VAR_6 *= VAR_6;
            }
            return FUNC_7(VAR_8);
        }

        case 139:
            return FUNC_6(VAR_6 < VAR_7);
        case 135:
            return FUNC_6(VAR_6 > VAR_7);
        case 138:
            return FUNC_6(VAR_6 <= VAR_7);
        case 134:
            return FUNC_6(VAR_6 >= VAR_7);
        case 152:
            return FUNC_6(VAR_6 == VAR_7);

        default:
            return VAR_0;
    }

zero_division:
    FUNC_9(&VAR_1, "divide by zero");
}
