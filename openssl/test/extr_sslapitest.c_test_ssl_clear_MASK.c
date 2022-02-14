
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_11 (int *,int *,int **,int **,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(int VAR_5)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;







    if (!FUNC_6(FUNC_10(FUNC_8(), FUNC_7(),
                                       VAR_2, 0,
                                       &VAR_7, &VAR_6, VAR_3, VAR_4))
            || (VAR_5 == 1
                && !FUNC_6(FUNC_1(VAR_6,
                                                            VAR_1)))
            || !FUNC_6(FUNC_11(VAR_7, VAR_6, &VAR_9,
                                          &VAR_8, ((void*)0), ((void*)0)))
            || !FUNC_6(FUNC_9(VAR_9, VAR_8,
                                                VAR_0)))
        goto end;

    FUNC_5(VAR_8);
    FUNC_5(VAR_9);
    FUNC_3(VAR_9);
    VAR_9 = ((void*)0);


    if (!FUNC_6(FUNC_2(VAR_8)))
        goto end;

    if (!FUNC_6(FUNC_11(VAR_7, VAR_6, &VAR_9, &VAR_8,
                                             ((void*)0), ((void*)0)))
            || !FUNC_6(FUNC_9(VAR_9, VAR_8,
                                                VAR_0))
            || !FUNC_6(FUNC_4(VAR_8)))
        goto end;

    FUNC_5(VAR_8);
    FUNC_5(VAR_9);

    VAR_10 = 1;

 end:
    FUNC_3(VAR_9);
    FUNC_3(VAR_8);
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);

    return VAR_10;
}
