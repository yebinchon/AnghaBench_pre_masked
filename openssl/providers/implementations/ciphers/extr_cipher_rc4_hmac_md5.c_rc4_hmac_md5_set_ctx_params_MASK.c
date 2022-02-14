
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {size_t (* tls_init ) (TYPE_3__*,int ,int ) ;int (* init_mackey ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_13__ {size_t keylen; size_t ivlen; } ;
struct TYPE_12__ {scalar_t__ data_type; int data_size; int data; } ;
struct TYPE_11__ {size_t tls_aad_pad_sz; TYPE_3__ base; } ;
typedef TYPE_1__ PROV_RC4_HMAC_MD5_CTX ;
typedef TYPE_2__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_9__* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__ const*,size_t*) ;
 TYPE_2__* FUNC_3 (TYPE_2__ const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_9, const OSSL_PARAM VAR_10[])
{
    PROV_RC4_HMAC_MD5_CTX *VAR_11 = (PROV_RC4_HMAC_MD5_CTX *)VAR_9;
    const OSSL_PARAM *VAR_12;
    size_t VAR_13;

    VAR_12 = FUNC_3(VAR_10, VAR_3);
    if (VAR_12 != ((void*)0)) {
        if (!FUNC_2(VAR_12, &VAR_13)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        if (VAR_11->base.keylen != VAR_13) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }

    VAR_12 = FUNC_3(VAR_10, VAR_2);
    if (VAR_12 != ((void*)0)) {
        if (!FUNC_2(VAR_12, &VAR_13)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        if (VAR_11->base.ivlen != VAR_13) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
    }

    VAR_12 = FUNC_3(VAR_10, VAR_1);
    if (VAR_12 != ((void*)0)) {
        if (VAR_12->data_type != VAR_4) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        VAR_13 = FUNC_1(VAR_11)->tls_init(&VAR_11->base, VAR_12->data, VAR_12->data_size);
        if (VAR_13 == 0) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }
        VAR_11->tls_aad_pad_sz = VAR_13;
    }
    VAR_12 = FUNC_3(VAR_10, VAR_1);
    if (VAR_12 != ((void*)0)) {
        if (VAR_12->data_type != VAR_4) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        FUNC_1(VAR_11)->init_mackey(&VAR_11->base, VAR_12->data, VAR_12->data_size);
    }
    return 1;
}
