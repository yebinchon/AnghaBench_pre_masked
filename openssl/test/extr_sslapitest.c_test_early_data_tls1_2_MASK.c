
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int,size_t*) ;
 int FUNC_5 (int *,unsigned char*,int,size_t*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,size_t*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (unsigned char*,size_t,int ,int ) ;
 int FUNC_12 (size_t,int ) ;
 int FUNC_13 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_14 (int **,int **,int **,int **,int *,int) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(int VAR_8)
{
    SSL_CTX *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    SSL *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    int VAR_13 = 0;
    unsigned char VAR_14[20];
    size_t VAR_15, VAR_16;

    if (!FUNC_13(FUNC_14(&VAR_9, &VAR_10, &VAR_11,
                                        &VAR_12, ((void*)0), VAR_8)))
        goto end;


    FUNC_7(VAR_11, VAR_5);
    FUNC_6(VAR_11);
    if (!FUNC_9(FUNC_8(VAR_11, VAR_0, FUNC_15(VAR_0), &VAR_16)))
        goto end;






    if (!FUNC_10(FUNC_4(VAR_12, VAR_14, sizeof(VAR_14),
                                         &VAR_15),
                     VAR_3))
        goto end;





    if (!FUNC_9(FUNC_8(VAR_11, VAR_0, FUNC_15(VAR_0), &VAR_16))
            || !FUNC_10(FUNC_4(VAR_12, VAR_14, sizeof(VAR_14),
                                                &VAR_15),
                            VAR_4)
            || !FUNC_12(VAR_15, 0)
            || !FUNC_10(FUNC_3(VAR_12),
                            VAR_2))
        goto end;


    if (!FUNC_13(FUNC_8(VAR_11, VAR_0, FUNC_15(VAR_0), &VAR_16))
            || !FUNC_12(VAR_16, FUNC_15(VAR_0))
            || !FUNC_10(FUNC_3(VAR_11),
                            VAR_2)
            || !FUNC_13(FUNC_5(VAR_12, VAR_14, sizeof(VAR_14), &VAR_15))
            || !FUNC_11(VAR_14, VAR_15, VAR_0, FUNC_15(VAR_0))
            || !FUNC_13(FUNC_8(VAR_12, VAR_1, FUNC_15(VAR_1), &VAR_16))
            || !FUNC_12(VAR_16, FUNC_15(VAR_1))
            || !FUNC_5(VAR_11, VAR_14, sizeof(VAR_14), &VAR_15)
            || !FUNC_11(VAR_14, VAR_15, VAR_1, FUNC_15(VAR_1)))
        goto end;

    VAR_13 = 1;

 end:
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    VAR_6 = VAR_7 = ((void*)0);
    FUNC_2(VAR_12);
    FUNC_2(VAR_11);
    FUNC_0(VAR_10);
    FUNC_0(VAR_9);

    return VAR_13;
}
