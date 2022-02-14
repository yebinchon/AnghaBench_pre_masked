
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *,int *,int) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int *,int **,int **,int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int *,int *) ;
 int ** VAR_3 ;
 int FUNC_12 (int,int,int **,int **) ;

__attribute__((used)) static int FUNC_13(int VAR_4, int VAR_5)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    size_t VAR_11;



    VAR_2 = 0;
    VAR_1 = 1;

    if (!FUNC_12(VAR_4, VAR_5, &VAR_6, &VAR_7))
        goto end;

    if (!FUNC_7(FUNC_10(VAR_6, VAR_7, &VAR_8,
                                          &VAR_9, ((void*)0), ((void*)0))))
        goto end;

    if (!FUNC_7(FUNC_9(VAR_8, VAR_9,
                                                VAR_0))

            || !FUNC_6(VAR_5, VAR_2))
        goto end;

    FUNC_5(VAR_9);
    FUNC_5(VAR_8);
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    VAR_9 = VAR_8 = ((void*)0);
    VAR_6 = VAR_7 = ((void*)0);
    VAR_1 = 0;

    if (!FUNC_12(VAR_4, VAR_5, &VAR_6, &VAR_7))
        goto end;

    if (!FUNC_8(VAR_5, VAR_6, VAR_7, 0))
        goto end;


    VAR_2 = 0;
    VAR_1 = 1;
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    VAR_6 = VAR_7 = ((void*)0);

    if (!FUNC_12(VAR_4, VAR_5, &VAR_6, &VAR_7))
        goto end;

    if (!FUNC_7(FUNC_10(VAR_6, VAR_7, &VAR_8,
                                          &VAR_9, ((void*)0), ((void*)0))))
        goto end;

    FUNC_4(VAR_9, 1);

    if (!FUNC_7(FUNC_9(VAR_8, VAR_9,
                                                VAR_0))

            || !FUNC_6(VAR_5, VAR_2))
        goto end;


    if (!FUNC_11(VAR_8, VAR_9)
            || !FUNC_6(VAR_5 * 2, VAR_2))
        goto end;

    FUNC_5(VAR_9);
    FUNC_5(VAR_8);
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    VAR_8 = VAR_9 = ((void*)0);


    VAR_1 = 0;





    if (!FUNC_8(VAR_5, VAR_6, VAR_7, 1))
        goto end;

    VAR_10 = 1;

 end:
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
        FUNC_2(VAR_3[VAR_11]);
        VAR_3[VAR_11] = ((void*)0);
    }
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);

    return VAR_10;
}
