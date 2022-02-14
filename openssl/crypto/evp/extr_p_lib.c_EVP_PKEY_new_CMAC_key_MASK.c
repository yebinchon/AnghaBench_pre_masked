
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ptr; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef int OSSL_PROVIDER ;
typedef int OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EVP_MAC_CTX ;
typedef int EVP_MAC ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,size_t) ;
 int FUNC_13 (char*,char*,int ) ;
 int * FUNC_14 (int const*) ;
 int FUNC_15 (TYPE_2__*,int *,int ,int *,int) ;

EVP_PKEY *FUNC_16(ENGINE *VAR_7, const unsigned char *VAR_8,
                                size_t VAR_9, const EVP_CIPHER *VAR_10)
{


    const char *VAR_11 = VAR_7 != ((void*)0) ? FUNC_0(VAR_7) : ((void*)0);

    const char *VAR_12 = FUNC_1(VAR_10);
    const OSSL_PROVIDER *VAR_13 = FUNC_2(VAR_10);
    OPENSSL_CTX *VAR_14 =
        VAR_13 == ((void*)0) ? ((void*)0) : FUNC_14(VAR_13);
    EVP_PKEY *VAR_15 = FUNC_9();
    EVP_MAC *VAR_16 = FUNC_6(VAR_14, VAR_4, ((void*)0));
    EVP_MAC_CTX *VAR_17 = VAR_16 != ((void*)0) ? FUNC_4(VAR_16) : ((void*)0);
    OSSL_PARAM VAR_18[4];
    size_t VAR_19 = 0;

    if (VAR_15 == ((void*)0)
            || VAR_17 == ((void*)0)
            || !FUNC_15(VAR_15, VAR_7, VAR_1, ((void*)0), -1)) {

        goto err;
    }


    if (VAR_11 != ((void*)0))
        VAR_18[VAR_19++] =
            FUNC_13("engine", (char *)VAR_11, 0);


    VAR_18[VAR_19++] =
        FUNC_13(VAR_5,
                                         (char *)VAR_12, 0);
    VAR_18[VAR_19++] =
        FUNC_12(VAR_6,
                                          (char *)VAR_8, VAR_9);
    VAR_18[VAR_19] = FUNC_11();

    if (!FUNC_5(VAR_17, VAR_18)) {
        FUNC_10(VAR_0, VAR_2);
        goto err;
    }

    VAR_15->pkey.ptr = VAR_17;
    return VAR_15;

 err:
    FUNC_8(VAR_15);
    FUNC_3(VAR_17);
    FUNC_7(VAR_16);
    return ((void*)0);





}
