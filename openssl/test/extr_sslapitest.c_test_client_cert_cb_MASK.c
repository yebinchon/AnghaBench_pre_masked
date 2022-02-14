
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_9 (int *,int *,int **,int **,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(int VAR_10)
{
    SSL_CTX *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    SSL *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    if (!FUNC_4(FUNC_8(FUNC_6(),
                                       FUNC_5(),
                                       VAR_5,
                                       VAR_10 == 0 ? VAR_3
                                                : VAR_4,
                                       &VAR_12, &VAR_11, VAR_6, VAR_8)))
        goto end;





    FUNC_1(VAR_11, VAR_7);
    FUNC_2(VAR_12,
                       VAR_2 | VAR_1,
                       VAR_9);

    if (!FUNC_4(FUNC_9(VAR_12, VAR_11, &VAR_14, &VAR_13,
                                      ((void*)0), ((void*)0)))
            || !FUNC_4(FUNC_7(VAR_14, VAR_13,
                                                VAR_0)))
        goto end;

    VAR_15 = 1;

 end:
    FUNC_3(VAR_14);
    FUNC_3(VAR_13);
    FUNC_0(VAR_12);
    FUNC_0(VAR_11);

    return VAR_15;
}
