
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CIPHER ;
typedef int SSL ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int*) ;
 scalar_t__ FUNC_9 (int *,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int VAR_0 ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(SSL *VAR_1, const char *VAR_2)
{
    const SSL_CIPHER *VAR_3;
    int VAR_4;
    X509 *VAR_5;
    EVP_PKEY *VAR_6;

    VAR_3 = FUNC_6(VAR_1);
    FUNC_0(VAR_0, "%s%s, cipher %s %s",
               VAR_2,
               FUNC_10(VAR_1),
               FUNC_5(VAR_3), FUNC_4(VAR_3));
    VAR_5 = FUNC_7(VAR_1);
    if (VAR_5 != ((void*)0)) {
        EVP_PKEY* VAR_7 = FUNC_12(VAR_5);

        if (VAR_7 != ((void*)0)) {
            FUNC_1(VAR_0, ", ");
            FUNC_13(VAR_0, VAR_7);
        }
        FUNC_11(VAR_5);
    }
    if (FUNC_9(VAR_1, &VAR_6)) {
        FUNC_1(VAR_0, ", temp key: ");
        FUNC_13(VAR_0, VAR_6);
        FUNC_2(VAR_6);
    }
    if (FUNC_8(VAR_1, &VAR_4))
        FUNC_0(VAR_0, ", digest=%s", FUNC_3(VAR_4));
    FUNC_0(VAR_0, "\n");
}
