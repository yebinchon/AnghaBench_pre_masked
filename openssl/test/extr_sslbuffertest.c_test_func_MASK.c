
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testdata ;
typedef int buf ;
typedef int SSL ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,char const*,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int ,int ,int **,int **,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(int VAR_7)
{
    int VAR_8 = 0;
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11;
    size_t VAR_12, VAR_13;
    const char VAR_14[] = "Test data";
    char VAR_15[sizeof(VAR_14)];

    if (!FUNC_10(FUNC_12(VAR_5, VAR_4, &VAR_9, &VAR_10,
                                      ((void*)0), ((void*)0)))) {
        FUNC_7("Test %d failed: Create SSL objects failed\n", VAR_7);
        goto end;
    }

    if (!FUNC_10(FUNC_11(VAR_9, VAR_10, VAR_1))) {
        FUNC_7("Test %d failed: Create SSL connection failed\n", VAR_7);
        goto end;
    }





    for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
        int VAR_16;






        for (VAR_11 = -1, VAR_12 = 0, VAR_16 = 0; VAR_16 != sizeof(VAR_14) && VAR_12 < 2;
             VAR_12++) {

            if (VAR_7 >= 1 && !FUNC_10(FUNC_3(VAR_10)))
                goto end;
            if (VAR_7 >= 2 && !FUNC_10(FUNC_1(VAR_10)))
                goto end;

            if (VAR_7 >= 3 && !FUNC_10(FUNC_1(VAR_10)))
                goto end;
            if (VAR_7 >= 4 && !FUNC_10(FUNC_3(VAR_10)))
                goto end;

            VAR_11 = FUNC_6(VAR_10, VAR_14 + VAR_16,
                            sizeof(VAR_14) - VAR_16);
            if (VAR_11 > 0) {
                VAR_16 += VAR_11;
            } else {
                int VAR_17 = FUNC_4(VAR_10, VAR_11);

                if (VAR_17 == VAR_3 ||
                    VAR_17 == VAR_2) {
                    FUNC_7("Test %d failed: Failed to write app data\n", VAR_7);
                    goto end;
                }
            }
        }
        if (!FUNC_9(VAR_16, sizeof(VAR_14)))
            goto end;





        for (VAR_11 = -1, VAR_12 = 0, VAR_16 = 0; VAR_16 != sizeof(VAR_14) &&
                 VAR_12 < VAR_0; VAR_12++)
        {
            if (VAR_7 >= 5 && !FUNC_10(FUNC_3(VAR_9)))
                goto end;

            if (VAR_7 >= 6 && !FUNC_10(FUNC_3(VAR_9)))
                goto end;
            if (VAR_7 >= 7 && !FUNC_10(FUNC_1(VAR_9)))
                goto end;
            if (VAR_7 >= 8 && !FUNC_10(FUNC_3(VAR_9)))
                goto end;

            VAR_11 = FUNC_5(VAR_9, VAR_15 + VAR_16, sizeof(VAR_15) - VAR_16);
            if (VAR_11 > 0) {
                VAR_16 += VAR_11;
            } else {
                int VAR_18 = FUNC_4(VAR_9, VAR_11);

                if (VAR_18 == VAR_3 ||
                    VAR_18 == VAR_2) {
                    FUNC_7("Test %d failed: Failed to read app data\n", VAR_7);
                    goto end;
                }
            }
        }
        if (!FUNC_8(VAR_15, VAR_16, VAR_14, sizeof(VAR_14)))
            goto end;
    }

    VAR_8 = 1;
 end:
    if (!VAR_8)
        FUNC_0(VAR_6);

    FUNC_2(VAR_10);
    FUNC_2(VAR_9);

    return VAR_8;
}
