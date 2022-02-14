
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
typedef int buf ;
struct TYPE_9__ {TYPE_3__* mac; int iterationCount; TYPE_2__* salt; TYPE_1__* owf; } ;
struct TYPE_8__ {int * algorithm; } ;
struct TYPE_7__ {unsigned char* data; unsigned int length; } ;
struct TYPE_6__ {int algorithm; } ;
typedef int OSSL_PARAM ;
typedef TYPE_4__ OSSL_CRMF_PBMPARAMETER ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_MAC_CTX ;
typedef int EVP_MAC ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,unsigned char*,unsigned int*) ;
 int FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *,unsigned char const*,unsigned int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *,unsigned char*,size_t*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned char const*,size_t) ;
 int VAR_4 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 () ;
 int VAR_5 ;
 int FUNC_16 (int ,int,int *,int*,int *) ;
 int * FUNC_17 (int ) ;
 int VAR_6 ;
 char* FUNC_18 (int) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (char*,int,int *,int ) ;
 int FUNC_21 (unsigned char*,unsigned int) ;
 int FUNC_22 (unsigned char*) ;
 unsigned char* FUNC_23 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_24 (int ,unsigned char*,unsigned int) ;
 int FUNC_25 (int ,char*,int ) ;

int FUNC_26(const OSSL_CRMF_PBMPARAMETER *VAR_11,
                      const unsigned char *VAR_12, size_t VAR_13,
                      const unsigned char *VAR_14, size_t VAR_15,
                      unsigned char **VAR_16, size_t *VAR_17)
{
    int VAR_18, VAR_19 = VAR_6;
    const char *VAR_20 = ((void*)0);
    const EVP_MD *VAR_21 = ((void*)0);
    EVP_MD_CTX *VAR_22 = ((void*)0);
    unsigned char VAR_23[VAR_4];
    unsigned int VAR_24 = VAR_4;
    int64_t VAR_25;
    unsigned char *VAR_26 = 0;
    int VAR_27 = 0;
    EVP_MAC *VAR_28 = ((void*)0);
    EVP_MAC_CTX *VAR_29 = ((void*)0);
    OSSL_PARAM VAR_30[3] =
        { VAR_10, VAR_10, VAR_10 };

    if (VAR_16 == ((void*)0) || VAR_11 == ((void*)0) || VAR_11->mac == ((void*)0)
            || VAR_11->mac->algorithm == ((void*)0) || VAR_12 == ((void*)0) || VAR_14 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        goto err;
    }
    if ((VAR_26 = FUNC_23(VAR_4)) == ((void*)0))
        goto err;






    if ((VAR_21 = FUNC_17(VAR_11->owf->algorithm)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_3);
        goto err;
    }

    if ((VAR_22 = FUNC_15()) == ((void*)0))
        goto err;


    if (!FUNC_4(VAR_22, VAR_21, ((void*)0)))
        goto err;

    if (!FUNC_5(VAR_22, VAR_14, VAR_15))
        goto err;

    if (!FUNC_5(VAR_22, VAR_11->salt->data, VAR_11->salt->length))
        goto err;
    if (!FUNC_3(VAR_22, VAR_23, &VAR_24))
        goto err;
    if (!FUNC_0(&VAR_25, VAR_11->iterationCount)
            || VAR_25 < 100
            || VAR_25 > VAR_7) {
        FUNC_1(VAR_0, VAR_1);
        goto err;
    }


    while (--VAR_25 > 0) {
        if (!FUNC_4(VAR_22, VAR_21, ((void*)0)))
            goto err;
        if (!FUNC_5(VAR_22, VAR_23, VAR_24))
            goto err;
        if (!FUNC_3(VAR_22, VAR_23, &VAR_24))
            goto err;
    }






    VAR_18 = FUNC_19(VAR_11->mac->algorithm);

    if (!FUNC_16(VAR_5, VAR_18, ((void*)0), &VAR_19, ((void*)0))
        || ((VAR_20 = FUNC_18(VAR_19)) == ((void*)0))) {
        FUNC_1(VAR_0, VAR_3);
        goto err;
    }

    VAR_30[0] =
        FUNC_25(VAR_8,
                                         (char *)VAR_20, 0);
    VAR_30[1] =
        FUNC_24(VAR_9, VAR_23, VAR_24);
    if ((VAR_28 = FUNC_9(((void*)0), "HMAC", ((void*)0))) == ((void*)0)
            || (VAR_29 = FUNC_7(VAR_28)) == ((void*)0)
            || !FUNC_8(VAR_29, VAR_30)
            || !FUNC_12(VAR_29)
            || !FUNC_13(VAR_29, VAR_12, VAR_13)
            || !FUNC_10(VAR_29, VAR_26, VAR_17, VAR_4))
        goto err;

    VAR_27 = 1;

 err:

    FUNC_21(VAR_23, VAR_24);
    FUNC_6(VAR_29);
    FUNC_11(VAR_28);
    FUNC_14(VAR_22);

    if (VAR_27 == 1) {
        *VAR_16 = VAR_26;
        return 1;
    }

    FUNC_22(VAR_26);

    if (VAR_11 != ((void*)0) && VAR_11->mac != ((void*)0)) {
        char VAR_31[128];

        if (FUNC_20(VAR_31, sizeof(VAR_31), VAR_11->mac->algorithm, 0))
            FUNC_2(1, VAR_31);
    }
    return 0;
}
