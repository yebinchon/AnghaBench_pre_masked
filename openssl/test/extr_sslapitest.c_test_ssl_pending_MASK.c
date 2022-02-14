
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,size_t*) ;
 int FUNC_7 (int *,char*,int,size_t*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (size_t,int) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_3 ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_16 (int *,int *,int **,int **,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(int VAR_5)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    char VAR_11[] = "A test message";
    char VAR_12[5];
    size_t VAR_13, VAR_14;

    if (VAR_5 == 0) {
        if (!FUNC_11(FUNC_15(FUNC_13(),
                                           FUNC_12(),
                                           VAR_2, 0,
                                           &VAR_7, &VAR_6, VAR_3, VAR_4)))
            goto end;
    } else {

        if (!FUNC_11(FUNC_15(FUNC_1(),
                                           FUNC_0(),
                                           VAR_0, 0,
                                           &VAR_7, &VAR_6, VAR_3, VAR_4)))
            goto end;



    }

    if (!FUNC_11(FUNC_16(VAR_7, VAR_6, &VAR_9, &VAR_8,
                                             ((void*)0), ((void*)0)))
            || !FUNC_11(FUNC_14(VAR_9, VAR_8,
                                                VAR_1)))
        goto end;

    if (!FUNC_9(FUNC_5(VAR_8), 0)
            || !FUNC_8(FUNC_4(VAR_8))
            || !FUNC_9(FUNC_5(VAR_9), 0)
            || !FUNC_8(FUNC_4(VAR_9))
            || !FUNC_11(FUNC_7(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13))
            || !FUNC_10(VAR_13, sizeof(VAR_11))
            || !FUNC_11(FUNC_6(VAR_8, VAR_12, sizeof(VAR_12), &VAR_14))
            || !FUNC_10(VAR_14, sizeof(VAR_12))
            || !FUNC_9(FUNC_5(VAR_8), (int)(VAR_13 - VAR_14))
            || !FUNC_11(FUNC_4(VAR_8)))
        goto end;

    VAR_10 = 1;

 end:
    FUNC_3(VAR_9);
    FUNC_3(VAR_8);
    FUNC_2(VAR_7);
    FUNC_2(VAR_6);

    return VAR_10;
}
