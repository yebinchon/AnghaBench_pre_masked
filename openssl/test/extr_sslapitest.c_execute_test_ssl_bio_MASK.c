
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bio_change_t ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(int VAR_3, bio_change_t VAR_4)
{
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    SSL_CTX *VAR_8;
    SSL *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (!FUNC_13(VAR_8 = FUNC_8(FUNC_14()))
            || !FUNC_13(VAR_9 = FUNC_10(VAR_8))
            || !FUNC_13(VAR_5 = FUNC_2(FUNC_0()))
            || !FUNC_13(VAR_6 = FUNC_2(FUNC_5())))
        goto end;

    FUNC_6(VAR_5, VAR_9, VAR_0);





    FUNC_4(VAR_5, VAR_6);


    if (VAR_4 != VAR_2) {
        if (!FUNC_13(VAR_7 = FUNC_2(FUNC_5())))
            goto end;
        if (VAR_4 == VAR_1)
            FUNC_11(VAR_9, VAR_7);
        else
            FUNC_12(VAR_9, VAR_7);
    }
    VAR_9 = ((void*)0);

    if (VAR_3)
        FUNC_3(VAR_5);
    else
        FUNC_3(VAR_6);

    VAR_10 = 1;
 end:
    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
    FUNC_9(VAR_9);
    FUNC_7(VAR_8);

    return VAR_10;
}
