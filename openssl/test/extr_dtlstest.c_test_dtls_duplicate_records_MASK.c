
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int ,int ,int,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_10 (int *,int *,int **,int **,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(void)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (!FUNC_7(FUNC_9(FUNC_2(),
                                       FUNC_1(),
                                       VAR_0, 0,
                                       &VAR_6, &VAR_7, VAR_3, VAR_4)))
        return 0;

    if (!FUNC_7(FUNC_10(VAR_6, VAR_7, &VAR_8, &VAR_9,
                                      ((void*)0), ((void*)0))))
        goto end;

    FUNC_3(VAR_9, VAR_5);
    FUNC_3(VAR_8, VAR_5);

    FUNC_0(FUNC_6(VAR_9), VAR_1, 1, ((void*)0));
    FUNC_0(FUNC_6(VAR_8), VAR_1, 1, ((void*)0));

    if (!FUNC_7(FUNC_8(VAR_8, VAR_9, VAR_2)))
        goto end;

    VAR_10 = 1;
 end:
    FUNC_5(VAR_8);
    FUNC_5(VAR_9);
    FUNC_4(VAR_6);
    FUNC_4(VAR_7);

    return VAR_10;
}
