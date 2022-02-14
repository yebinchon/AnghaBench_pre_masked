
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_int64 ;
typedef int npy_extint128_t ;
typedef scalar_t__ mem_overlap_t ;
struct TYPE_4__ {int a; int ub; } ;
typedef TYPE_1__ diophantine_term_t ;
typedef int Py_ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int,char*) ;
 int FUNC_7 (int,int,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static mem_overlap_t
FUNC_11(unsigned int VAR_4,
                unsigned int VAR_5,
                diophantine_term_t *VAR_6,
                diophantine_term_t *VAR_7,
                npy_int64 *VAR_8, npy_int64 *VAR_9,
                npy_int64 VAR_10,
                Py_ssize_t VAR_11,
                int VAR_12,
                npy_int64 *VAR_13,
                Py_ssize_t *VAR_14)
{
    npy_int64 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    npy_extint128_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
    mem_overlap_t VAR_38;
    char VAR_39 = 0;

    if (VAR_11 >= 0 && *VAR_14 >= VAR_11) {
        return VAR_2;
    }


    if (VAR_5 == 1) {
        VAR_18 = VAR_6[0].a;
        VAR_19 = VAR_6[0].ub;
    }
    else {
        VAR_18 = VAR_7[VAR_5-2].a;
        VAR_19 = VAR_7[VAR_5-2].ub;
    }

    VAR_20 = VAR_6[VAR_5].a;
    VAR_21 = VAR_6[VAR_5].ub;

    VAR_15 = VAR_7[VAR_5-1].a;
    VAR_16 = VAR_8[VAR_5-1];
    VAR_17 = VAR_9[VAR_5-1];


    VAR_22 = VAR_10 / VAR_15;
    VAR_23 = VAR_10 % VAR_15;
    if (VAR_23 != 0) {
        ++*VAR_14;
        return VAR_0;
    }

    VAR_24 = VAR_20 / VAR_15;
    VAR_25 = VAR_18 / VAR_15;
    VAR_32 = FUNC_4(VAR_16, VAR_22);
    VAR_33 = FUNC_4(VAR_17, VAR_22);

    VAR_34 = FUNC_1(FUNC_5(VAR_32), VAR_24);
    VAR_35 = FUNC_1(FUNC_8(VAR_33, FUNC_9(VAR_21), &VAR_39), VAR_25);

    VAR_36 = FUNC_2(FUNC_8(FUNC_9(VAR_19), VAR_32, &VAR_39), VAR_24);
    VAR_37 = FUNC_2(VAR_33, VAR_25);

    if (VAR_39) {
        return VAR_1;
    }

    if (FUNC_3(VAR_35, VAR_34)) {
        VAR_34 = VAR_35;
    }

    if (FUNC_3(VAR_36, VAR_37)) {
        VAR_36 = VAR_37;
    }

    if (FUNC_3(VAR_34, VAR_36)) {
        ++*VAR_14;
        return VAR_0;
    }

    VAR_27 = FUNC_10(VAR_34, &VAR_39);
    VAR_28 = FUNC_10(VAR_36, &VAR_39);

    VAR_32 = FUNC_0(VAR_32, FUNC_4(VAR_24, VAR_27), &VAR_39);
    VAR_33 = FUNC_8(VAR_33, FUNC_4(VAR_25, VAR_27), &VAR_39);

    VAR_28 = FUNC_7(VAR_28, VAR_27, &VAR_39);
    VAR_27 = 0;
    VAR_30 = FUNC_10(VAR_32, &VAR_39);
    VAR_31 = FUNC_10(VAR_33, &VAR_39);

    if (VAR_39) {
        return VAR_1;
    }



    if (VAR_5 == 1) {

        if (VAR_28 >= VAR_27) {
            VAR_13[0] = VAR_30 + VAR_24*VAR_27;
            VAR_13[1] = VAR_31 - VAR_25*VAR_27;
            if (VAR_12) {
                unsigned int VAR_40;
                int VAR_41;

                VAR_41 = 1;
                for (VAR_40 = 0; VAR_40 < VAR_4; ++VAR_40) {
                    if (VAR_13[VAR_40] != VAR_6[VAR_40].ub/2) {
                        VAR_41 = 0;
                        break;
                    }
                }

                if (VAR_41) {

                    ++*VAR_14;
                    return VAR_0;
                }
            }
            return VAR_3;
        }
        ++*VAR_14;
        return VAR_0;
    }
    else {

        for (VAR_26 = VAR_27; VAR_26 <= VAR_28; ++VAR_26) {
            VAR_13[VAR_5] = VAR_31 - VAR_25*VAR_26;


            VAR_29 = FUNC_7(VAR_10, FUNC_6(VAR_20, VAR_13[VAR_5], &VAR_39), &VAR_39);
            if (VAR_39) {
                return VAR_1;
            }

            VAR_38 = FUNC_11(VAR_4, VAR_5-1, VAR_6, VAR_7, VAR_8, VAR_9,
                                  VAR_29, VAR_11, VAR_12,
                                  VAR_13, VAR_14);
            if (VAR_38 != VAR_0) {
                return VAR_38;
            }
        }
        ++*VAR_14;
        return VAR_0;
    }
}
