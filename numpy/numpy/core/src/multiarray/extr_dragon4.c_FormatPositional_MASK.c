
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_uint32 ;
typedef scalar_t__ npy_int32 ;
typedef int npy_bool ;
typedef scalar_t__ TrimMode ;
typedef scalar_t__ DigitMode ;
typedef scalar_t__ CutoffMode ;
typedef int BigInt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,char*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,scalar_t__) ;

__attribute__((used)) static npy_uint32
FUNC_3(char *VAR_5, npy_uint32 VAR_6, BigInt *VAR_7,
                 npy_int32 VAR_8, char VAR_9, npy_uint32 VAR_10,
                 npy_bool VAR_11, DigitMode VAR_12,
                 CutoffMode VAR_13, npy_int32 VAR_14,
                 TrimMode VAR_15, npy_int32 VAR_16,
                 npy_int32 VAR_17)
{
    npy_int32 VAR_18;
    npy_int32 VAR_19, VAR_20=0, VAR_21=0;

    npy_int32 VAR_22 = (npy_int32)VAR_6 - 1, VAR_23 = 0;


    npy_int32 VAR_24 = 0, VAR_25;

    FUNC_0(VAR_6 > 0);

    if (VAR_12 != VAR_1) {
        FUNC_0(VAR_14 >= 0);
    }

    if (VAR_9 == '+' && VAR_23 < VAR_22) {
        VAR_5[VAR_23++] = '+';
        VAR_21 = 1;
    }
    else if (VAR_9 == '-' && VAR_23 < VAR_22) {
        VAR_5[VAR_23++] = '-';
        VAR_21 = 1;
    }

    VAR_19 = FUNC_1(VAR_7, VAR_8, VAR_10, VAR_11,
                        VAR_12, VAR_13, VAR_14, VAR_5 + VAR_21,
                        VAR_22 - VAR_21, &VAR_18);

    FUNC_0(VAR_19 > 0);
    FUNC_0(VAR_19 <= VAR_6);


    if (VAR_18 >= 0) {

        VAR_20 = VAR_18+1;
        if (VAR_19 <= VAR_20) {
            npy_int32 VAR_26 = VAR_20 - VAR_19;
            VAR_23 += VAR_19;


            if (VAR_23 + VAR_26 > VAR_22) {
                VAR_26 = VAR_22 - VAR_23;
            }


            VAR_19 += VAR_26;
            for ( ; VAR_26 > 0; VAR_26--) {
                VAR_5[VAR_23++] = '0';
            }
        }

        else if (VAR_19 > VAR_20) {
            npy_int32 VAR_27;

            VAR_24 = VAR_19 - VAR_20;
            VAR_27 = VAR_22 - VAR_20 - 1 - VAR_23;
            if (VAR_24 > VAR_27) {
                VAR_24 = VAR_27;
            }

            FUNC_2(VAR_5 + VAR_23 + VAR_20 + 1,
                    VAR_5 + VAR_23 + VAR_20, VAR_24);
            VAR_23 += VAR_20;
            VAR_5[VAR_23] = '.';
            VAR_19 = VAR_20 + 1 + VAR_24;
            VAR_23 += 1 + VAR_24;
        }
    }
    else {

        npy_int32 VAR_28 = 0;
        if (VAR_23 + 2 < VAR_22) {
            npy_int32 VAR_29, VAR_30, VAR_31, VAR_32;

            VAR_29 = VAR_22 - 2 - VAR_23;
            VAR_28 = -(VAR_18 + 1);
            if (VAR_28 > VAR_29) {
                VAR_28 = VAR_29;
            }

            VAR_30 = 2 + VAR_28;





            VAR_24 = VAR_19;
            VAR_31 = VAR_22 - VAR_30 - VAR_23;
            if (VAR_24 > VAR_31) {
                VAR_24 = VAR_31;
            }

            FUNC_2(VAR_5 + VAR_23 + VAR_30, VAR_5 + VAR_23,
                    VAR_24);


            for (VAR_32 = 2; VAR_32 < VAR_30; ++VAR_32) {
                VAR_5[VAR_23 + VAR_32] = '0';
            }


            VAR_24 += VAR_28;
            VAR_19 = VAR_24;
        }


        if (VAR_23 + 1 < VAR_22) {
            VAR_5[VAR_23+1] = '.';
        }


        if (VAR_23 < VAR_22) {
            VAR_5[VAR_23] = '0';
            VAR_19 += 1;
        }
        VAR_20 = 1;
        VAR_23 += 2 + VAR_24;
    }


    if (VAR_15 != VAR_2 && VAR_24 == 0 &&
            VAR_23 < VAR_22) {
        VAR_5[VAR_23++] = '.';
    }

    VAR_25 = VAR_14;
    if (VAR_13 == VAR_0 && VAR_14 >= 0) {
        VAR_25 = VAR_14 - VAR_20;
    }

    if (VAR_15 == VAR_3) {

        if (VAR_24 == 0 && VAR_23 < VAR_22) {
            VAR_5[VAR_23++] = '0';
            VAR_24++;
        }
    }
    else if (VAR_15 == VAR_4 &&
             VAR_12 != VAR_1 &&
             VAR_25 > VAR_24 &&
             VAR_23 < VAR_22) {


        npy_int32 VAR_33 = VAR_25 - VAR_24;
        if (VAR_23 + VAR_33 > VAR_22) {
            VAR_33 = VAR_22 - VAR_23;
        }
        VAR_24 += VAR_33;

        for ( ; VAR_33 > 0; VAR_33--) {
            VAR_5[VAR_23++] = '0';
        }
    }






    if (VAR_14 >= 0 && VAR_15 != VAR_4 && VAR_24 > 0) {
        while (VAR_5[VAR_23-1] == '0') {
            VAR_23--;
            VAR_24--;
        }
        if (VAR_15 == VAR_3 && VAR_5[VAR_23-1] == '.') {
            VAR_5[VAR_23++] = '0';
            VAR_24++;
        }
    }


    if (VAR_17 >= VAR_24) {
        npy_int32 VAR_34 = VAR_17 - VAR_24;


        if (VAR_15 == VAR_2 && VAR_24 == 0
                && VAR_23 < VAR_22) {
            VAR_5[VAR_23++] = ' ';
        }

        if (VAR_23 + VAR_34 > VAR_22) {
            VAR_34 = VAR_22 - VAR_23;
        }

        for ( ; VAR_34 > 0; VAR_34--) {
            VAR_5[VAR_23++] = ' ';
        }
    }

    if (VAR_16 > VAR_20 + VAR_21) {
        npy_int32 VAR_35 = VAR_16 - (VAR_20 + VAR_21);
        npy_int32 VAR_36 = VAR_23;

        if (VAR_36 + VAR_35 > VAR_22) {
            VAR_36 = VAR_22 - VAR_35;
        }

        if (VAR_36 > 0) {
            FUNC_2(VAR_5 + VAR_35, VAR_5, VAR_36);
        }
        VAR_23 = VAR_35 + VAR_36;
        for ( ; VAR_35 > 0; VAR_35--) {
            VAR_5[VAR_35 - 1] = ' ';
        }
    }


    FUNC_0(VAR_23 <= VAR_22);
    VAR_5[VAR_23] = '\0';

    return VAR_23;
}
