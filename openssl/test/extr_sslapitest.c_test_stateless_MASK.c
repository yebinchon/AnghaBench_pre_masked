
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_13 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int *,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(void)
{
    SSL_CTX *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    SSL *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12 = 0;

    if (!FUNC_8(FUNC_12(FUNC_10(), FUNC_9(),
                                       VAR_3, 0,
                                       &VAR_8, &VAR_9, VAR_4, VAR_6)))
        goto end;


    FUNC_0(VAR_9, VAR_2);

    if (!FUNC_8(FUNC_13(VAR_8, VAR_9, &VAR_10, &VAR_11,
                                      ((void*)0), ((void*)0)))

            || !FUNC_6(FUNC_11(VAR_10, VAR_11,
                                                 VAR_1))




            || !FUNC_7(FUNC_5(VAR_10), -1))
        goto end;


    FUNC_4(VAR_11);
    VAR_11 = ((void*)0);


    FUNC_2(VAR_8, VAR_5);
    FUNC_3(VAR_8, VAR_7);





    if (!FUNC_8(FUNC_13(VAR_8, VAR_9, &VAR_10, &VAR_11,
                                             ((void*)0), ((void*)0)))

            || !FUNC_6(FUNC_11(VAR_10, VAR_11,
                                                VAR_1))

            || !FUNC_7(FUNC_5(VAR_10), 0))
        goto end;


    FUNC_4(VAR_11);
    VAR_11 = ((void*)0);





    if (!FUNC_8(FUNC_13(VAR_8, VAR_9, &VAR_10, &VAR_11,
                                             ((void*)0), ((void*)0)))

            || !FUNC_6(FUNC_11(VAR_10, VAR_11,
                                                VAR_1))

            || !FUNC_7(FUNC_5(VAR_10), 0)

            || !FUNC_6(FUNC_11(VAR_10, VAR_11,
                                                VAR_1))

            || !FUNC_7(FUNC_5(VAR_10), 1)

            || !FUNC_8(FUNC_11(VAR_10, VAR_11,
                                                VAR_0)))
        goto end;

    FUNC_14(VAR_10, VAR_11);
    VAR_10 = VAR_11 = ((void*)0);
    VAR_12 = 1;

 end:
    FUNC_4(VAR_10);
    FUNC_4(VAR_11);
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);
    return VAR_12;

}
