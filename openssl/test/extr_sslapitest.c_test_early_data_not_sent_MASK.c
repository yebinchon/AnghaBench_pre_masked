
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int,size_t*) ;
 int FUNC_5 (int *,unsigned char*,int,size_t*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,size_t*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (unsigned char*,size_t,int ,int ) ;
 int FUNC_11 (size_t,int ) ;
 int FUNC_12 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_13 (int **,int **,int **,int **,int **,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(int VAR_6)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    SSL_SESSION *VAR_12 = ((void*)0);
    unsigned char VAR_13[20];
    size_t VAR_14, VAR_15;

    if (!FUNC_12(FUNC_13(&VAR_7, &VAR_8, &VAR_9,
                                        &VAR_10, &VAR_12, VAR_6)))
        goto end;


    FUNC_6(VAR_9);
    if (!FUNC_8(FUNC_7(VAR_9, VAR_0, FUNC_14(VAR_0), &VAR_15)))
        goto end;


    if (!FUNC_9(FUNC_4(VAR_10, VAR_13, sizeof(VAR_13),
                                         &VAR_14),
                     VAR_3)
            || !FUNC_11(VAR_14, 0)
            || !FUNC_9(FUNC_3(VAR_10),
                            VAR_2)
            || !FUNC_9(FUNC_3(VAR_9),
                            VAR_2))
        goto end;


    if (!FUNC_12(FUNC_7(VAR_9, VAR_0, FUNC_14(VAR_0), &VAR_15))
            || !FUNC_11(VAR_15, FUNC_14(VAR_0))
            || !FUNC_12(FUNC_5(VAR_10, VAR_13, sizeof(VAR_13), &VAR_14))
            || !FUNC_10(VAR_13, VAR_14, VAR_0, FUNC_14(VAR_0))
            || !FUNC_7(VAR_10, VAR_1, FUNC_14(VAR_1), &VAR_15)
            || !FUNC_11(VAR_15, FUNC_14(VAR_1)))
        goto end;

    if (!FUNC_12(FUNC_5(VAR_9, VAR_13, sizeof(VAR_13), &VAR_14))
            || !FUNC_10(VAR_13, VAR_14, VAR_1, FUNC_14(VAR_1)))
        goto end;

    VAR_11 = 1;

 end:
    FUNC_1(VAR_12);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    VAR_4 = VAR_5 = ((void*)0);
    FUNC_2(VAR_10);
    FUNC_2(VAR_9);
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);
    return VAR_11;
}
