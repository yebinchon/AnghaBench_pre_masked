
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ enc; scalar_t__ hw; } ;
struct TYPE_12__ {scalar_t__ data_type; scalar_t__ data_size; int * data; } ;
struct TYPE_11__ {size_t nonce_len; scalar_t__ tag_len; size_t tls_aad_pad_sz; TYPE_4__ base; int tag; } ;
struct TYPE_10__ {size_t (* tls_init ) (TYPE_4__*,int *,scalar_t__) ;scalar_t__ (* tls_iv_set_fixed ) (TYPE_4__*,int *,scalar_t__) ;} ;
typedef TYPE_1__ PROV_CIPHER_HW_CHACHA20_POLY1305 ;
typedef TYPE_2__ PROV_CHACHA20_POLY1305_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_3__ const*,size_t*) ;
 TYPE_3__* FUNC_2 (TYPE_3__ const*,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 size_t FUNC_4 (TYPE_4__*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(void *VAR_17,
                                            const OSSL_PARAM VAR_18[])
{
    const OSSL_PARAM *VAR_19;
    size_t VAR_20;
    PROV_CHACHA20_POLY1305_CTX *VAR_21 = (PROV_CHACHA20_POLY1305_CTX *)VAR_17;
    PROV_CIPHER_HW_CHACHA20_POLY1305 *VAR_22 =
        (PROV_CIPHER_HW_CHACHA20_POLY1305 *)VAR_21->base.hw;

    VAR_19 = FUNC_2(VAR_18, VAR_7);
    if (VAR_19 != ((void*)0)) {
        if (!FUNC_1(VAR_19, &VAR_20)) {
            FUNC_0(VAR_2, VAR_10);
            return 0;
        }
        if (VAR_20 != VAR_0) {
            FUNC_0(VAR_2, VAR_14);
            return 0;
        }
    }
    VAR_19 = FUNC_2(VAR_18, VAR_6);
    if (VAR_19 != ((void*)0)) {
        if (!FUNC_1(VAR_19, &VAR_20)) {
            FUNC_0(VAR_2, VAR_10);
            return 0;
        }
        if (VAR_20 == 0 || VAR_20 > VAR_1) {
            FUNC_0(VAR_2, VAR_13);
            return 0;
        }
        VAR_21->nonce_len = VAR_20;
    }

    VAR_19 = FUNC_2(VAR_18, VAR_3);
    if (VAR_19 != ((void*)0)) {
        if (VAR_19->data_type != VAR_8) {
            FUNC_0(VAR_2, VAR_10);
            return 0;
        }
        if (VAR_19->data_size == 0 || VAR_19->data_size > VAR_9) {
            FUNC_0(VAR_2, VAR_15);
            return 0;
        }
        if (VAR_19->data != ((void*)0)) {
            if (VAR_21->base.enc) {
                FUNC_0(VAR_2, VAR_16);
                return 0;
            }
            FUNC_3(VAR_21->tag, VAR_19->data, VAR_19->data_size);
        }
        VAR_21->tag_len = VAR_19->data_size;
    }

    VAR_19 = FUNC_2(VAR_18, VAR_4);
    if (VAR_19 != ((void*)0)) {
        if (VAR_19->data_type != VAR_8) {
            FUNC_0(VAR_2, VAR_10);
            return 0;
        }
        VAR_20 = VAR_22->tls_init(&VAR_21->base, VAR_19->data, VAR_19->data_size);
        if (VAR_20 == 0) {
            FUNC_0(VAR_2, VAR_11);
            return 0;
        }
        VAR_21->tls_aad_pad_sz = VAR_20;
    }

    VAR_19 = FUNC_2(VAR_18, VAR_5);
    if (VAR_19 != ((void*)0)) {
        if (VAR_19->data_type != VAR_8) {
            FUNC_0(VAR_2, VAR_10);
            return 0;
        }
        if (VAR_22->tls_iv_set_fixed(&VAR_21->base, VAR_19->data, VAR_19->data_size) == 0) {
            FUNC_0(VAR_2, VAR_12);
            return 0;
        }
    }

    return 1;
}
