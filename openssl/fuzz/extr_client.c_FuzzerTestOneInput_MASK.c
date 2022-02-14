
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tmp ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 () ;

int FUNC_17(const uint8_t *VAR_0, size_t VAR_1)
{
    SSL *VAR_2;
    BIO *VAR_3;
    BIO *VAR_4;
    SSL_CTX *VAR_5;

    if (VAR_1 == 0)
        return 0;






    VAR_5 = FUNC_6(FUNC_16());

    VAR_2 = FUNC_9(VAR_5);
    FUNC_4(FUNC_14(VAR_2, 0) == 1);
    FUNC_4(FUNC_12(VAR_2, "ALL:eNULL:@SECLEVEL=0") == 1);
    FUNC_15(VAR_2, "localhost");
    VAR_3 = FUNC_0(FUNC_1());
    VAR_4 = FUNC_0(FUNC_1());
    FUNC_11(VAR_2, VAR_3, VAR_4);
    FUNC_13(VAR_2);
    FUNC_4((size_t)FUNC_2(VAR_3, VAR_0, VAR_1) == VAR_1);
    if (FUNC_7(VAR_2) == 1) {

        uint8_t VAR_6[1024];
        for (;;) {
            if (FUNC_10(VAR_2, VAR_6, sizeof(VAR_6)) <= 0) {
                break;
            }
        }
    }
    FUNC_8(VAR_2);
    FUNC_3();
    FUNC_5(VAR_5);

    return 0;
}
