
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSIONS ;
typedef int X509_EXTENSION ;
struct TYPE_3__ {int * ctx; } ;
typedef TYPE_1__ OSSL_CMP_CTX_TEST_FIXTURE ;
typedef int OSSL_CMP_CTX ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int const) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (unsigned char*,int const) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int ,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16(
                                             OSSL_CMP_CTX_TEST_FIXTURE *VAR_1)
{
    OSSL_CMP_CTX *VAR_2 = VAR_1->ctx;
    const int VAR_3 = 16;
    unsigned char VAR_4[16 ];
    ASN1_OCTET_STRING *VAR_5 = ((void*)0);
    X509_EXTENSION *VAR_6 = ((void*)0);
    X509_EXTENSIONS *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_6(FUNC_3(VAR_2)))
        return 0;

    if (!FUNC_7(1, FUNC_5(VAR_4, VAR_3))
            || !FUNC_8(VAR_5 = FUNC_1())
            || !FUNC_9(FUNC_2(VAR_5, VAR_4, VAR_3)))
        goto err;
    VAR_6 = FUNC_10(((void*)0), VAR_0, 0, VAR_5);
    if (!FUNC_8(VAR_6)
            || !FUNC_8(VAR_7 = FUNC_13())
            || !FUNC_9(FUNC_15(VAR_7, VAR_6))
            || !FUNC_9(FUNC_4(VAR_2, VAR_7))) {
        FUNC_11(VAR_6);
        FUNC_12(VAR_7);
        goto err;
    }
    if (FUNC_7(FUNC_3(VAR_2), 1)) {
        VAR_6 = FUNC_14(VAR_7);
        VAR_8 = FUNC_6(FUNC_3(VAR_2));
        FUNC_11(VAR_6);
    }
 err:
    FUNC_0(VAR_5);
    return VAR_8;
}
