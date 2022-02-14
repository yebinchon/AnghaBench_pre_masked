
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_10 (int *,int *,int **,int **,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(void)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if (!FUNC_7(FUNC_9(FUNC_1(),
                                       FUNC_0(),
                                       VAR_0, 0,
                                       &VAR_7, &VAR_8, VAR_3, VAR_5)))
        return 0;

    FUNC_5(VAR_7, VAR_2);
    FUNC_3(VAR_7, VAR_4);
    FUNC_4(VAR_7, VAR_6);

    if (!FUNC_7(FUNC_10(VAR_7, VAR_8, &VAR_9, &VAR_10,
                                      ((void*)0), ((void*)0)))
            || !FUNC_7(FUNC_8(VAR_9, VAR_10,
                                                VAR_1)))
        goto end;

    VAR_11 = 1;
 end:
    FUNC_6(VAR_9);
    FUNC_6(VAR_10);
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);

    return VAR_11;
}
