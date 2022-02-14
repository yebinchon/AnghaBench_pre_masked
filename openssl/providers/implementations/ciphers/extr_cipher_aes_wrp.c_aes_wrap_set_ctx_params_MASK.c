
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t keylen; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*,size_t*) ;
 int * FUNC_2 (int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(void *VAR_4, const OSSL_PARAM VAR_5[])
{
    PROV_CIPHER_CTX *VAR_6 = (PROV_CIPHER_CTX *)VAR_4;
    const OSSL_PARAM *VAR_7;
    size_t VAR_8 = 0;

    VAR_7 = FUNC_2(VAR_5, VAR_1);
    if (VAR_7 != ((void*)0)) {
        if (!FUNC_1(VAR_7, &VAR_8)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (VAR_6->keylen != VAR_8) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
    }
    return 1;
}
