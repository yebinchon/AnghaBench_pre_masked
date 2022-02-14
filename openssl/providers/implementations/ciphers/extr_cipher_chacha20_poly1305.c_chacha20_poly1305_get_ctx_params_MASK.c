
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data_type; scalar_t__ data_size; int data; } ;
struct TYPE_8__ {int enc; } ;
struct TYPE_9__ {int tag; TYPE_1__ base; int tls_aad_pad_sz; int tag_len; int nonce_len; } ;
typedef TYPE_2__ PROV_CHACHA20_POLY1305_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_12, OSSL_PARAM VAR_13[])
{
    PROV_CHACHA20_POLY1305_CTX *VAR_14 = (PROV_CHACHA20_POLY1305_CTX *)VAR_12;
    OSSL_PARAM *VAR_15;

    VAR_15 = FUNC_1(VAR_13, VAR_5);
    if (VAR_15 != ((void*)0)) {
        if (!FUNC_2(VAR_15, VAR_14->nonce_len)) {
            FUNC_0(VAR_1, VAR_9);
            return 0;
        }
    }
    VAR_15 = FUNC_1(VAR_13, VAR_6);
    if (VAR_15 != ((void*)0) && !FUNC_2(VAR_15, VAR_0)) {
        FUNC_0(VAR_1, VAR_9);
        return 0;
    }
    VAR_15 = FUNC_1(VAR_13, VAR_3);
    if (VAR_15 != ((void*)0) && !FUNC_2(VAR_15, VAR_14->tag_len)) {
        FUNC_0(VAR_1, VAR_9);
        return 0;
    }
    VAR_15 = FUNC_1(VAR_13, VAR_4);
    if (VAR_15 != ((void*)0) && !FUNC_2(VAR_15, VAR_14->tls_aad_pad_sz)) {
        FUNC_0(VAR_1, VAR_9);
        return 0;
    }

    VAR_15 = FUNC_1(VAR_13, VAR_2);
    if (VAR_15 != ((void*)0)) {
        if (VAR_15->data_type != VAR_7) {
            FUNC_0(VAR_1, VAR_9);
            return 0;
        }
        if (!VAR_14->base.enc) {
            FUNC_0(VAR_1, VAR_11);
            return 0;
        }
        if (VAR_15->data_size == 0 || VAR_15->data_size > VAR_8) {
            FUNC_0(VAR_1, VAR_10);
            return 0;
        }
        FUNC_3(VAR_15->data, VAR_14->tag, VAR_15->data_size);
    }

    return 1;
}
