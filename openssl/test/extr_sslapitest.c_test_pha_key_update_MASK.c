
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_5 ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_16 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_17(void)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if (!FUNC_11(FUNC_15(FUNC_13(), FUNC_12(),
                                       VAR_4, 0,
                                       &VAR_8, &VAR_7, VAR_5, VAR_6)))
        return 0;

    if (!FUNC_11(FUNC_2(VAR_8, VAR_3))
        || !FUNC_11(FUNC_1(VAR_8, VAR_3))
        || !FUNC_11(FUNC_2(VAR_7, VAR_3))
        || !FUNC_11(FUNC_1(VAR_7, VAR_3)))
        goto end;

    FUNC_3(VAR_7, 1);

    if (!FUNC_11(FUNC_16(VAR_8, VAR_7, &VAR_10, &VAR_9,
                                      ((void*)0), ((void*)0))))
        goto end;

    if (!FUNC_11(FUNC_14(VAR_10, VAR_9,
                                         VAR_0)))
        goto end;

    FUNC_7(VAR_10, VAR_2, ((void*)0));
    if (!FUNC_11(FUNC_9(VAR_10)))
        goto end;

    if (!FUNC_11(FUNC_6(VAR_9, VAR_1)))
        goto end;


    if (!FUNC_10(FUNC_4(VAR_10), 1))
        goto end;


    if (!FUNC_11(FUNC_14(VAR_10, VAR_9,
                                         VAR_0)))
        goto end;

    FUNC_8(VAR_9);
    FUNC_8(VAR_10);

    VAR_11 = 1;

 end:
    FUNC_5(VAR_10);
    FUNC_5(VAR_9);
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);
    return VAR_11;
}
