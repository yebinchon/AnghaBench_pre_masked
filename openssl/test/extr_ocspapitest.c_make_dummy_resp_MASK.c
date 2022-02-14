
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int keybytes ;
typedef int X509_NAME ;
typedef int OCSP_CERTID ;
typedef int OCSP_BASICRESP ;
typedef int ASN1_TIME ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ,int ,int *,int *,int *) ;
 int * FUNC_13 (int ,int *,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int VAR_2 ;
 int FUNC_16 (int *,int ,int ,unsigned char const*,int,int,int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 () ;
 scalar_t__ FUNC_19 (int *) ;

__attribute__((used)) static OCSP_BASICRESP *FUNC_20(void)
{
    const unsigned char VAR_3[] = "openssl.example.com";
    unsigned char VAR_4[128] = {7};
    OCSP_BASICRESP *VAR_5 = FUNC_10();
    OCSP_BASICRESP *VAR_6 = ((void*)0);
    OCSP_CERTID *VAR_7 = ((void*)0);
    ASN1_TIME *VAR_8 = FUNC_7(((void*)0), FUNC_19(((void*)0)));
    ASN1_TIME *VAR_9 = FUNC_7(((void*)0), FUNC_19(((void*)0)) + 200);
    X509_NAME *VAR_10 = FUNC_18();
    ASN1_BIT_STRING *VAR_11 = FUNC_1();
    ASN1_INTEGER *VAR_12 = FUNC_4();

    if (!FUNC_16(VAR_10, VAR_1, VAR_0,
                                   VAR_3, -1, -1, 1)
        || !FUNC_2(VAR_11, VAR_4, sizeof(VAR_4))
        || !FUNC_5(VAR_12, (uint64_t)1))
        goto err;
    VAR_7 = FUNC_13(FUNC_8(), VAR_10, VAR_11, VAR_12);
    if (!FUNC_14(VAR_5)
        || !FUNC_14(VAR_8)
        || !FUNC_14(VAR_9)
        || !FUNC_14(VAR_7)
        || !FUNC_15(FUNC_12(VAR_5, VAR_7,
                                             VAR_2,
                                             0, ((void*)0), VAR_8, VAR_9)))
        goto err;
    VAR_6 = VAR_5;
    VAR_5 = ((void*)0);
 err:
    FUNC_6(VAR_8);
    FUNC_6(VAR_9);
    FUNC_0(VAR_11);
    FUNC_3(VAR_12);
    FUNC_11(VAR_7);
    FUNC_9(VAR_5);
    FUNC_17(VAR_10);
    return VAR_6;
}
