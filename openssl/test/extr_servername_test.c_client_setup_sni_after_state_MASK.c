
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
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int *,char**) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_18(void)
{
    SSL_CTX *VAR_1;
    SSL *VAR_2 = ((void*)0);
    BIO *VAR_3;
    BIO *VAR_4;
    char *VAR_5 = ((void*)0);
    int VAR_6 = 0;


    VAR_1 = FUNC_5(FUNC_16());
    if (!FUNC_13(VAR_1))
        goto end;

    VAR_2 = FUNC_8(VAR_1);
    if (!FUNC_13(VAR_2))
        goto end;

    VAR_3 = FUNC_1(FUNC_2());
    VAR_4 = FUNC_1(FUNC_2());
    if (!FUNC_13(VAR_3)|| !FUNC_13(VAR_4)) {
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);
        goto end;
    }

    FUNC_9(VAR_2, VAR_3, VAR_4);
    FUNC_10(VAR_2);


    FUNC_11(VAR_2, VAR_0);

    if (!FUNC_12(FUNC_6(VAR_2), 0))

        goto end;
    if (!FUNC_15(FUNC_17(VAR_4, &VAR_5)))

        goto end;
    if (!FUNC_14(VAR_5, VAR_0))

        goto end;
    VAR_6 = 1;
end:
    FUNC_3(VAR_5);
    FUNC_7(VAR_2);
    FUNC_4(VAR_1);
    return VAR_6;
}
