
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {TYPE_3__* signature; int algorithmIdentifier; } ;
typedef TYPE_1__ OSSL_CRMF_POPOSIGNINGKEY ;
typedef int OSSL_CRMF_CERTREQUEST ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (TYPE_3__*,unsigned char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_3 (int *,int *,int const*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int,int*,int *) ;
 int FUNC_10 (int*,int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int VAR_5 ;
 int FUNC_14 (int ,int ,int ,int *) ;
 int FUNC_15 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_16(OSSL_CRMF_POPOSIGNINGKEY *VAR_6,
                                    OSSL_CRMF_CERTREQUEST *VAR_7,
                                    EVP_PKEY *VAR_8, int VAR_9)
{
    int VAR_10;
    size_t VAR_11;
    size_t VAR_12;
    unsigned char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    int VAR_16 = 0;
    const EVP_MD *VAR_17 = ((void*)0);
    EVP_MD_CTX *VAR_18 = ((void*)0);
    int VAR_19 = 0;

    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_3);
        return 0;
    }


    VAR_6->signature->flags &= ~(VAR_0 | 0x07);
    VAR_6->signature->flags |= VAR_0;

    VAR_10 = FUNC_15(VAR_7, &VAR_13);
    if (VAR_10 < 0 || VAR_13 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_2);
        goto err;
    }
    VAR_11 = (size_t)VAR_10;

    if (!FUNC_10(&VAR_15, VAR_9, FUNC_7(VAR_8))) {
        FUNC_1(VAR_1,
                VAR_4);
        goto err;
    }
    if (!FUNC_9(VAR_15, &VAR_16, ((void*)0))
            || (VAR_17 = FUNC_8(VAR_16)) == ((void*)0)) {
        FUNC_1(VAR_1,
                VAR_4);
        goto err;
    }
    if (!FUNC_14(VAR_6->algorithmIdentifier, FUNC_11(VAR_15),
                         VAR_5, ((void*)0))
            || (VAR_18 = FUNC_6()) == ((void*)0)
            || FUNC_3(VAR_18, ((void*)0), VAR_17, ((void*)0), VAR_8) <= 0
            || FUNC_4(VAR_18, VAR_13, VAR_11) <= 0
            || FUNC_2(VAR_18, ((void*)0), &VAR_12) <= 0) {
        FUNC_1(VAR_1, VAR_2);
        goto err;
    }
    if ((VAR_14 = FUNC_13(VAR_12)) == ((void*)0))
        goto err;
    if (FUNC_2(VAR_18, VAR_14, &VAR_12) <= 0
            || !FUNC_0(VAR_6->signature, VAR_14, VAR_12)) {
        FUNC_1(VAR_1, VAR_2);
        goto err;
    }
    VAR_19 = 1;

 err:
    FUNC_12(VAR_13);
    FUNC_5(VAR_18);
    FUNC_12(VAR_14);
    return VAR_19;
}
