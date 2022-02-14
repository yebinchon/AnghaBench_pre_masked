
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data_size; scalar_t__ data_type; int data; } ;
struct TYPE_12__ {size_t m; size_t keylen; size_t tls_aad_pad_sz; scalar_t__ len_set; scalar_t__ iv_set; scalar_t__ tag_set; TYPE_1__* hw; int enc; int iv; } ;
struct TYPE_11__ {int (* gettag ) (TYPE_2__*,int ,scalar_t__) ;} ;
typedef TYPE_2__ PROV_CCM_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__) ;

int FUNC_6(void *VAR_11, OSSL_PARAM VAR_12[])
{
    PROV_CCM_CTX *VAR_13 = (PROV_CCM_CTX *)VAR_11;
    OSSL_PARAM *VAR_14;

    VAR_14 = FUNC_1(VAR_12, VAR_5);
    if (VAR_14 != ((void*)0) && !FUNC_3(VAR_14, FUNC_4(VAR_13))) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    }

    VAR_14 = FUNC_1(VAR_12, VAR_2);
    if (VAR_14 != ((void*)0)) {
        size_t VAR_15 = VAR_13->m;

        if (!FUNC_3(VAR_14, VAR_15)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }

    VAR_14 = FUNC_1(VAR_12, VAR_4);
    if (VAR_14 != ((void*)0)) {
        if (FUNC_4(VAR_13) != VAR_14->data_size) {
            FUNC_0(VAR_0, VAR_9);
            return 0;
        }
        if (!FUNC_2(VAR_14, VAR_13->iv, VAR_14->data_size)) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
    }

    VAR_14 = FUNC_1(VAR_12, VAR_6);
    if (VAR_14 != ((void*)0) && !FUNC_3(VAR_14, VAR_13->keylen)) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    }

    VAR_14 = FUNC_1(VAR_12, VAR_3);
    if (VAR_14 != ((void*)0) && !FUNC_3(VAR_14, VAR_13->tls_aad_pad_sz)) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    }

    VAR_14 = FUNC_1(VAR_12, VAR_1);
    if (VAR_14 != ((void*)0)) {
        if (!VAR_13->enc || !VAR_13->tag_set) {
            FUNC_0(VAR_0, VAR_10);
            return 0;
        }
        if (VAR_14->data_type != VAR_7) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (!VAR_13->hw->gettag(VAR_13, VAR_14->data, VAR_14->data_size))
            return 0;
        VAR_13->tag_set = 0;
        VAR_13->iv_set = 0;
        VAR_13->len_set = 0;
    }
    return 1;
}
