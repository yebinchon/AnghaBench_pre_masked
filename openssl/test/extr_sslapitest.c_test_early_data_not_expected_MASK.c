
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int,size_t*) ;
 int FUNC_7 (int *,int ,int ,size_t*) ;
 int FUNC_8 (int *,int ,int ,size_t*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (unsigned char*,size_t,int ,int ) ;
 int FUNC_13 (size_t,int ) ;
 int FUNC_14 (int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_15 (int **,int **,int **,int **,int **,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(int VAR_5)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    SSL_SESSION *VAR_11 = ((void*)0);
    unsigned char VAR_12[20];
    size_t VAR_13, VAR_14;

    if (!FUNC_14(FUNC_15(&VAR_6, &VAR_7, &VAR_8,
                                        &VAR_9, &VAR_11, VAR_5)))
        goto end;


    if (!FUNC_14(FUNC_7(VAR_8, VAR_0, FUNC_16(VAR_0),
                                        &VAR_14)))
        goto end;





    if (!FUNC_11(FUNC_2(VAR_9), 0)
     || !FUNC_10(FUNC_3(VAR_8), 0)
     || !FUNC_9(FUNC_5(VAR_9),
                     VAR_2)
     || !FUNC_10(FUNC_2(VAR_9), 0)
     || !FUNC_9(FUNC_5(VAR_8),
                     VAR_2))
        goto end;


    if (!FUNC_14(FUNC_8(VAR_8, VAR_1, FUNC_16(VAR_1), &VAR_14))
            || !FUNC_13(VAR_14, FUNC_16(VAR_1)))
        goto end;

    if (!FUNC_14(FUNC_6(VAR_9, VAR_12, sizeof(VAR_12), &VAR_13))
            || !FUNC_12(VAR_12, VAR_13, VAR_1, FUNC_16(VAR_1)))
        goto end;

    VAR_10 = 1;

 end:
    FUNC_1(VAR_11);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    VAR_3 = VAR_4 = ((void*)0);
    FUNC_4(VAR_9);
    FUNC_4(VAR_8);
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
    return VAR_10;
}
