
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t data_size; } ;
struct TYPE_8__ {size_t ivlen; size_t keylen; size_t taglen; int iv_gen; int iv_gen_rand; size_t tls_aad_pad_sz; int buf; int enc; int iv; } ;
typedef TYPE_1__ PROV_GCM_CTX ;
typedef TYPE_2__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;

int FUNC_4(void *VAR_13, OSSL_PARAM VAR_14[])
{
    PROV_GCM_CTX *VAR_15 = (PROV_GCM_CTX *)VAR_13;
    OSSL_PARAM *VAR_16;
    size_t VAR_17;

    VAR_16 = FUNC_1(VAR_14, VAR_7);
    if (VAR_16 != ((void*)0) && !FUNC_3(VAR_16, VAR_15->ivlen)) {
        FUNC_0(VAR_0, VAR_9);
        return 0;
    }
    VAR_16 = FUNC_1(VAR_14, VAR_8);
    if (VAR_16 != ((void*)0) && !FUNC_3(VAR_16, VAR_15->keylen)) {
        FUNC_0(VAR_0, VAR_9);
        return 0;
    }
    VAR_16 = FUNC_1(VAR_14, VAR_4);
    if (VAR_16 != ((void*)0)) {
        size_t VAR_18 = (VAR_15->taglen != VAR_12) ? VAR_15->taglen :
                         VAR_2;

        if (!FUNC_3(VAR_16, VAR_18)) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
    }

    VAR_16 = FUNC_1(VAR_14, VAR_6);
    if (VAR_16 != ((void*)0)) {
        if (VAR_15->iv_gen != 1 && VAR_15->iv_gen_rand != 1)
            return 0;
        if (VAR_15->ivlen != VAR_16->data_size) {
            FUNC_0(VAR_0, VAR_10);
            return 0;
        }
        if (!FUNC_2(VAR_16, VAR_15->iv, VAR_15->ivlen)) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
    }

    VAR_16 = FUNC_1(VAR_14, VAR_5);
    if (VAR_16 != ((void*)0) && !FUNC_3(VAR_16, VAR_15->tls_aad_pad_sz)) {
        FUNC_0(VAR_0, VAR_9);
        return 0;
    }
    VAR_16 = FUNC_1(VAR_14, VAR_3);
    if (VAR_16 != ((void*)0)) {
        VAR_17 = VAR_16->data_size;
        if (VAR_17 == 0
            || VAR_17 > VAR_1
            || !VAR_15->enc
            || VAR_15->taglen == VAR_12) {
            FUNC_0(VAR_0, VAR_11);
            return 0;
        }
        if (!FUNC_2(VAR_16, VAR_15->buf, VAR_17)) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
    }

    return 1;
}
