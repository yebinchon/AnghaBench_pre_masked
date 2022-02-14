
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int label_prefix ;
typedef int hkdflabel ;
typedef int WPACKET ;
typedef int SSL ;
typedef int OSSL_PARAM ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 char* FUNC_6 (int const*) ;
 size_t FUNC_7 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int*) ;
 void* FUNC_10 (int ,unsigned char*,size_t) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,size_t*) ;
 int FUNC_18 (int *,unsigned char*,int,int ) ;
 int FUNC_19 (int *,unsigned char const*,size_t) ;
 int FUNC_20 (int *,size_t) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_23 (char const*) ;

int FUNC_24(SSL *VAR_12, const EVP_MD *VAR_13, const unsigned char *VAR_14,
                             const unsigned char *VAR_15, size_t VAR_16,
                             const unsigned char *VAR_17, size_t VAR_18,
                             unsigned char *VAR_19, size_t VAR_20, int VAR_21)
{



    static const unsigned char VAR_22[] = "tls13 ";

    EVP_KDF *VAR_23 = FUNC_4(((void*)0), VAR_3, ((void*)0));
    EVP_KDF_CTX *VAR_24;
    OSSL_PARAM VAR_25[5], *VAR_26 = VAR_25;
    int VAR_27 = VAR_2;
    const char *VAR_28 = FUNC_6(VAR_13);
    int VAR_29;
    size_t VAR_30;
    size_t VAR_31;





    unsigned char VAR_32[sizeof(uint16_t) + sizeof(uint8_t) +
                            + (sizeof(VAR_22) - 1) + VAR_11
                            + 1 + VAR_1];
    WPACKET VAR_33;

    VAR_24 = FUNC_1(VAR_23);
    FUNC_5(VAR_23);
    if (VAR_24 == ((void*)0))
        return 0;

    if (VAR_16 > VAR_11) {
        if (VAR_21) {
            FUNC_13(VAR_12, VAR_8, VAR_9,
                     VAR_0);
        } else {




            FUNC_12(VAR_9, VAR_10);
        }
        FUNC_0(VAR_24);
        return 0;
    }

    VAR_31 = FUNC_7(VAR_13);

    if (!FUNC_18(&VAR_33, VAR_32, sizeof(VAR_32), 0)
            || !FUNC_20(&VAR_33, VAR_20)
            || !FUNC_21(&VAR_33)
            || !FUNC_19(&VAR_33, VAR_22, sizeof(VAR_22) - 1)
            || !FUNC_19(&VAR_33, VAR_15, VAR_16)
            || !FUNC_15(&VAR_33)
            || !FUNC_22(&VAR_33, VAR_17, (VAR_17 == ((void*)0)) ? 0 : VAR_18)
            || !FUNC_17(&VAR_33, &VAR_30)
            || !FUNC_16(&VAR_33)) {
        FUNC_0(VAR_24);
        FUNC_14(&VAR_33);
        if (VAR_21)
            FUNC_13(VAR_12, VAR_8, VAR_9,
                     VAR_0);
        else
            FUNC_12(VAR_9, VAR_0);
        return 0;
    }

    *VAR_26++ = FUNC_9(VAR_7, &VAR_27);
    *VAR_26++ = FUNC_11(VAR_4,
                                            (char *)VAR_28, FUNC_23(VAR_28) + 1);
    *VAR_26++ = FUNC_10(VAR_6,
                                             (unsigned char *)VAR_14, VAR_31);
    *VAR_26++ = FUNC_10(VAR_5,
                                             VAR_32, VAR_30);
    *VAR_26++ = FUNC_8();

    VAR_29 = FUNC_2(VAR_24, VAR_25) <= 0
        || FUNC_3(VAR_24, VAR_19, VAR_20) <= 0;

    FUNC_0(VAR_24);

    if (VAR_29 != 0) {
        if (VAR_21)
            FUNC_13(VAR_12, VAR_8, VAR_9,
                     VAR_0);
        else
            FUNC_12(VAR_9, VAR_0);
    }

    return VAR_29 == 0;
}
