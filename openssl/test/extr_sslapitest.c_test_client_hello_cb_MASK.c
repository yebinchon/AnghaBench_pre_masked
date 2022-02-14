
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_13 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(void)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0, VAR_12 = 0;

    if (!FUNC_8(FUNC_12(FUNC_10(), FUNC_9(),
                                       VAR_3, 0,
                                       &VAR_8, &VAR_7, VAR_4, VAR_6)))
        goto end;
    FUNC_2(VAR_8, VAR_5, &VAR_11);


    FUNC_3(VAR_7, VAR_2);

    if (!FUNC_8(FUNC_1(VAR_7,
                        "AES256-GCM-SHA384:ECDHE-ECDSA-AES256-GCM-SHA384"))
            || !FUNC_8(FUNC_13(VAR_8, VAR_7, &VAR_10,
                                             &VAR_9, ((void*)0), ((void*)0)))
            || !FUNC_6(FUNC_11(VAR_10, VAR_9,
                        VAR_1))




            || !FUNC_7(FUNC_5(VAR_10, -1),
                            VAR_1)
            || !FUNC_8(FUNC_11(VAR_10, VAR_9,
                                                VAR_0)))
        goto end;

    VAR_12 = 1;

end:
    FUNC_4(VAR_10);
    FUNC_4(VAR_9);
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);

    return VAR_12;
}
