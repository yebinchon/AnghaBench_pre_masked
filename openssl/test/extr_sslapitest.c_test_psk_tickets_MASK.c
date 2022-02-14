
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sess_id_ctx ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,void*,int) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int * VAR_4 ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int **,int **,int *,int *) ;
 int FUNC_17 (int *,int *,int **,int **,int *,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int FUNC_18(void)
{
    SSL_CTX *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    SSL *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    int VAR_18 = 0;
    int VAR_19 = 1;

    if (!FUNC_11(FUNC_16(FUNC_13(), FUNC_12(),
                                       VAR_3, 0, &VAR_14,
                                       &VAR_15, ((void*)0), ((void*)0)))
            || !FUNC_11(FUNC_5(VAR_14,
                                                         (void *)&VAR_19,
                                                         sizeof(VAR_19))))
        goto end;

    FUNC_4(VAR_15, VAR_1
                                         | VAR_2);
    FUNC_3(VAR_15, VAR_12);
    FUNC_2(VAR_14, VAR_5);
    FUNC_1(VAR_15, VAR_8);
    VAR_13 = 0;
    VAR_6 = 0;
    VAR_11 = VAR_9;
    VAR_7 = 0;

    if (!FUNC_11(FUNC_17(VAR_14, VAR_15, &VAR_16, &VAR_17,
                                      ((void*)0), ((void*)0))))
        goto end;
    VAR_4 = VAR_10 = FUNC_14(VAR_17);
    if (!FUNC_10(VAR_4))
        goto end;
    FUNC_7(VAR_4);

    if (!FUNC_11(FUNC_15(VAR_16, VAR_17,
                                                VAR_0))
            || !FUNC_9(1, VAR_6)
            || !FUNC_9(1, VAR_13)

            || !FUNC_9(1, VAR_7))
        goto end;

    VAR_18 = 1;

 end:
    FUNC_8(VAR_16);
    FUNC_8(VAR_17);
    FUNC_0(VAR_14);
    FUNC_0(VAR_15);
    FUNC_6(VAR_4);
    FUNC_6(VAR_10);
    VAR_4 = VAR_10 = ((void*)0);

    return VAR_18;
}
