
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad; unsigned int num; size_t keylen; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,size_t*) ;
 int FUNC_2 (int const*,unsigned int*) ;
 int * FUNC_3 (int const*,int ) ;
 int VAR_4 ;

int FUNC_4(void *VAR_5, const OSSL_PARAM VAR_6[])
{
    PROV_CIPHER_CTX *VAR_7 = (PROV_CIPHER_CTX *)VAR_5;
    const OSSL_PARAM *VAR_8;

    VAR_8 = FUNC_3(VAR_6, VAR_3);
    if (VAR_8 != ((void*)0)) {
        unsigned int VAR_9;

        if (!FUNC_2(VAR_8, &VAR_9)) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        VAR_7->pad = VAR_9 ? 1 : 0;
    }
    VAR_8 = FUNC_3(VAR_6, VAR_2);
    if (VAR_8 != ((void*)0)) {
        unsigned int VAR_10;

        if (!FUNC_2(VAR_8, &VAR_10)) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        VAR_7->num = VAR_10;
    }
    VAR_8 = FUNC_3(VAR_6, VAR_1);
    if (VAR_8 != ((void*)0)) {
        size_t VAR_11;

        if (!FUNC_1(VAR_8, &VAR_11)) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        VAR_7->keylen = VAR_11;
    }
    return 1;
}
