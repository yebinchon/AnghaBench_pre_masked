
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_4 ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,char*) ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_20 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_21(int VAR_10)
{
    char *VAR_11 = "test", *VAR_12 = "password", *VAR_13;
    SSL_CTX *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    SSL *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    int VAR_18, VAR_19 = 0;

    VAR_9 = FUNC_2(((void*)0));
    if (!FUNC_12(VAR_9))
        goto end;

    if (VAR_10 == 0 || VAR_10 == 1) {
        if (!FUNC_13(FUNC_16(VAR_11, VAR_12)))
            goto end;
    } else {
        if (VAR_10 == 4 || VAR_10 == 5) {
            if (!FUNC_13(FUNC_17(VAR_11, VAR_12, VAR_8)))
                goto end;
            VAR_13 = VAR_8;
        } else {
            VAR_13 = VAR_6;
        }
        if (!FUNC_10(FUNC_1(VAR_9, VAR_13), VAR_0))
            goto end;
    }

    if (!FUNC_13(FUNC_19(FUNC_15(), FUNC_14(),
                                       VAR_3, 0,
                                       &VAR_15, &VAR_14, VAR_4, VAR_5)))
        goto end;

    if (!FUNC_11(FUNC_8(VAR_15, VAR_7), 0)
            || !FUNC_13(FUNC_4(VAR_14, "SRP-AES-128-CBC-SHA"))
            || !FUNC_13(FUNC_5(VAR_15, VAR_2))
            || !FUNC_13(FUNC_5(VAR_14, VAR_2))
            || !FUNC_11(FUNC_7(VAR_14, VAR_11), 0))
        goto end;

    if (VAR_10 % 2 == 1) {
        if (!FUNC_11(FUNC_6(VAR_14, "badpass"), 0))
            goto end;
    } else {
        if (!FUNC_11(FUNC_6(VAR_14, VAR_12), 0))
            goto end;
    }

    if (!FUNC_13(FUNC_20(VAR_15, VAR_14, &VAR_17, &VAR_16,
                                      ((void*)0), ((void*)0))))
        goto end;

    VAR_18 = FUNC_18(VAR_17, VAR_16, VAR_1);
    if (VAR_18) {
        if (!FUNC_13(VAR_10 % 2 == 0))
            goto end;
    } else {
        if (!FUNC_13(VAR_10 % 2 == 1))
            goto end;
    }

    VAR_19 = 1;

 end:
    FUNC_0(VAR_9);
    VAR_9 = ((void*)0);
    FUNC_9(VAR_17);
    FUNC_9(VAR_16);
    FUNC_3(VAR_15);
    FUNC_3(VAR_14);

    return VAR_19;
}
