
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef scalar_t__ npy_int32 ;
typedef int npy_bool ;
typedef scalar_t__ TrimMode ;
typedef scalar_t__ DigitMode ;
typedef int BigInt ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int,int ,scalar_t__,int ,scalar_t__,char*,int,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

__attribute__((used)) static npy_uint32
FUNC_4 (char *VAR_5, npy_uint32 VAR_6, BigInt *VAR_7,
                  npy_int32 VAR_8, char VAR_9, npy_uint32 VAR_10,
                  npy_bool VAR_11, DigitMode VAR_12,
                  npy_int32 VAR_13, TrimMode VAR_14,
                  npy_int32 VAR_15, npy_int32 VAR_16)
{
    npy_int32 VAR_17;
    npy_int32 VAR_18;
    char *VAR_19;
    npy_int32 VAR_20;
    npy_int32 VAR_21;

    if (VAR_12 != VAR_1) {
        FUNC_0(VAR_13 >= 0);
    }


    FUNC_0(VAR_6 > 0);

    VAR_19 = VAR_5;


    VAR_21 = 1 + (VAR_9 == '-' || VAR_9 == '+');
    if (VAR_15 > VAR_21) {
        int VAR_22;
        for (VAR_22 = 0; VAR_22 < VAR_15 - VAR_21 && VAR_6 > 1; VAR_22++) {
            *VAR_19 = ' ';
            VAR_19++;
            --VAR_6;
        }
    }

    if (VAR_9 == '+' && VAR_6 > 1) {
        *VAR_19 = '+';
        VAR_19++;
        --VAR_6;
    }
    else if (VAR_9 == '-' && VAR_6 > 1) {
        *VAR_19 = '-';
        VAR_19++;
        --VAR_6;
    }

    VAR_18 = FUNC_1(VAR_7, VAR_8, VAR_10, VAR_11,
                        VAR_12, VAR_0, VAR_13 + 1,
                        VAR_19, VAR_6, &VAR_17);

    FUNC_0(VAR_18 > 0);
    FUNC_0(VAR_18 <= VAR_6);


    if (VAR_6 > 1) {
        VAR_19 += 1;
        VAR_6 -= 1;
    }


    VAR_20 = VAR_18-1;
    if (VAR_20 > 0 && VAR_6 > 1) {
        npy_int32 VAR_23 = (npy_int32)VAR_6 - 2;

        if (VAR_20 > VAR_23) {
            VAR_20 = VAR_23;
        }

        FUNC_3(VAR_19 + 1, VAR_19, VAR_20);
        VAR_19[0] = '.';
        VAR_19 += (1 + VAR_20);
        VAR_6 -= (1 + VAR_20);
    }


    if (VAR_14 != VAR_2 && VAR_20 == 0 &&
            VAR_6 > 1) {
        *VAR_19 = '.';
        ++VAR_19;
        --VAR_6;
    }

    if (VAR_14 == VAR_3) {

        if (VAR_20 == 0 && VAR_6 > 1) {
            *VAR_19 = '0';
            ++VAR_19;
            --VAR_6;
            ++VAR_20;
        }
    }
    else if (VAR_14 == VAR_4 &&
            VAR_12 != VAR_1) {

        if (VAR_13 > (npy_int32)VAR_20) {
            char *VAR_24;

            npy_int32 VAR_25 = (VAR_13 - VAR_20);

            if (VAR_25 > (npy_int32)VAR_6 - 1) {
                VAR_25 = (npy_int32)VAR_6 - 1;
            }

            for (VAR_24 = VAR_19 + VAR_25; VAR_19 < VAR_24; ++VAR_19) {
                *VAR_19 = '0';
                ++VAR_20;
            }
        }
    }






    if (VAR_13 >= 0 && VAR_14 != VAR_4 && VAR_20 > 0) {
        --VAR_19;
        while (*VAR_19 == '0') {
            --VAR_19;
            ++VAR_6;
            --VAR_20;
        }
        if (VAR_14 == VAR_3 && *VAR_19 == '.') {
            ++VAR_19;
            *VAR_19 = '0';
            --VAR_6;
            ++VAR_20;
        }
        ++VAR_19;
    }


    if (VAR_6 > 1) {
        char VAR_26[7];
        npy_int32 VAR_27[5];
        npy_int32 VAR_28, VAR_29, VAR_30;

        if (VAR_16 > 5) {
            VAR_16 = 5;
        }
        if (VAR_16 < 0) {
            VAR_16 = 2;
        }

        VAR_26[0] = 'e';
        if (VAR_17 >= 0) {
            VAR_26[1] = '+';
        }
        else {
            VAR_26[1] = '-';
            VAR_17 = -VAR_17;
        }

        FUNC_0(VAR_17 < 100000);


        for (VAR_28 = 0; VAR_28 < 5; VAR_28++) {
            VAR_27[VAR_28] = VAR_17 % 10;
            VAR_17 /= 10;
        }

        for (VAR_28 = 5; VAR_28 > VAR_16 && VAR_27[VAR_28-1] == 0; VAR_28--) {
        }
        VAR_29 = VAR_28;

        for (VAR_28 = VAR_29; VAR_28 > 0; VAR_28--) {
            VAR_26[2 + (VAR_29-VAR_28)] = (char)('0' + VAR_27[VAR_28-1]);
        }


        VAR_30 = VAR_29 + 2;
        if (VAR_30 > (npy_int32)VAR_6 - 1) {
            VAR_30 = (npy_int32)VAR_6 - 1;
        }
        FUNC_2(VAR_19, VAR_26, VAR_30);
        VAR_19 += VAR_30;
        VAR_6 -= VAR_30;
    }


    FUNC_0(VAR_6 > 0);
    VAR_19[0] = '\0';

    return VAR_19 - VAR_5;
}
