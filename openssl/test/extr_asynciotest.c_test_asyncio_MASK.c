
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testdata ;
typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,int,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_5 ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_17 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_18(int VAR_8)
{
    SSL_CTX *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    SSL *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    BIO *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    int VAR_15 = 0, VAR_16;
    size_t VAR_17, VAR_18;
    const char VAR_19[] = "Test data";
    char VAR_20[sizeof(VAR_19)];

    if (!FUNC_11(FUNC_16(FUNC_13(), FUNC_12(),
                                       VAR_4, 0,
                                       &VAR_9, &VAR_10, VAR_5, VAR_7)))
        goto end;







    if (VAR_8 == 1)
        VAR_6 = 1;


    VAR_13 = FUNC_1(FUNC_14());
    VAR_14 = FUNC_1(FUNC_14());
    if (!FUNC_9(VAR_13)
            || !FUNC_9(VAR_14)) {
        FUNC_0(VAR_13);
        FUNC_0(VAR_14);
        goto end;
    }


    if (!FUNC_11(FUNC_17(VAR_9, VAR_10, &VAR_11,
                                      &VAR_12, VAR_13, VAR_14))
            || !FUNC_11(FUNC_15(VAR_11, VAR_12,
                          VAR_1)))
        goto end;





    for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
        int VAR_21;





        for (VAR_16 = -1, VAR_17 = 0, VAR_21 = 0; VAR_21 != sizeof(VAR_19) && VAR_17 < 2;
            VAR_17++) {
            VAR_16 = FUNC_6(VAR_12, VAR_19 + VAR_21,
                sizeof(VAR_19) - VAR_21);
            if (VAR_16 > 0) {
                VAR_21 += VAR_16;
            } else {
                int VAR_22 = FUNC_4(VAR_12, VAR_16);

                if (!FUNC_7(VAR_22 == VAR_3 ||
                                VAR_22 == VAR_2))
                    goto end;
            }
        }
        if (!FUNC_10(VAR_21, sizeof(VAR_19)))
            goto end;






        for (VAR_16 = -1, VAR_17 = 0, VAR_21 = 0; VAR_21 != sizeof(VAR_19) &&
                VAR_17 < VAR_0; VAR_17++) {
            VAR_16 = FUNC_5(VAR_11, VAR_20 + VAR_21, sizeof(VAR_20) - VAR_21);
            if (VAR_16 > 0) {
                VAR_21 += VAR_16;
            } else {
                int VAR_23 = FUNC_4(VAR_11, VAR_16);

                if (!FUNC_7(VAR_23 == VAR_3 ||
                                VAR_23 == VAR_2))
                    goto end;
            }
        }
        if (!FUNC_8(VAR_19, sizeof(VAR_19), VAR_20, VAR_21))
            goto end;
    }


    FUNC_3(VAR_12);
    FUNC_3(VAR_11);
    VAR_12 = VAR_11 = ((void*)0);

    VAR_15 = 1;

 end:
    FUNC_3(VAR_12);
    FUNC_3(VAR_11);
    FUNC_2(VAR_10);
    FUNC_2(VAR_9);

    return VAR_15;
}
