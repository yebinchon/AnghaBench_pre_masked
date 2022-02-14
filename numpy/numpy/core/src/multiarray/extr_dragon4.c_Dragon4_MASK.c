
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


typedef scalar_t__ npy_uint32 ;
typedef int npy_int32 ;
typedef double const npy_float64 ;
typedef int npy_bool ;
struct TYPE_28__ {int length; int* blocks; } ;
typedef scalar_t__ DigitMode ;
typedef scalar_t__ CutoffMode ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int const) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int const) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_15 (int) ;
 scalar_t__ const VAR_2 ;
 scalar_t__ FUNC_16 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_17 (double const) ;

__attribute__((used)) static npy_uint32
FUNC_18(BigInt *VAR_4, const npy_int32 VAR_5,
        const npy_uint32 VAR_6, const npy_bool VAR_7,
        const DigitMode VAR_8, const CutoffMode VAR_9,
        npy_int32 VAR_10, char *VAR_11,
        npy_uint32 VAR_12, npy_int32 *VAR_13)
{
    char *VAR_14 = VAR_11;
    BigInt *VAR_15 = &VAR_4[0];
    BigInt *VAR_16 = &VAR_4[1];
    BigInt *VAR_17 = &VAR_4[2];
    BigInt *VAR_18 = &VAR_4[3];
    BigInt *VAR_19;
    BigInt *VAR_20 = &VAR_4[4];

    BigInt *VAR_21 = &VAR_4[5];
    BigInt *VAR_22 = &VAR_4[6];

    const npy_float64 VAR_23 = 0.30102999566398119521373889472449;
    npy_int32 VAR_24, VAR_25, VAR_26;
    npy_uint32 VAR_27;
    npy_uint32 VAR_28;
    npy_bool VAR_29 = FUNC_4(VAR_15);
    npy_int32 VAR_30;


    npy_bool VAR_31, VAR_32, VAR_33;

    FUNC_15(VAR_12 > 0);


    if (FUNC_5(VAR_15)) {
        *VAR_14 = '0';
        *VAR_13 = 0;
        return 1;
    }

    FUNC_2(VAR_17, VAR_15);

    if (VAR_7) {

        if (VAR_5 > 0) {
            FUNC_14(VAR_17, VAR_5 + 2);

            FUNC_13(VAR_16, 4);

            FUNC_12(VAR_18, VAR_5);

            FUNC_12(VAR_20, VAR_5 + 1);
        }

        else {






            FUNC_14(VAR_17, 2);

            FUNC_12(VAR_16, -VAR_5 + 2);

            FUNC_13(VAR_18, 1);

            FUNC_13(VAR_20, 2);
        }


        VAR_19 = VAR_20;
    }
    else {

        if (VAR_5 > 0) {

            FUNC_14(VAR_17, VAR_5 + 1);

            FUNC_13(VAR_16, 2);

            FUNC_12(VAR_18, VAR_5);
        }

        else {






            FUNC_14(VAR_17, 1);

            FUNC_12(VAR_16, -VAR_5 + 1);

            FUNC_13(VAR_18, 1);
        }


        VAR_19 = VAR_18;
    }
    VAR_24 = (npy_int32)(
       FUNC_17((npy_float64)((npy_int32)VAR_6 + VAR_5) * VAR_23 - 0.69));
    if (VAR_10 >= 0 && VAR_9 == VAR_0 &&
            VAR_24 <= -VAR_10) {
        VAR_24 = -VAR_10 + 1;
    }



    if (VAR_24 > 0) {

        FUNC_10(VAR_16, VAR_24, VAR_21);
    }
    else if (VAR_24 < 0) {




        BigInt *VAR_34=VAR_21, *VAR_35=VAR_22;
        FUNC_11(VAR_35, -VAR_24, VAR_34);

        FUNC_6(VAR_34, VAR_17, VAR_35);
        FUNC_2(VAR_17, VAR_34);

        FUNC_6(VAR_34, VAR_18, VAR_35);
        FUNC_2(VAR_18, VAR_34);

        if (VAR_19 != VAR_18) {
            FUNC_8(VAR_19, VAR_18);
        }
    }


    if (FUNC_1(VAR_17, VAR_16) >= 0) {





        VAR_24 = VAR_24 + 1;
    }
    else {





        FUNC_7(VAR_17);
        FUNC_7(VAR_18);
        if (VAR_19 != VAR_18) {
            FUNC_8(VAR_19, VAR_18);
        }
    }





    VAR_25 = VAR_24 - VAR_12;
    if (VAR_10 >= 0) {
        npy_int32 VAR_36;

        if (VAR_9 == VAR_1) {
            VAR_36 = VAR_24 - VAR_10;
            if (VAR_36 > VAR_25) {
                VAR_25 = VAR_36;
            }
        }



        else {
            VAR_36 = -VAR_10;
            if (VAR_36 > VAR_25) {
                VAR_25 = VAR_36;
            }
        }
    }


    *VAR_13 = VAR_24-1;
    FUNC_15(VAR_16->length > 0);
    VAR_26 = VAR_16->blocks[VAR_16->length - 1];
    if (VAR_26 < 8 || VAR_26 > 429496729) {
        npy_uint32 VAR_37, VAR_38;
        VAR_37 = FUNC_16(VAR_26);
        FUNC_15(VAR_37 < 3 || VAR_37 > 27);
        VAR_38 = (32 + 27 - VAR_37) % 32;

        FUNC_14(VAR_16, VAR_38);
        FUNC_14(VAR_17, VAR_38);
        FUNC_14(VAR_18, VAR_38);
        if (VAR_19 != VAR_18) {
            FUNC_8(VAR_19, VAR_18);
        }
    }

    if (VAR_8 == VAR_2) {






        for (;;) {
            BigInt *VAR_39 = VAR_21;

            VAR_24 = VAR_24-1;


            VAR_27 =
                FUNC_3(VAR_17, VAR_16);
            FUNC_15(VAR_27 < 10);


            FUNC_0(VAR_39, VAR_17, VAR_19);





            VAR_30 = FUNC_1(VAR_17, VAR_18);
            VAR_31 = VAR_29 ? (VAR_30 <= 0) : (VAR_30 < 0);
            VAR_30 = FUNC_1(VAR_39, VAR_16);
            VAR_32 = VAR_29 ? (VAR_30 >= 0) : (VAR_30 > 0);
            if (VAR_31 | VAR_32 | (VAR_24 == VAR_25))
                break;


            *VAR_14 = (char)('0' + VAR_27);
            ++VAR_14;


            FUNC_7(VAR_17);
            FUNC_7(VAR_18);
            if (VAR_19 != VAR_18) {
                FUNC_8(VAR_19, VAR_18);
            }
        }
    }
    else {





        VAR_31 = VAR_3;
        VAR_32 = VAR_3;

        for (;;) {
            VAR_24 = VAR_24-1;


            VAR_27 =
                FUNC_3(VAR_17, VAR_16);
            FUNC_15(VAR_27 < 10);

            if ((VAR_17->length == 0) |
                    (VAR_24 == VAR_25)) {
                break;
            }


            *VAR_14 = (char)('0' + VAR_27);
            ++VAR_14;


            FUNC_7(VAR_17);
        }
    }


    VAR_33 = VAR_31;


    if (VAR_31 == VAR_32) {
        npy_int32 VAR_40;
        FUNC_9(VAR_17);
        VAR_40 = FUNC_1(VAR_17, VAR_16);
        VAR_33 = VAR_40 < 0;





        if (VAR_40 == 0) {
            VAR_33 = (VAR_27 & 1) == 0;
        }
    }


    if (VAR_33) {
        *VAR_14 = (char)('0' + VAR_27);
        ++VAR_14;
    }
    else {

        if (VAR_27 == 9) {

            for (;;) {

                if (VAR_14 == VAR_11) {

                    *VAR_14 = '1';
                    ++VAR_14;
                    *VAR_13 += 1;
                    break;
                }

                --VAR_14;
                if (*VAR_14 != '9') {

                    *VAR_14 += 1;
                    ++VAR_14;
                    break;
                }
            }
        }
        else {

            *VAR_14 = (char)('0' + VAR_27 + 1);
            ++VAR_14;
        }
    }


    VAR_28 = (npy_uint32)(VAR_14 - VAR_11);
    FUNC_15(VAR_28 <= VAR_12);
    return VAR_28;
}
