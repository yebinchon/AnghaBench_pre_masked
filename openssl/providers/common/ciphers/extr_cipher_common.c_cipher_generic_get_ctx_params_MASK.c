
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keylen; int num; int ivlen; int oiv; int pad; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_6 ;

int FUNC_6(void *VAR_7, OSSL_PARAM VAR_8[])
{
    PROV_CIPHER_CTX *VAR_9 = (PROV_CIPHER_CTX *)VAR_7;
    OSSL_PARAM *VAR_10;

    VAR_10 = FUNC_1(VAR_8, VAR_2);
    if (VAR_10 != ((void*)0) && !FUNC_4(VAR_10, VAR_9->ivlen)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_10 = FUNC_1(VAR_8, VAR_5);
    if (VAR_10 != ((void*)0) && !FUNC_5(VAR_10, VAR_9->pad)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_10 = FUNC_1(VAR_8, VAR_1);
    if (VAR_10 != ((void*)0)
        && !FUNC_2(VAR_10, &VAR_9->oiv, VAR_9->ivlen)
        && !FUNC_3(VAR_10, &VAR_9->oiv, VAR_9->ivlen)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_10 = FUNC_1(VAR_8, VAR_4);
    if (VAR_10 != ((void*)0) && !FUNC_5(VAR_10, VAR_9->num)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_10 = FUNC_1(VAR_8, VAR_3);
    if (VAR_10 != ((void*)0) && !FUNC_4(VAR_10, VAR_9->keylen)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    return 1;
}
