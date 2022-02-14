
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_4__ {int pkey_flags; scalar_t__ (* param_decode ) (int *,unsigned char const**,size_t) ;int pkey_id; } ;
typedef int OSSL_STORE_INFO ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,char const*,int) ;
 int VAR_2 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (int *,unsigned char const**,size_t) ;
 scalar_t__ FUNC_11 (int *,unsigned char const**,size_t) ;

__attribute__((used)) static OSSL_STORE_INFO *FUNC_12(const char *VAR_3,
                                          const char *VAR_4,
                                          const unsigned char *VAR_5,
                                          size_t VAR_6, void **VAR_7,
                                          int *VAR_8,
                                          const UI_METHOD *VAR_9,
                                          void *VAR_10)
{
    OSSL_STORE_INFO *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    EVP_PKEY *VAR_13 = ((void*)0);
    const EVP_PKEY_ASN1_METHOD *VAR_14 = ((void*)0);
    int VAR_15 = 0;

    if (VAR_3 != ((void*)0)) {
        if ((VAR_12 = FUNC_9(VAR_3, "PARAMETERS")) == 0)
            return ((void*)0);
        *VAR_8 = 1;
    }

    if (VAR_12 > 0) {
        if ((VAR_13 = FUNC_4()) == ((void*)0)) {
            FUNC_8(VAR_2, VAR_1);
            return ((void*)0);
        }


        if (FUNC_6(VAR_13, VAR_3, VAR_12)
            && (VAR_14 = FUNC_3(VAR_13)) != ((void*)0)
            && VAR_14->param_decode != ((void*)0)
            && VAR_14->param_decode(VAR_13, &VAR_5, VAR_6))
            VAR_15 = 1;
    } else {
        int VAR_16;
        EVP_PKEY *VAR_17 = ((void*)0);

        for (VAR_16 = 0; VAR_16 < FUNC_1(); VAR_16++) {
            const unsigned char *VAR_18 = VAR_5;

            if (VAR_17 == ((void*)0) && (VAR_17 = FUNC_4()) == ((void*)0)) {
                FUNC_8(VAR_2, VAR_1);
                break;
            }

            VAR_14 = FUNC_0(VAR_16);
            if (VAR_14->pkey_flags & VAR_0)
                continue;

            if (FUNC_5(VAR_17, VAR_14->pkey_id)
                && (VAR_14 = FUNC_3(VAR_17)) != ((void*)0)
                && VAR_14->param_decode != ((void*)0)
                && VAR_14->param_decode(VAR_17, &VAR_18, VAR_6)) {
                if (VAR_13 != ((void*)0))
                    FUNC_2(VAR_17);
                else
                    VAR_13 = VAR_17;
                VAR_17 = ((void*)0);
                (*VAR_8)++;
            }
        }

        FUNC_2(VAR_17);
        if (*VAR_8 == 1) {
            VAR_15 = 1;
        }
    }

    if (VAR_15)
        VAR_11 = FUNC_7(VAR_13);
    if (VAR_11 == ((void*)0))
        FUNC_2(VAR_13);

    return VAR_11;
}
