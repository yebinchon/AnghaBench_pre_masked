
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int NPY_CLIPMODE ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(int VAR_5, npy_intp *VAR_6,
                        npy_intp *VAR_7,
                        npy_intp VAR_8,
                        NPY_CLIPMODE *VAR_9,
                        char **VAR_10, npy_intp *VAR_11)
{
    int VAR_12;
    char VAR_13;
    npy_intp VAR_14, VAR_15;





    if (VAR_8 != 0) {
        for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12) {
            if (VAR_6[VAR_12] == 0) {
                FUNC_0(VAR_4,
                        "cannot unravel if shape has zero entries (is empty).");
                return VAR_2;
            }
        }
    }

    VAR_0;
    VAR_13 = 0;
    while (VAR_8--) {
        npy_intp VAR_16 = 0;
        for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12) {
            VAR_15 = VAR_6[VAR_12];
            VAR_14 = *(npy_intp *)VAR_10[VAR_12];
            switch (VAR_9[VAR_12]) {
                case 129:
                    if (VAR_14 < 0 || VAR_14 >= VAR_15) {
                        VAR_13 = 1;
                        goto end_while;
                    }
                    break;
                case 128:
                    if (VAR_14 < 0) {
                        VAR_14 += VAR_15;
                        if (VAR_14 < 0) {
                            VAR_14 = VAR_14 % VAR_15;
                            if (VAR_14 != 0) {
                                VAR_14 += VAR_15;
                            }
                        }
                    }
                    else if (VAR_14 >= VAR_15) {
                        VAR_14 -= VAR_15;
                        if (VAR_14 >= VAR_15) {
                            VAR_14 = VAR_14 % VAR_15;
                        }
                    }
                    break;
                case 130:
                    if (VAR_14 < 0) {
                        VAR_14 = 0;
                    }
                    else if (VAR_14 >= VAR_15) {
                        VAR_14 = VAR_15 - 1;
                    }
                    break;

            }
            VAR_16 += VAR_14 * VAR_7[VAR_12];

            VAR_10[VAR_12] += VAR_11[VAR_12];
        }
        *(npy_intp *)VAR_10[VAR_5] = VAR_16;
        VAR_10[VAR_5] += VAR_11[VAR_5];
    }
end_while:
    VAR_1;
    if (VAR_13) {
        FUNC_0(VAR_4,
              "invalid entry in coordinates array");
        return VAR_2;
    }
    return VAR_3;
}
