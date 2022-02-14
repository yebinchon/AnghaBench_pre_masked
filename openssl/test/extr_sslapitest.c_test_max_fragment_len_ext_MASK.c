
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_16(int VAR_1)
{
    SSL_CTX *VAR_2;
    SSL *VAR_3 = ((void*)0);
    int VAR_4 = 0, VAR_5 = 0;
    BIO *VAR_6, *VAR_7;

    VAR_2 = FUNC_4(FUNC_14());
    if (!FUNC_12(VAR_2))
        goto end;

    if (!FUNC_13(FUNC_5(
                   VAR_2, VAR_0[VAR_1])))
        goto end;

    VAR_3 = FUNC_8(VAR_2);
    if (!FUNC_12(VAR_3))
        goto end;

    VAR_6 = FUNC_1(FUNC_2());
    VAR_7 = FUNC_1(FUNC_2());
    if (!FUNC_12(VAR_6)|| !FUNC_12(VAR_7)) {
        FUNC_0(VAR_6);
        FUNC_0(VAR_7);
        goto end;
    }

    FUNC_9(VAR_3, VAR_6, VAR_7);
    FUNC_10(VAR_3);

    if (!FUNC_11(FUNC_6(VAR_3), 0)) {

        goto end;
    }

    if (!FUNC_13(FUNC_15(VAR_7, &VAR_5)))

        goto end;
    if (!FUNC_13(VAR_0[VAR_1] == VAR_5))
        goto end;

    VAR_4 = 1;

end:
    FUNC_7(VAR_3);
    FUNC_3(VAR_2);

    return VAR_4;
}
